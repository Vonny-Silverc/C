/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 22:14:59 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/06 22:23:42 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void  print_result(int *a, int *b)
{
  printf("%d %d\n", *a, *b);
}

void	ft_swap(int *a, int *b)
{
	int	temp;
    
	temp = *a;
	*a = *b;
	*b = temp;
  
  print_result(a, b);
}

int   main(void)
{
  int x;
  int y;
  
  x = 5;
  y = 10;
  ft_swap(&x, &y);

  return (0);
}