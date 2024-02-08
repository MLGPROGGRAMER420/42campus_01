/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:52:00 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/30 14:52:02 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		z = 0;
		while (str[i + z] == to_find[z] && to_find[z] != '\0')
		{
			z++;
			if (to_find[z] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char test1[] = "Mój stary jest fanatykiem wędkarstwa";

	printf("%s", ft_strstr(test1, "jest"));

	// char test2[] = "Mój stary jest fanatykiem wędkarstwa";

	// printf("%s", strstr(test2, "fan"));


	return (0);
}*/