/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:44:33 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/24 12:42:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	le_factorial;

	le_factorial = 1;
	if (nb < 0)
		return (0);
	while (nb != 0 )
	{
		le_factorial = le_factorial * nb;
		nb--;
	}
	return (le_factorial);
}
