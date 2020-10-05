/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsilverc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 16:31:23 by vsilverc          #+#    #+#             */
/*   Updated: 2020/03/14 17:22:37 by vsilverc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_print_reverse_alphabet(void)
{
	char  sym;

	sym = 'z';
	while (sym >= 'a')
	{
		ft_putchar(sym);
		sym--;
	}
}

int	    main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}