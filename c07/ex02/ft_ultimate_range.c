/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:07:50 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/26 18:38:00 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = (int *)malloc(size * sizeof(int));
	if (tab == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = '\0';
	return (size);
}
/*
#include<stdio.h>
int main()
{
	int	*p ,i ,size ,min ,max;
	min = -10;
	max = 3;
	i = 0;
	size = ft_ultimate_range(&p ,min ,max);
	printf("%d\n",size);
	while(i < size)
	{
		printf("%d\n", p[i]);
		i++;
	}
}
*/
