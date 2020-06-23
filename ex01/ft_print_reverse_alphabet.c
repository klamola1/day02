/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:34:20 by klamola           #+#    #+#             */
/*   Updated: 2020/06/21 10:19:09 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char ch;
	for(ch ='z'; ch>='a'; ch --)
	{
		ft_putchar(ch);
	}
	ft_putchar('\n');
}
int 	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
