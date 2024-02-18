#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int i;      // zmienna odnosząca się do liczby zakresu
	int *range; // zmienan do alokowania zakresu
	int len;    // wartość długości naszego zakresu
	i = 0;
	len = max - min; // obliczanie zakresu
	range = (int *)malloc(sizeof(int) * (len));
	// alogowanie miejsca dla naszego zakresu w pamięci komputera
	// zakres = (rodzaj zmiennej) alokacja (miejsca(zmiennej) (*)razy (w tym przypadku długość naszego zakresu))
	if (min >= max) // jeśli nasz zakres spełnia ten warunek to...
	{
		range = NULL; // alokuje NULL oraz go zwraca tym samym nic nie alokując
		return (range);
	}
	while (i < max)
	// jeśli nasz zakres jest mniejszy od maxa to pętla się wykonuje
	{
		range[i++] = min;
		// przypisywanie kolejnego miejsca w pamięci przeskakując na koljne miejsce w pamięci zmienna "i"
		// oraz przeskakując zmienną "min" do góry, 
		min++;
	}
	return (range); // na samym końcu zwaracamy nasz zaalokowany zakres
}

int	main(void)
{
	int min = 50;
	int max = 100;

	int *result = ft_range(min, max); //przypisanie naszej funckji do poitera aby móc następnie z niego skorzystać

	if (result != NULL) //jeśli zostało coś zaalokowane to po wykonaniu tej funkcji zwalaniamy zaalokowane mijesce
	{
		free(result);
	}
	return (0);
}