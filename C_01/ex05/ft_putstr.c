/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:54:07 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/23 17:54:09 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstd(char *str)
{
	int	i;

	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstd("Hello kristofer");
	return (0);
}
