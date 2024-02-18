/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:00:47 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/15 13:19:16 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_len(char **str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (dest != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_full_length(int **string, int string_size, int sep_size)
{
	int	i;
	int	final_length;

	i = 0;
	final_length = 0;
	while (i < string_size)
	{
		final_length += ft_len(string[i]);
		final_length += sep_size;
		i++;
	}
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		f_l;
	int		i;
	char	*string;
	char	*dest;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	
	while (i < size)
	{
		ft_strcpy(dest, strs[i]);
		i++;
	}
	*dest = '\0';
	return (string);
}

int	main(void)
{
	char *strs[] = {"Karasie", "jedzą", "gówno", "!!!"};
	char *sep = "<->";

	int size = sizeof(strs) / sizeof(strs[0]);

	char *res = ft_strjoin(size, strs, sep);

	printf("Wynik to: %s", res);

	free(res);

	return (0);
}