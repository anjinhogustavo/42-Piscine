/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:24:12 by ganjinho          #+#    #+#             */
/*   Updated: 2024/01/23 19:28:37 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	*s1;
	char	*s2;

	s1 = "Gustavo";
	s2 = "Guslavo";
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d", strncmp(s1, s2, 3));
	return (0);
}
*/
