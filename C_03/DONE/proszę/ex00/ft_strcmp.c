/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:08:29 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/29 20:08:31 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	test1[] = "Hella123  ";
	char	test2[] = "Hella123";
	char	test3[] = "Hellad23";
	char	test4[] = "Hella123";

	printf("bigos : %d\n", ft_strcmp(test1, test2));
	printf("bigos : %d", strcmp(test3, test4));
}
