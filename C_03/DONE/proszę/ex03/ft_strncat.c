/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:39:59 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/30 14:40:01 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	z;

	i = 0;
	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[z] = src[i];
		i++;
		z++;
	}
	dest[z] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	test1[] = "Karasie jedzą ";
	char	test2[] = "gówno.";
	char	test3[] = "Karasie jedzą ";
	char	test4[] = "gówno.";

	printf("%s\n", ft_strncat(test1, test2, 0));
	printf("%s\n", strncat(test3, test4, 0));
	return (0);
}*/
