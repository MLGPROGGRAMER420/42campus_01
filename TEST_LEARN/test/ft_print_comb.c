#include <unistd.h> // Do funkcji write

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printNumber(int number) {
    char buffer[2];
    buffer[0] = number + '0';
    buffer[1] = ' ';
    write(STDOUT_FILENO, buffer, 2);
}

void printPermutation(int *array, int length) {
    for (int i = 0; i < length; i++) {
        printNumber(array[i]);
    }
    write(STDOUT_FILENO, "\n", 1);
}

void permute(int *array, int start, int end) {
    if (start == end) {
        printPermutation(array, end + 1);
    } else {
        int i = start;
        while (i <= end) {
            swap(&array[start], &array[i]);
            permute(array, start + 1, end);
            swap(&array[start], &array[i]);
            i++;
        }
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    char header[] = "Permutations:\n";
    write(STDOUT_FILENO, header, sizeof(header) - 1);

    permute(numbers, 0, n - 1);

    return 0;
}