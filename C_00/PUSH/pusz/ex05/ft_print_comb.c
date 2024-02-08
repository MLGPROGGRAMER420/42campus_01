/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:14:48 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/18 22:14:52 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int a, int b, int c)
{
	char	temp;

	temp = '0' + a;
	write(1, &temp, 1);
	temp = '0' + b;
	write(1, &temp, 1);
	temp = '0' + c;
	write(1, &temp, 1);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		liczba1;
	int		liczba2;
	int		liczba3;

	liczba1 = 0;
	while (liczba1 <= 7)
	{
		liczba2 = liczba1 + 1;
		while (liczba2 <= 8)
		{
			liczba3 = liczba2 + 1;
			while (liczba3 <= 9)
			{
				print_numbers(liczba1, liczba2, liczba3);
				liczba3++;
			}
			liczba2++;
		}
		liczba1++;
	}
}
