/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:47:27 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/17 23:43:08 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
// funkcja obliczająca długość stringa
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcy(char *dest, char *src)
// funckja kopiująca stringa z adresu do źródła
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_comp_final_len(char **str, int size, int sep_len)
// funkcja obliczająca całkowitą długość wyrazu
{
	int final_len;
	int i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_strlen(str[i]);
		final_len += sep_len;
		i++;
	}
	final_len -= sep_len;
	return (final_len);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*str;
	char	*dest;

	if (size == 0)
	{
		return ((char *)malloc(sizeof(char)));
	}
	full_len = ft_comp_final_len(strs, size, ft_strlen(sep));
	dest = (str = (char *)malloc(sizeof(char) * (full_len + 1)));
	if (!dest)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		ft_strcy(dest, strs[i]);
		dest += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcy(dest, sep);
			dest += ft_strlen(sep);
		}
		i++;
	}
	*dest = '\0';
	return (str);
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
	free (res);
}