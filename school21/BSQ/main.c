/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skathryn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:46:16 by skathryn          #+#    #+#             */
/*   Updated: 2020/08/12 18:21:53 by skathryn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		fln_check(char *str_map)
{
	int		i;
	char	empty;
	char	obstacle;
	char	full;

	i = 0;
	while (str_map[i] >= '0' && str_map[i] <= '9')
		i++;
	empty = str_map[i++];
	obstacle = str_map[i++];
	full = str_map[i++];
	if (empty == obstacle || empty == full || obstacle == full)
		return (-1);
	if (empty == '\n' || obstacle == '\n' || full == '\n')
		return (-1);
	return (1);
}

int		main(int argc, char *argv[])
{
	op_map(argc, argv);
	return (0);
}
