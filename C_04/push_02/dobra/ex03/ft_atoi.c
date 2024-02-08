/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:20:05 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/03 22:52:01 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 9 || *str == 10 || *str == 11 || *str == 12 || *str == 13
		|| *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == 45)
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (result * sign);
}
/*
int	main(int agrc, char *argv[])
{
	char	*str;
	int		rezultat;

	if (agrc != 2)
	{
		printf("W programie \"%s\" podaj tylko jedną wartość \n", argv[0]);
		return (1);
	}
	str = argv[1];
	rezultat = ft_atoi(str);
	printf("Rezultat: %d\n", rezultat);
}*/
