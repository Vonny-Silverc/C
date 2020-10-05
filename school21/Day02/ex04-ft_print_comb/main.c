/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 20:01:00 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/14 23:43:13 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_print_var(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	
  if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void    ft_print_comb(void)
{
	int		dig_three;
	int		dig_second;
	int		dig_first;

	dig_three = '0';
	while (dig_three <= '7')
	{
		dig_second = dig_three + 1;
		while (dig_second <= '8')
		{
			dig_first = dig_second + 1;
			while (dig_first <= '9')
			{
				ft_print_var(dig_three, dig_second, dig_first);
				dig_first++;
			}
			dig_second++;
		}
		dig_three++;
	}
}

int   main(void)
{
	ft_print_comb();
	return (0);
}