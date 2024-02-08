/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:40:51 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/29 23:40:53 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	while (src[i] != '\0')
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
	char	test1[50] = "jebac";
	char	test2[] = "police.\n";

	printf("%s", ft_strcat(test1, test2));
	return (0);
}*/
