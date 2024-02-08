#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int x;

    while(tab[i] != '\0')
    {
        x = *tab -1;
        x--;
        write(1, &x, 1);
    }
}

int main()
{
    int i[] = {0, 1, 2, 3, 4, 5};

    ft_rev_int_tab(i, 6);
}