/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:24:36 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/02/04 20:50:15 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#ifndef MAX_LINE_LENGTH
#define MAX_LINE_LENGTH 100
#endif

int		ft_isspace(char c);
int		ft_isnum(char c);
int		ft_isalpha(char c);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(char *src);
int		ft_isprintable(char c);
char	*trim_right(char *str);
char	*trim_left(char **str);

char ***parse_line(char line[MAX_LINE_LENGTH], char ***numbers, int numbers_index)
{
	char temp_number[100];
	char temp_name[100];
	char **number_name;
	int i;
	int k;
	int j;

	i = 0;
	k = 0;
	j = 0;
	number_name = (char **)malloc(sizeof(char *) * 2);
	while (line[i] && ft_isspace(line[i]))
		i++;
	if (line[i] == '+')
		i++;
	while (line[i] && ft_isnum(line[i]))
		temp_number[k++] = line[i++];
	temp_number[k] = '\0';
	while (line[i] && ft_isspace(line[i]))
		i++;
	if (line[i] != ':')
		return (NULL);
	i++;
	while (line[i] && ft_isspace(line[i]))
		i++;
	while (line[i] && ft_isprintable(line[i]))
		temp_name[j++] = line[i++];
	temp_name[j] = '\0';
	if (ft_strlen(temp_number) == 0 || ft_strlen(temp_name) == 0)
		return (NULL);
	trim_right(temp_name);
	// temp_ptr = &temp_number;
	number_name[0] = ft_strdup(temp_number);
	number_name[1] = ft_strdup(temp_name);
	trim_left(&(number_name[0]));
	numbers[numbers_index] = number_name;
	return (numbers);
}

/*
int	main(void)
{
	char	***numbers = (char ***)malloc(sizeof(char **) * 1);
	void	*res;
	char line[MAX_LINE_LENGTH] = "50    :                fifty five eleven !!!      ]";
	res = parse_line(line, numbers, 0);
	if (res == NULL)
	{
		printf("Error occured!");
		return (0);
	}
	printf("%s:%s", numbers[0][0], numbers[0][1]);
	return (0);
}
*/
