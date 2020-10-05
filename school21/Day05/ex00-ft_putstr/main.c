/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 23:38:29 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/10 23:38:50 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
# define LEN 13

void	ft_putchar(char c)
{
  write(1, &c, 1);
}


void	ft_putstr(char *str)
{
	int elem;

	elem = 0;
	while (str[elem] != '\0')
	{
		ft_putchar(str[elem]);
		elem++;
	}
}

int   main(void)
{
  char buff[LEN] = {"HELLO WORLD\n"};


  ft_putstr(buff);

  return (0);
}