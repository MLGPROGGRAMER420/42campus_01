/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explanation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:25:02 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/23 16:17:47 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_len(char *str)
// funkcja sprawdz długość stringa i ją zwraca
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
// funkcja duplikuje stringa
{
	int i;
	char *dest; // zmienna cel
	char *fl_dest;

	i = 0;
	fl_dest = (dest = ((char *)malloc(ft_str_len(src) * sizeof(char) + 1)));
	// alokowanie miejsca dla naszego stringa,
	// zaalokowana pamięć to długość naszego stringa plus 1
	if (fl_dest == NULL)
    // jeśli nasz ostateczny cel jest równy 0 to zwraca 1
	{
		return (0);
	}
	while (src[i])
    // przypisanie po kolei każdego znaku do celu 
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // na ostatnie miejsce wpisanie terminatora
	printf("src = %s\ndest = %s \n", src, dest);
	return (dest);
}

int	main(void)
{
	char string[] = "TEST";

	ft_strdup(string);

	printf("%s \n", string);
}