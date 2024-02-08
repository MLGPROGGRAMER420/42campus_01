#include <stdio.h>

void ft_mul(int *ptr, int number) {
    *ptr = *ptr * number;
}

int main() {
    int x = 5;
    int y = 10;
    
    printf("Przed mnożeniem: x = %d\n", x);
    ft_mul(&x, y);
    printf("Po mnożeniu: x = %d\n", x);

    return 0;
}
