/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explanatio.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:32:43 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/14 18:40:30 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *ptr; // zdefiniowanie pointera
	int i;    // zdefiniowanie zmienne do obliczania miejsca
	int len;  // zmienna do obliczania zakresu

	len = max - min; // obliczanie zakresu

	if (min >= max) // warunek jeśli min jest większe lub równe max to...
	{
		*range = 0; // to nasza zmienna zakres jest równa 0
		return (0); // i program zwraca 0
	}

	ptr = (int *)malloc(sizeof(**range) * (len));
	// nasz pointer alokuje mijesce inta(**range) i mnoży go razy nasz zakres (len)
	if (ptr == NULL) // === if(!ptr)
						// jeśli nasza zaalokowana pamięć jest pusta to zwacamy 0
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	// pętla która wykonuje się do puki min jest mniejsze od maxa
	{
		ptr[i++] = min; // przypisywanie miejsca min od ptr, czyli
		min++;
	}
	// jeśli nasza wartość min jest równa 5 a max 10 to program przypisuje po kolei każde miejsce od 5 do 9
	// zwiekszając min,'i' ponieważ ta wartośc przeskakuje na kolejne miejsce w naszym pointerze od 0 do każdego
	// zapisując od 5 do 9 w nim czyli 4 ponieważ 9 - 5= 4
	*range = ptr; // przypisanie naszego pointera do zakresu 
	return (i); // tutaj nasz program zwraca ile zakresu użyliśmy czyli w naszym przypadku 4
}