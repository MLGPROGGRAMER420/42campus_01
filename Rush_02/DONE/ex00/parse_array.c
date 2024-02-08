/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:22:34 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/02/04 20:50:28 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define DICTIONARY_PATH "./source/numbers.dict"
#define MAX_LINE_LENGTH 100

void	ft_print(char *str);
char ***parse_dictionary(char ***numbers);
int	ft_isblank(char *str);
char	*trim_right(char *str);
char	**trim_left(char **str);

int	count_lines(void)
{
	int fd;
	char buffer;
	char line[MAX_LINE_LENGTH];
	int i;
	int lines_count;

	fd = open(DICTIONARY_PATH, O_RDONLY);
	if (fd == -1)
	{
		ft_print("Dict Error\n");
		return (-1);
	}
	i = 0;
	while (read(fd, &buffer, 1) > 0)
	{
		if (i >= MAX_LINE_LENGTH)
			return (-1);
		if (buffer == '\n')
		{
			line[i] = '\0';
			lines_count += !ft_isblank(line);
			i = 0;
			continue;
		}
		else
			line[i] = buffer;
		i++;
	}
	if (close(fd) < 0)
	{
		ft_print("Dict Error\n");
		return (-1);
	}
	return (lines_count);
}

char	***create_array(void)
{
	char	***numbers;
	int		lines_count;

	lines_count = count_lines();
	if (lines_count < 1)
		return (NULL);
	numbers = (char ***) malloc(sizeof(char **) * lines_count);
	numbers = parse_dictionary(numbers);
	return (numbers);
}

int	main(void)
{
	char ***numbers;
	numbers = create_array();
	if (numbers == NULL)
		printf("error occured");

	printf("%s", numbers[4][1]);
	// char *str = "0000012";
	// trim_left(&str);
	// printf(str);
	return (0);
}
