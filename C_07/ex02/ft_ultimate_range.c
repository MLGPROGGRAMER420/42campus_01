/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:32:43 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/08 19:11:52 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}

	*range = (int *)malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	while (i < len)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (len);
}