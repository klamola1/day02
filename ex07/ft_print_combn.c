/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:01:34 by klamola           #+#    #+#             */
/*   Updated: 2020/06/21 14:07:52 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int i,j;
	for(i =0; i<9; i++)
	{
		for(j=1; j<=9; j++)
		{
			ft_putchar(i+'0');
			ft_putchar(j+'0');
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	ft_putchar('\n');
}
int	main()
{
	ft_print_combn(2);
	return(0);
}
