/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:12:05 by klamola           #+#    #+#             */
/*   Updated: 2020/06/21 10:18:11 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char ch;
	for(ch='a'; ch<='z'; ch++)
	{
		ft_putchar(ch);
	}
	ft_putchar('\n');
}
int		main(void)
{
	ft_print_alphabet();
	return(0);
}
