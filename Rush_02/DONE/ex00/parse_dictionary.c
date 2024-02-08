/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dictionary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:07:33 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/02/04 19:50:19 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef MAX_LINE_LENGTH
#define MAX_LINE_LENGTH 100
#endif
#ifndef DICTIONARY_PATH
#define DICTIONARY_PATH "./source/numbers.dict"
#endif

void	ft_print(char *str);
int		ft_isblank(char *str);
char	***parse_line(char line[MAX_LINE_LENGTH], char ***numbers, int numbers_index);

char	***parse_dictionary(char ***numbers)
{
	int		fd;
	char	buffer;
	char	line[MAX_LINE_LENGTH];
	int		bytes_read;
	int		i;
	int		line_index;

	fd = open(DICTIONARY_PATH, O_RDONLY);
	if (fd == -1)
	{
		ft_print("Dict Error\n");
		return (NULL);
	}
	i = 0;
	line_index = 0;
	while (1)
	{
		bytes_read = read(fd, &buffer, 1);
		if (bytes_read == 0)
			break ;
		if (i >= MAX_LINE_LENGTH)
			return (NULL);
		if (buffer == '\n')
		{
			line[i] = '\0';
			if (!ft_isblank(line))
			{
				if (parse_line(line, numbers, line_index) == NULL)
					return (NULL);
				line_index++;
			}
			i = 0;
			continue ;
		}
		else
			line[i] = buffer;
		i++;
	}

	if (close(fd) < 0)
	{
		ft_print("Dict Error\n");
		return (NULL);
	}
	return (numbers);
}
