/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_intb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:13:41 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/13 08:43:11 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	j = size ;
	i = 0;
	while (i < j)
	{
		swp = tab[i];
		tab[i] = tab[j - 1];
		tab[j - 1] = swp;
		i++;
		j--;
	}
}
int main ()
{
	char str[];
	str[6]="sdefr";
	ft_rev_int_tab(str[],5);
	
}
