/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 00:08:04 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/23 00:08:07 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
printf("Beforeswapping\n a = %d\n b = %d\n", *a, *b);
printf("After swapping\n *a = %d\n *b = %d\n", *a, *b);
int	main(void) {

	int x = 1;
	int y = 2;
	ft_swap(&x, &y);

	return (0);
}*/
