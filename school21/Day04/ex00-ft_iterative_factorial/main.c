/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:05:07 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/07 21:38:24 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int        ft_iterative_factorial(int nb)
{
  int      result;
  int      itr;

  itr = 1;
  result = 1;
  if ((nb <= 0) || (nb > 12))
    return (0);
  if (nb == 1)
    return (1);
  while (itr <= nb)
  {
    result = itr * result;
    itr++;
  }
  return (result);
}

int        main(void)
{
  int num = 5;
  num = ft_iterative_factorial(num);
  printf("%d", num);
	return (0);
}