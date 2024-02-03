/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:54:16 by ganjinho          #+#    #+#             */
/*   Updated: 2024/01/24 19:35:34 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	l = 0;
	if (str[i] == 0 && to_find[i] == 0)
		return (&str[i]);
	while (to_find[l] != '\0')
	{
		l++;
	}
	while (str[i])
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (j == l)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[100] = "p";
	char	to_find[] = " ";

	printf("vossa: %s\n", ft_strstr(str, to_find));
	printf("original: %s", strstr(str, to_find));
}
*/
