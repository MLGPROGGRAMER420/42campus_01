#include <unistd.h>
#include <stdio.h>


int len(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

char *ft_rev_print(char *str)
{
    int i = len(str);
    i--;

    while(i >= 0)
    {
    write(1, &str[i], 1);
    i--;
    }
}

int main(void)
{
    char test[] = "dupa";
    ft_rev_print(test);
    printf("%d", len(test));

    return 0;
}