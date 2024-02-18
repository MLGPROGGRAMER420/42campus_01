/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:54:34 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/14 15:32:28 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	len;

	i = 0;
	len = max - min;
	range = (int *)malloc(sizeof(int) * (len));
	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	while (i < max)
	{
		range[i++] = min;
		min++;
	}
	return (range);
}

int	main(void)
{
	int min = 50;
	int max = 100;

	int *result = ft_range(min, max);

	if (result != NULL)
	{
		free(result);
	}
	return (0);
}