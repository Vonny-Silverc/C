/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:05:46 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/10 23:05:07 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int   main(void)
{
  int test_1 = -2147483648;
  int test_2 = -9999;
  int test_3 = 0;
  int test_4 = 5;
  int test_5 = 20;
  int test_6 = 2147483647;

  ft_putnbr(test_1);
  //ft_putnbr(test_2);
  //ft_putnbr(test_3);
  //ft_putnbr(test_4);
  //ft_putnbr(test_5);
  //ft_putnbr(test_6);

  return (0);
}