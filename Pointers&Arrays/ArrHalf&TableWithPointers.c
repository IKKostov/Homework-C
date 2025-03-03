#include <stdio.h>
#include <string.h>
#define COLS 4

void strhalf(const char *str, char **half) {
    int length = strlen(str);
    *half = (char *)(str + length / 2);
}

void print_table(int (*arr)[COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    const char *str = "Hello, world!";
    char *half = NULL;
    strhalf(str, &half);
    printf("Second half: %s\n", half);
    int arr[3][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printf("Table:\n");
    print_table(arr, 3);
    return 0;
}
