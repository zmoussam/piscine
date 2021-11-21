/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:43:28 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/26 18:34:35 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>
int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	tab = (int *)malloc(size * sizeof(int) + 1);
	if (tab == NULL)
		return (NULL);
	 i = 0;
	 while (i < size)
	{
		 tab[i] = min + i;
		 i++;
	}
	 tab[i] = '\0';
	 return (tab);
}
/* #include <stdio.h>
 int main(void)
{
	int i;
	int min;
	int max;
	int size;
	min = 0;
	max = 5;

	i = 0;
	int *p = ft_range( min, max);// tab
	size = max - min;
	while(i < size)
	{	
		printf("%d  ", p[i]);
		i++;
	}
}
*/
