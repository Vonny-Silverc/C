/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skathryn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 13:57:12 by skathryn          #+#    #+#             */
/*   Updated: 2020/08/12 18:22:39 by skathryn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		check_strlen(char *str_map, int nb)
{
	int		i;
	int		mtr;

	i = 0;
	mtr = 0;
	while (str_map[i] != '\0')
	{
		if (str_map[i] == '\n')
			mtr++;
		i++;
	}
	if (nb != mtr - 1)
		return (-1);
	return (1);
}

int		empty_check(char *str_map)
{
	int		fst;
	int		i;

	fst = 0;
	while (str_map[fst] != '\n')
		fst++;
	i = (fst + 1);
	while (str_map[i] != '\0' && (str_map[i] == ' ' || str_map[i] == '\t' ||
			str_map[i] == '\r' || str_map[i] == '\n'))
		i++;
	if (str_map[(i + 1)] == '\0')
		return (-1);
	return (1);
}

int		check_enter(char *str_map, int nb)
{
	int i;
	int ent;

	i = 0;
	ent = 0;
	while (str_map[i] != '\0')
	{
		if (str_map[i] == '\n')
			ent++;
		i++;
	}
	if (ent != (nb + 1))
		return (-1);
	return (1);
}

int		check_valid(char *str_map, int nb)
{
	if (check_strlen(str_map, nb) != 1)
		return (-1);
	if (strlen_cmp(str_map) != 1)
		return (-1);
	if (check_enter(str_map, nb) != 1)
		return (-1);
	if (empty_check(str_map) != 1)
		return (-1);
	if (fln_check(str_map) != 1)
		return (-1);
	return (1);
}

int		check_valid_map(char *str_map)
{
	int		i;
	int		nb;
	char	empty;
	char	obstacle;
	char	full;

	i = first_str(str_map);
	nb = ft_atoi(str_map);
	if (nb <= 0)
		return (-1);
	empty = str_map[i - 3];
	obstacle = str_map[i - 2];
	full = str_map[i - 1];
	while (str_map[i] != '\0')
	{
		if (str_map[i] == empty || str_map[i] == obstacle || str_map[i] == '\n')
			i++;
		else
			return (-1);
	}
	if (check_valid(str_map, nb) != 1)
		return (-1);
	return (1);
}
