/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:50:59 by ganjinho          #+#    #+#             */
/*   Updated: 2024/01/18 10:24:28 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 12;
	b = 24;

	printf("A: %d, B: %d\n", a, b);
	ft_swap(&a, &b);

	printf("\nA: %d, B: %d", a, b);
	return (0);
}
*/
