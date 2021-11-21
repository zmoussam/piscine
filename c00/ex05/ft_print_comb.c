/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:42:11 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/08 16:06:24 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	writing(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (! (x == '7' && y == '8' && z == '9'))
	{
		 write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0' ;
	while (x < '8')
	{
		y = x + 1 ;
		while (y < '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				writing(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
