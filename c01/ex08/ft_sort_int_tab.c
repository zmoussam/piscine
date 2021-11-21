/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:52:58 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/12 18:18:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_sort_int_tab( int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	i = 0 ;
	while (i < size)
	{
		j = i + 1 ;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swp = tab[i];
				tab[i] = tab[j];
				tab[j] = swp;
			}
			j++;
		}
		i++;
	}
}
