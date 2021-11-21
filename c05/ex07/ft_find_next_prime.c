/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:45:34 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/24 13:09:25 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	 long int	i;
	 long int	s;

	 if (nb < 2)
		 return (0);
	if (nb == 2)
		return (1);
	i = 2;
	s = 1;
	while (s * s < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
		s++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long int	i;

	i = 0;
	while (ft_is_prime(nb + i) != 1)
		i++;
	return (nb + i);
}
