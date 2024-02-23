/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:25:02 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/21 10:39:36 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_len(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	char	*fl_dest;

	i = 0;
	fl_dest = (dest = ((char *)malloc(ft_str_len(src) * sizeof(char) + 1)));
	if (fl_dest == NULL)
	{
		return (0);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("src = %s\ndest = %s \n", src, dest);
	return (dest);
}

int	main(void)
{
	char string[] = "TEST";

	ft_strdup(string);

	printf("%s \n", string);
}