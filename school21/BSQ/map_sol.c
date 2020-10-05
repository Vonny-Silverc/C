/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_sol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skathryn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:08:36 by skathryn          #+#    #+#             */
/*   Updated: 2020/08/12 18:25:00 by skathryn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		first_str(char *str_map)
{
	int		itr;

	itr = 0;
	while (str_map[itr] != '\n')
		itr++;
	return (itr);
}

int		second_str(char *str_map, int itr)
{
	int end_scnd_str;

	end_scnd_str = (itr + 1);
	while (str_map[end_scnd_str] != '\n')
		end_scnd_str++;
	return (end_scnd_str);
}

char	*map_solve(char *str_map)
{
	int		i;
	int		z;
	int		j;
	int		min_val;

	i = first_str(str_map);
	z = second_str(str_map, i);
	j = (z - i);
	while (str_map[++z] != '\0')
	{
		while (str_map[z] == '0' || str_map[z] == '\n' ||
			str_map[z - 1] == '\n')
			z++;
		min_val = 0;
		if (str_map[z - j] >= min_val)
		{
			min_val = str_map[z - j];
			if (str_map[z - (j + 1)] <= min_val)
				min_val = str_map[z - (j + 1)];
			if (str_map[z - 1] <= min_val)
				min_val = str_map[z - 1];
			str_map[z] = (min_val + 1);
		}
	}
	return (str_map);
}

int		find_max(char *str_map)
{
	int		itr;
	int		max_value;

	itr = 0;
	max_value = 0;
	while (str_map[itr] != '\n')
		itr++;
	while (str_map[++itr] != '\0')
	{
		if (str_map[itr] > max_value)
			max_value = str_map[itr];
	}
	max_value = max_value - 48;
	return (max_value);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i += 1;
	}
}
