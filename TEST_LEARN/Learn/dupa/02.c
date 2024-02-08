#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    printf("%d", i);
     write(1, &i, 1);
    return(i);
}

int     main()
{
	char x[] = "dupa";
    ft_strlen(x);
   
    return 0;
}
