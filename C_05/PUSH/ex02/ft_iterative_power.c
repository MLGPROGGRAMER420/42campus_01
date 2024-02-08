/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:30:50 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/06 19:17:27 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0 && nb != 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power == 0 && nb != 0)
	{
		return (1);
	}
	else
	{
		while (power > 1)
		{
			i = i * nb;
			power--;
		}
		return (i);
	}
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	result;

	x = -3;
	y = 2;
	result = ft_iterative_power(x, y);
	printf("%d", result);
}*/
