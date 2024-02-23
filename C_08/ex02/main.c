#include <stdio.h>
#include "ft_abs.h"

void ft_fun(int i)
{
    printf("%d \n", i);
}
int main()
{
    ft_fun(ABS(-20));
}