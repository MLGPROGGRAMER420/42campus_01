/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:49:13 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/22 13:49:16 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int liczba1)
{
	int	tens;
	int	ones;

	if (liczba1 < 10)
	{
		print_char('0');
		print_char(liczba1 + '0');
	}
	else
	{
		tens = liczba1 / 10;
		ones = liczba1 % 10;
		print_char(tens + '0');
		print_char(ones + '0');
	}
}

void	ft_print_comb2(void)
{
	int	liczba1;
	int	liczba2;

	liczba1 = 0;
	while (liczba1 <= 99)
	{
		liczba2 = liczba1 + 1;
		while (liczba2 <= 99)
		{
			int_to_char(liczba1);
			print_char(' ');
			int_to_char(liczba2);
			if (liczba1 < 98)
			{
				print_char(',');
				print_char(' ');
			}
			liczba2++;
		}
		liczba1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
