/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:31:33 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/02/04 20:47:18 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	int size;
	char *new;

	size = ft_strlen(src);
	new = (char *)malloc(sizeof(char) * size);
	ft_strcpy(new, src);
	return (new);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z'
		|| c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_isprintable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

int	ft_isblank(char *str)
{
	while (str++)
		if (!ft_isspace(*str))
			return (0);
	return (1);
}

void	ft_print(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*trim_right(char *str)
{
	int	strlen;

	strlen = ft_strlen(str);
	while (str[strlen - 1] < 33 || str[strlen - 1] > 126)
		strlen--;
	str[strlen] = '\0';
	return (str);
}

char	*trim_left(char **str)
{
	while (**str == '0')
	{
		if ((*str)[1] == '\0')
			break ;
		(*str)++;
	}
	return (*str);
}
