#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 20;
    int y = 10;

    printf("Przed: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Po: x = %d, y = %d", x, y);

    return 0;
}