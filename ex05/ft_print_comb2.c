/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:18:47 by klamola           #+#    #+#             */
/*   Updated: 2020/06/21 14:21:43 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int i,j,x,y;
	for(i = 0; i <=9; i++)
	{
		for(j = 0; j <=8; j++)
		{
			for(x=0;x<=9;x++)
			{
				for(y=1;y<=9;y++)
				{
					ft_putchar(i+'0');
					ft_putchar(j+'0');
					ft_putchar(' ');
					ft_putchar(x+'0');
					ft_putchar(y+'0');
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	ft_putchar('\n');
}
int	main()
{
	int i,j;
	ft_print_comb2();
	return(0);
}
