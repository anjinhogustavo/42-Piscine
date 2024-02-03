/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:38:08 by ganjinho          #+#    #+#             */
/*   Updated: 2024/01/23 11:49:41 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	if (str[0] >= 'a' || str[0] <= 'z')
	{
		str[0] -= 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0 ;
	lowercase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ' && str[i] <= '/')
			|| (str[i] >= '{' && str[i] <= '~'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s", ft_strcapitalize(str));
}
*/
