/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:11:45 by klamola           #+#    #+#             */
/*   Updated: 2020/06/21 14:23:27 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int x,y,z;
	for(x = 0; x <= 7; x++)
	{
		for(y = x+1; y <= 8; y++)
		{
			for(z = y+1; z <= 9; z++)
			{
				ft_putchar(x+'0');
				ft_putchar(y+'0');
				ft_putchar(z+'0');
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('\n');
}

int	main()
{
	ft_print_comb();
	return(0);
}
