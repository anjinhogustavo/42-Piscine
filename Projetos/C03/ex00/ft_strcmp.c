/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:36:57 by ganjinho          #+#    #+#             */
/*   Updated: 2024/01/23 16:50:38 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	*s1;
	char	*s2;

	s1 = "Gustavo";
	s2 = "Gastavo";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
	return (0);
}
*/
