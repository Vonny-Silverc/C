/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 17:30:41 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/14 17:40:50 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_print_numbers(void)
{
	char  num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}

int     main(void)
{
	ft_print_numbers();	
  return (0);
}