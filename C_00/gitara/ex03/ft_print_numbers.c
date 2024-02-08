/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:58:57 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/18 15:59:24 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	liczba;

	liczba = '0';
	while (liczba <= '9')
	{
		write(1, &liczba, 1);
		liczba++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
