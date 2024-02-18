/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:40:39 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/14 18:56:56 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	len;
	int	*ptr;

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

	// Wywołanie funkcji ft_ultimate_range
	arr_size = ft_ultimate_range(&arr, min, max);

	// Sprawdzenie czy alokacja pamięci się powiodła
	if (arr_size == -1)
	{
		printf("Błąd alokacji pamięci.\n");
		return (1); // Zwracamy 1, aby oznaczyć błąd
	}

	// Sprawdzenie czy zakres jest pusty
	if (arr == NULL)
	{
		printf("Zakres jest pusty.\n");
		return (0); // Zwracamy 0, zakres jest pusty
	}

	// Wyświetlenie zawartości tablicy
	printf("Tablica zawiera elementy:\n");
	for (int i = 0; i < arr_size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// Zwolnienie pamięci zaalokowanej dla tablicy
	free(arr);

	return (0); // Zwracamy 0, aby oznaczyć sukces
}