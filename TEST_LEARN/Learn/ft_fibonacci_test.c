/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:06:31 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/05 18:17:24 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	f1;
	int	f2;

	f1 = 0;
	f2 = 1;
	if (index < 0)
	{
		return (-1);
	}
	else
	{
		while (index > 0)
		{
			printf("%d \n", f1);
			f1 = f1 + f2;
			f2 = f1 - f2;
			index--;
		}
		return f1;
	}
}

int	main(void)
{
	int i;

	i = 12;

	ft_fibonacci(i);
}