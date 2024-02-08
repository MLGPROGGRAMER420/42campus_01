/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:39:38 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/01/27 15:39:40 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int     ft_str_is_lowercase(char *str)
{
    unsigned int i;

    i = 0;
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] == '\0'))
        {
        i++;
        }else
        {
            return 0;
        }
        return 1;
    }
}