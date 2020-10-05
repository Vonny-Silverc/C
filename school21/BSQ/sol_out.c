/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sol_out.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skathryn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:08:16 by skathryn          #+#    #+#             */
/*   Updated: 2020/08/12 18:24:45 by skathryn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	*form_square(char *str_map, int max_value, int len)
{
	int		itr;
	int		mtr;
	int		max;

	itr = 0;
	while (str_map[itr] != '\n')
		itr++;
	while (str_map[itr] != max_value + 48)
		itr++;
	mtr = itr;
	max = max_value;
	while (max != 0)
	{
		while (mtr != itr - max_value)
		{
			str_map[mtr] = 'a';
			mtr--;
		}
		mtr = itr - len;
		itr = mtr;
		max--;
	}
	return (str_map);
}

char	*rev_transf(char *str_map)
{
	int		itr;
	char	empty;
	char	full;
	char	obstacle;

	itr = 0;
	while (str_map[itr] >= '0' && str_map[itr] <= '9')
		itr++;
	empty = str_map[itr++];
	obstacle = str_map[itr++];
	full = str_map[itr++];
	while (str_map[itr] != '\0')
	{
		if (str_map[itr] >= '1' && str_map[itr] <= '9')
			str_map[itr] = empty;
		if (str_map[itr] == '0')
			str_map[itr] = obstacle;
		if (str_map[itr] == 'a')
			str_map[itr] = full;
		itr++;
	}
	return (str_map);
}

char	*clear_map(char *str_map)
{
	int		itr;
	char	empty;
	char	full;
	char	obstacle;

	itr = 0;
	while (str_map[itr] >= '0' && str_map[itr] <= '9')
		itr++;
	empty = str_map[itr++];
	obstacle = str_map[itr++];
	full = str_map[itr++];
	while (str_map[++itr] != '\0')
	{
		if (str_map[itr] != empty && str_map[itr] != obstacle &&
				str_map[itr] != full && str_map[itr] != '\n')
			str_map[itr] = empty;
	}
	return (str_map);
}

void	map_out(char *str_map)
{
	int itr;

	itr = (first_str(str_map) + 1);
	while (str_map[itr] != '\0')
	{
		write(1, &str_map[itr], 1);
		itr++;
	}
}

char	*create_map(char *str_map)
{
	int		itr;
	char	empty;
	char	full;
	char	obstacle;

	itr = first_str(str_map);
	full = str_map[itr - 1];
	empty = str_map[itr - 2];
	obstacle = str_map[itr - 3];
	while (str_map[itr] != '\0')
	{
		if (str_map[itr] == empty)
			str_map[itr] = '0';
		if (str_map[itr] == obstacle)
			str_map[itr] = '1';
		itr++;
	}
	return (str_map);
}
