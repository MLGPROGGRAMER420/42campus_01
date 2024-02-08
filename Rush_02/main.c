#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char end[] = "Only one number";

	int i = 0;
	int x = 1;

	if (argc == 2)
	{
		while (argv[i] != '\0')
		{
			ft_strlen(argc);
			if (argc == 1)
			{

			}
			else if (argv[i] == 2 && argv[i] == 1)
			{

			}
			else if (argv[i] == 2 && argv[i] != 1)
			{

			}
			else if (argv[i] > 2)
			{

			}
			i++;
			x++;
		}
	}
	else
	{
		ft_putstr(end);
	}
}