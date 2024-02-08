/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:20:55 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/06 19:16:25 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}
/*
int	main(void)
{
	int i = 0;
	printf("%d", ft_iterative_factorial(i));

	return (0);
}*/