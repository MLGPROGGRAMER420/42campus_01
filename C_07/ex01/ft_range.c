/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:54:34 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/21 10:42:38 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	len;
	int	*d;

	i = 0;
	len = max - min;
	d = (range = (int *)malloc(sizeof(int) * (len)));
	if (!d)
		return (0);
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