#include <unistd.h>
#include <stdio.h>


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("\n");
        return 0;
    }

    char *str = argv[1];
    while (*str != '\0' && (*str == ' ' || *str == '\t')) {
        str++;
    }

    while (*str != '\0' && *str != ' ' && *str != '\t') {
        printf("%c", *str);
        str++;
    }

    printf("\n");

    return 0;
}