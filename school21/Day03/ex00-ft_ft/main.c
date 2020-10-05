/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 08:11:13 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/06 20:32:44 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void  print_result(int *nbr)
{
  printf("%d", *nbr);
}

void	ft_ft (int *nbr)
{
	*nbr = 42;
  print_result(nbr);
}

int   main(void)
{
  int n;

  n = 5;
  ft_ft(&n);

  return (0);
}