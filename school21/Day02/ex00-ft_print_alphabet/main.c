/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:25:57 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/14 16:28:50 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_print_alphabet(void)
{
	char  sym;

	sym = 'a';
	while (sym <= 'z')
	{
		ft_putchar(sym);
		sym++;
	}
}

int     main(void)
{
	ft_print_alphabet();
	return (0);
}