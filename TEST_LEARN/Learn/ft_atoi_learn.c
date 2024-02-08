/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:24:56 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/01 18:25:02 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int wynik = 0; // deklarowanie zmienj która jest końcowym wynikiem
	int znak = 1;  // zmienna odpowiadająca znakowi liczby końcowej
	while (*str == 9 || *str == 10 || *str == 11 || *str == 12 || *str == 13
		|| *str == 32)
	// sprawdzenie czy nasz liczba nie jest znajkiem białym takim jak
	// spacja, tab czy przejście do następnej lini
	// jeśli jest nastepuje przejście do nastepnego znaku
	{
		*str++;
	}
	while (*str == '-' || *str == '+')
	{ // jeśli nasz ciąg znaków jest równy '-' lub '+' to..
		if (*str == 45)
		// sprawdzenie czy nasza liczba jest ujemna 45 = '-'
		// jeśli jest to następuje zmiana znaku oraz przejście na nastepny znak
		{ // jeśli jest to + przechodzi do nastepnego znaku
			znak *= -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{ // jeśli nasza liczba zawiera się w 0 do 9
		wynik *= 10;
		wynik += *str - 48;
		// wynik = poprzednia liczba pomnożona przez 10 plus liczba z ciągu - 0
		str++; // przechodzi na następny znak
	}
	return (wynik * znak); // zwraca wynik pomnożony o ostateczny znak
}

int	main(int agrc, char *argv[]) // skanowanie argumnetu
{
	if (agrc != 2) // jeśli ilość argumentów bedzie różna od 2 to wypisuje (..)
	{              // oraz kończy działanie programu
		printf("W programie \"%s\" podaj tylko jedną wartość \n", argv[0]);
		return (1);
	}
	char *str = argv[1]; // przypisanie podanego argumentu do stringa
	int rezultat;        // zmienna w której zapisuje wynik naszego programu

	rezultat = ft_atoi(str);

	printf("Rezultat: %d\n", rezultat);
}