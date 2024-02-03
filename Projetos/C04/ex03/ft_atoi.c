/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:23:41 by ganjinho          #+#    #+#             */
/*   Updated: 2024/01/27 15:06:46 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sn;
	int	i;
	int	res;

	i = 0;
	sn = 1;
	res = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sn = -sn;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sn);
}
/*
#include <stdio.h>
int	 main()
{
	char 	s1[] = "   ++--+++---++++++++++++++-1251";
	printf("%d", ft_atoi(s1));
}
*/
