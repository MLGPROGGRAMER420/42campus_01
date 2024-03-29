/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:54:34 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/23 16:51:50 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	len;

	len = max - min;
	range = (int *)malloc(sizeof(int) * (len));
	if (!range)
		return (0);
	if (min >= max)
		return (NULL);
	i = 0;
	while (i < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

int	main(void)
{
	int min = 50;
	int max = 100;
	int i = 0;
	int *result = ft_range(min, max);

	if (!result)
	{
		printf("Błąd alokacji.\n");
		return (1);
	}

	while (min < max)
	{
		printf("%d \n", result[i]);
		i++;
	}
	free(result);
	return (0);
}