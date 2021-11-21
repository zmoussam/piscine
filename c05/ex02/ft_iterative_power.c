/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:39:26 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/23 10:10:40 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	R;

	R = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		R = R * nb;
		power--;
	}
	return (R);
}