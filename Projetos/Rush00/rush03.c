/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons@student.42porto.com <marvin@      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:16:10 by cda-fons@         #+#    #+#             */
/*   Updated: 2024/01/14 19:31:18 by cda-fons@        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	handle(int icpc, int ilpc, int cpc, int lpc)
{
	if ((ilpc == 0 || ilpc == lpc - 1) && icpc == 0)
	{
		ft_putchar('A');
	}
	else if ((ilpc == 0 || ilpc == lpc - 1) && icpc == cpc - 1)
	{
		ft_putchar('C');
	}
	else if (ilpc == 0 || ilpc == lpc - 1 || icpc == 0 || icpc == cpc - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	ic;
	int	il;

	ic = 0;
	il = 0;
	while (il <= y - 1)
	{
		while (ic <= x - 1)
		{
			handle(ic, il, x, y);
			ic++;
		}
		write(1, "\n", 1);
		ic = 0;
		il++;
	}
}
