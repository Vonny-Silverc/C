/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_open.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:49:46 by vsilverc          #+#    #+#             */
/*   Updated: 2020/08/12 18:23:46 by skathryn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	link_all(char *map)
{
	int		max_value;
	int		len;

	create_map(map);
	map_solve(map);
	max_value = find_max(map);
	len = strlen_max(map);
	form_square(map, max_value, len);
	rev_transf(map);
	clear_map(map);
	map_out(map);
}

char	*map_great(char *map_int)
{
	int	itr;

	itr = 0;
	while (map_int[itr] != '\0')
	{
		if (map_int[itr] == ' ')
			map_int[itr] = '\n';
		itr++;
	}
	return (map_int);
}

void	inp_map(void)
{
	int		file;
	char	*map_int;
	char	*map_up;

	file = 0;
	map_int = stack_map(file);
	map_up = map_great(map_int);
	if (check_valid_map(map_up) == 1)
		link_all(map_up);
	else
		ft_putstr("map error\n");
}

void	op_map(int argc, char **argv)
{
	int		itr;
	int		file;
	char	*map;

	itr = 0;
	file = 0;
	if (argc == 1)
		inp_map();
	while (++itr < argc)
	{
		file = open(argv[itr], O_RDONLY);
		if (file == -1)
			ft_putstr("map error\n");
		if (file >= 0)
		{
			map = read_map(file);
			if (check_valid_map(map) == 1)
				link_all(map);
			else
				ft_putstr("map error\n");
		}
		close(file);
	}
}

char	*read_map(int file)
{
	int		r;
	char	*str_map;
	char	buffer[BUFFER_SIZE];

	str_map = malloc(sizeof(*str_map) * BUFFER_SIZE);
	while ((r = read(file, buffer, BUFFER_SIZE)))
	{
		if (r == -1)
		{
			ft_putstr("map error\n");
			return (0);
		}
		buffer[r] = '\0';
		str_map = buffer;
	}
	return (str_map);
}
