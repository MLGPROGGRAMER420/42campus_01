/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:22:06 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/29 22:22:09 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && n - 1 > i && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char test1[] = "Hell33a123";
	char test2[] = "Hella123";

	printf("bigos : %d\n", ft_strncmp(test1, test2, 3));

	char test3[] = "Hell33a123";
	char test4[] = "Hella123";

	printf("bigos : %d", strncmp(test3, test4, 3));

	return (0);
}*/
