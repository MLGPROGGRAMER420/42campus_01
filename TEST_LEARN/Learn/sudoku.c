#include <stdio.h>

void dupa(int *one)
{

}

int main() {
    // Definicja tablicy 6x6
    int *array_pointer;
    int i;
    //zmienne brzegowe

    //zmienna górna
    int col1up,col2up,col3up,col4up;
    //zmienna dolna
    int col1down,col2down,col3down,col4down;
    //zmienne lewo
    int col1left,col2left,col3left,col4left;
    //zmienne prawo
    int col1right,col2right,col3right,col4right;

    //zmienne poglądowe
    char u1[]= "u1",u2[] = "u2",u3[] = "u3",u4[] = "u4";
    //zmienna dolna
    char d1[] = "d1",d2[] = "d2",d3[] = "d3",d4[] = "d4";
    //zmienne lewo
    char l1[] = "l1",l2[] = "l2",l3[] = "l3",l4[] = "l4";
    //zmienne prawo
    char r1[] = "r1",r2[] = "r2",r3[] = "r3",r4[] = "r4";

    while()
    {
        printf("%s",)
        i++;
    }

    //tablela gówna
    int table[6][6] = {
        {'\0', col1up, col2up, col3up, col4up, '\0'},
        {col1left, 0, 0, 0, 0, col1right},
        {col2left, 0, 0, 0, 0, col2right},
        {col3left, 0, 0, 0, 0, col3right},
        {col4left, 0, 0, 0, 0, col4right},
        {'\0', col1down, col2down, col3down, col4down, '\0'}
    };

    //tabela poglądowa

    int tablelook[6][6] = {
        {'\0',u1,u2,u3,u4, '\0'},
        {l1, 0, 0, 0, 0, r1},
        {l2, 0, 0, 0, 0, r2},
        {l3, 0, 0, 0, 0, r3},
        {l4, 0, 0, 0, 0, r4},
        {'\0', d1,d2,d3,d4, '\0'}
    };
    array_pointer = &table[6][6];

    // Rysowanie tablicy
    printf("Table 6x6:\n");
    printf("Podaj wartości po kolei:");
    printf("u1,u2,u3,u4");
    printf("d1,d2,d3,d4");
    printf("l1,l2,l3,l4");
    printf("r1,r2,r3,r4");

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%3d ", tablelook[i][j]);
        }
        printf("\n");
    }

    return 0;
}