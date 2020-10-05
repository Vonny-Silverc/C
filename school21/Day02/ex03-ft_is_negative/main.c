/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 19:11:35 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/14 19:29:18 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

int     main(void)
{
  ft_is_negative(25);
	ft_is_negative(-25);
  ft_is_negative(0);
	return (0);
}