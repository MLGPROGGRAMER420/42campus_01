#include <stdio.h>
#include "ft_abs.h"

void ft_fun(int i)
{
    printf("%d", i);
}
int main()
{
    ft_fun(ABS(-20));
}