/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 18:27:51 by vsilverc          #+#    #+#             */
/*   Updated: 2020/08/12 18:25:51 by skathryn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		ft_atoi(char *str)
{
	int i;
	int number;
	int sign;

	i = 0;
	number = 0;
	sign = 1;
	if (str == '\0')
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i += 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i += 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i += 1;
	}
	return (number * sign);
}

char	*stack_map(int file)
{
	char	buffer[BUFFER_SIZE];
	char	*str_map;
	int		r;

	str_map = malloc(sizeof(*str_map) * BUFFER_SIZE);
	while ((r = read(file, buffer, BUFFER_SIZE)) == '\0')
	{
		if (r == -1)
		{
			ft_putstr("map error\n");
			return (0);
		}
		buffer[r] = '\0';
		str_map = buffer;
	}
	ft_strcpy(str_map, buffer);
	return (str_map);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	itr;

	itr = 0;
	while (src[itr] != '\0')
	{
		dest[itr] = src[itr];
		itr++;
	}
	dest[itr] = '\0';
	return (dest);
}

int		strlen_max(char *str_map)
{
	int itr;
	int len_str;
	int snd;

	itr = 0;
	while (str_map[itr] != '\n')
		itr++;
	snd = itr + 1;
	while (str_map[snd] != '\n')
		snd++;
	len_str = snd - itr;
	return (len_str);
}

int		strlen_cmp(char *str_map)
{
	int itr;
	int mtr;
	int len;
	int two_len;

	itr = 0;
	while (str_map[itr] != '\n')
		itr++;
	two_len = (itr + 1);
	while (str_map[two_len] != '\n')
		two_len++;
	len = (two_len - (itr + 1));
	itr = (two_len + 1);
	while (str_map[itr] != '\0')
	{
		mtr = 0;
		while (str_map[itr++] != '\n')
			mtr++;
		if (mtr != len)
			return (-1);
	}
	return (1);
}
