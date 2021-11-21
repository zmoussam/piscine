/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:49:38 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/24 12:45:19 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/* int	ft_fibonacci(int index)
{
	int Fn;
	int F1;
	int F2;
	int i;
	if (index < 0)
		return(-1);
	if (index == 0)
		return (0);
	if (index == 1)
	   return (1);
	else
	{ 
		i = 3;
		F1 = 1 ;
		F2 = 1;
		while(i <= index)
		{
			Fn = F1 + F2;
			F1 = F2;
			F2 = Fn;
			i++;
		}
	}
	return (Fn);
}
#include<stdio.h>
int main()
{
	printf("%d\n",ft_fibonacci(5));
	return 0 ;

}
*/
