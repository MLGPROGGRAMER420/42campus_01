/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:18:27 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/06 13:24:56 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (x * x == nb)
		return (x);
	else
	{
		while (x * x != nb)
		{
			if (x > 46340)
				return (0);
			else
				x++;
		}
		return (x);
	}
}
/*
int	main(void)
{
	int		i;

	i = 4;
	printf("%d", ft_sqrt(i));
}*/
