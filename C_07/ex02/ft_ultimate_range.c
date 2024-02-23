/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:40:39 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/23 17:18:27 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	len;

	size = 0;
	len = max - min;
	*range = (int *)malloc(sizeof(int) * (len));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[size++] = min;
		min++;
	}
	return (size);
}
int	main(void)
{
	int min = 5;
	int max = 10;
	int *arr;
	int arr_size;

	arr_size = ft_ultimate_range(&arr, min, max);

	if (arr_size == -1)
	{
		printf("Błąd alokacji pamięci.\n");
		return (1);

		if (arr == NULL)
		{
			printf("Zakres jest pusty.\n");
			return (0);
		}

		printf("Tablica zawiera elementy:\n");
		int i = 0;
		while (i < arr_size)
		{
			printf("%d ", arr[i]);
			i++;
		}
		printf("\n");

		free(arr);

		return (0);
	}
}