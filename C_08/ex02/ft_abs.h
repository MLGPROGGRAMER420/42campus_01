/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:02:59 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/07 20:05:41 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ABS(value) \
({int result; \
if(value > 0) \
    result = value; \
else \
    result = -1 * value; \
result;\
})

//#define ABS(Value) ((Value > 0) ? (Value) : (Value * -1))