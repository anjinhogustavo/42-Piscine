/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:41:06 by ganjinho          #+#    #+#             */
/*   Updated: 2024/01/18 13:04:39 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	i;
	int	d;
	int	u;
	int	*ptr;

	ptr = &i;
	ft_ft(ptr);

	d = (i / 10) + '0';
	u = (i % 10) + '0';
	write(1, &d, 1);
	write(1, &u, 1);
}
