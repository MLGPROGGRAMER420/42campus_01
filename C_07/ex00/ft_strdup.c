/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:25:02 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/23 16:23:29 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_dup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc((ft_str_len(str) + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	printf("s = %s \n", dest);
	return (dest);
}

int	main(void)
{
	char test[] = "String";
	char *res = ft_dup(test);

	printf("s = %s \n", res);
	free(res);

	return (0);
}