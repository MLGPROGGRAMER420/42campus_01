/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:44:31 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/06 13:41:15 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb != 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	else
	{
		while (power > 1)
		{
			return (nb * ft_recursive_power(nb, power - 1));
		}
	}
	return (nb);
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	result;

	x = 3;
	y = 4;
	result = ft_recursive_power(x, y);
	printf("%d", result);
}*/
