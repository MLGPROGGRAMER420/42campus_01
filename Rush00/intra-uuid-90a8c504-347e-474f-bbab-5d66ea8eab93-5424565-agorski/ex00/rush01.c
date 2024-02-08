/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:08:48 by agorski           #+#    #+#             */
/*   Updated: 2024/01/21 18:08:51 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	line(char begin, char mid, char end, int szer)
{
	ft_putchar(begin);
	while (szer > 2)
	{
		ft_putchar(mid);
		szer -- ;
	}
	if (szer == 2)
	{
		ft_putchar(end);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	wys;

	if (x <= 0 || y <= 0)
		return ;
	wys = y;
	while (wys >= 1)
	{
		if (wys == y)
		{
			line('/', '*', '\\', x);
		else if (wys == 1)
		{
			line('\\', '*', '/', x);
		else
			line('*', ' ', '*', x);
		wys --;
		}
	}
}
