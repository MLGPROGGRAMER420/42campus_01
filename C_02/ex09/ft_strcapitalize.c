/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:50:20 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/27 18:50:23 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		fl;

	fl = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (
			!(((str[i] >= 'a') && (str[i] <= 'z'))
				|| ((str[i] >= 'A') && (str[i] <= 'Z'))
				|| ((str[i] >= '0') && (str[i] <= '9')))
			)
			{
				fl = 1;
			}
		if(fl == 1 && ((str[i - 1] >= '0') && (str[i - 1] <= '9')))
		{
			fl = 0;
		}
		if (fl == 1 && ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			fl = 0;
			str[i] = str[i] - 32;
		}
		if(fl == 0 && (str[i + 1] >= 'A') && (str[i + 1] <= 'Z'))
		{
			str[i] = str[i + 1] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char test1[] = "ssaLut, coMMENT tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(test1);
	printf("%s", test1);

	return (0);
}