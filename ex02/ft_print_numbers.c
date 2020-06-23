/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:43:21 by klamola           #+#    #+#             */
/*   Updated: 2020/06/21 10:19:51 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_numbers(void)
{
	char i;
	for(i = '0'; i <='9'; i++)
	{
		ft_putchar(i);
	}
	ft_putchar('\n');
}
int		main(void)
{
	ft_print_numbers();
	return(0);
}

