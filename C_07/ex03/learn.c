/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:47:27 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/18 19:11:09 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
// funkcja obliczająca długość stringa
{
	int len; // zmienna długość

	len = 0;
	while (str[len] != '\0') // kiedy nasza zmienna jest różna od terminatora
	{
		len++; // przechodzi na następną pozycje
	}
	return (len); // zwraca ilość pozycji
}

char	*ft_strcpy(char *dest, char *src)
// funckja kopiująca stringa z adresu do źródła
{
	int i;

	i = 0;
	while (src[i] != '\0') // dopuki nasze źródło jest różne od terminatora
	{
		dest[i] = src[i];
			// przenosi po kolei każdy znak z źródła do celu znak po znaku
		i++;
	}
	dest[i] = '\0';
		// jako ostatni znak pisze termiantor jeśli nasza pętla kończy się np na 4 znaku to zapisuje na 4 pozycji termiantor
	return (dest);  // zwraca nasz cel
}

int	ft_comp_final_len(char **str, int size, int sep_len)
		// **str to tablica size wielkość a sep_len to długość naszego separatora
// funkcja obliczająca całkowitą długość wyrazu
{
	int final_len; // cała długość wszystkich znaków
	int i;

	final_len = 0;
	i = 0;
	while (i < size)
		// pętla wykonuje sie do puki nasze i jest mniejsze od size (wielkości naszej talbicy
	{
		final_len += ft_strlen(str[i]);
			// sumuje fl i obliczoną długość wyrazu str zapisując w fl
		final_len += sep_len;          
			// sumuje fl i długość naszego separatora
		i++;
	}
	final_len -= sep_len; // odejmuje długość naszego separatora
	return (final_len);  
		// zwraca nam długość naszego ciągu wyrazów bez dłogości naszego separatora
}
char	*ft_strjoin(int size, char **strs, char *sep)
// funkcja łącząca oraz alokująca nasz ciąg znaków
{
	int full_len; // zmienna dotycząca pełnej długości naszego ciągu
	int i;
	char *str;  // nasz string
	char *dest; // nasz cel

	if (size == 0)
		// jeśli nasza wielkość tablicy jest równa 0 to zwracamy i nic nie alokujemy
	{
		return ((char *)malloc(sizeof(char)));
	}
	full_len = ft_comp_final_len(strs, size, ft_strlen(sep));    
		// zapisywanie całkowietej długości ciagu
	dest = (str = (char *)malloc(sizeof(char) * (full_len + 1)));
		// zapisywanie naszej zaalokowaniej pamięci w destci oraz alokowanie pełnej długości ciągu
	if (!dest)                                                   
		// jeśli nasza zaalokowana pamięć jest równa NULL to zwracamy 0
	{
		return (0);
	}
	i = 0;
	while (i < size)
	// pętla scalająca całą tablice w stringa oddzielonego separatorami
	{
		ft_strcpy(dest, strs[i]);  
			// przepisywanie po kolei każdego znaku z pierwszego miejsca tablicy do desta zapisując to wszystko w zaalokowanej pamięci
		dest += ft_strlen(strs[i]); // nadpisanie do desta długość naszego ciagu
		if (i < size - 1)          
			// dodanie separatora co każdą pozycje w naszej tablicy jeśli nasze i jest mniejsze od wielkości naszej talbicy
		{
			ft_strcpy(dest, sep);
			dest += ft_strlen(sep);
		}
		i++;
	}
	*dest = '\0'; // dodawanie terminatora na końcu celu
	return (str); // zwracanie stringa
}

int	main(void)
{
	char *string[4];
	char *sep;
	char *res;
	int size;

	size = 4;

	string[0] = "Karasie";
	string[1] = "jedzą";
	string[2] = "gówno";
	string[3] = "!!!";
	sep = "__";
	res = ft_strjoin(size, string, sep);

	printf("%s \n", res);
	free(res);
}