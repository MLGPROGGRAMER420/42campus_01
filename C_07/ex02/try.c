/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:11:25 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/23 17:27:59 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	res;

	*range = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
int	main(void)
{
	int min = 10;
	int max = 25;
	int *res;
	int result;

	result = ft_ultimate_range(&res, min, max);

	printf("%d \n", result);
}