/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:32:29 by zmoussam          #+#    #+#             */
/*   Updated: 2021/08/16 17:47:23 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	 i = 1;
	 while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	 i = 1;
	 while (str [i] != '\0')
		 {
		 if ((str[i - 1] <= 47 || (str[i - 1] >= 58 && str[i - 1] <= 64)
				|| (str[i - 1] >= 91 && str[i - 1] <= 96)
				|| str[i - 1 ] >= 123) && (str[i] >= 'a' && str[i] <= 'z'))
			 {
			 str[i] = str[i] - 32;
			 }
		 i++;
		 }
	 return (str);
}
