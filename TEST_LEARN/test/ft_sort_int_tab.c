/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:11:05 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/24 12:11:07 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c){
    write(1,&c,1);
}

void    ft_sort_int_tab(int *tab, int size)
{
    while(size > 0)
    {
    ft_putchar(*tab + '0');
        tab++;
        size--;
    }
}

int     main(void)
{
    int test[] = {7, 2, 4, 1, 9};
    ft_sort_int_tab(test, 5);

    return 0;
}