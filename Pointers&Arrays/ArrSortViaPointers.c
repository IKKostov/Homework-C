/*#include <stdio.h>

void swap(int arr[], int a, int b) {
    int c = arr[a];
    arr[a] = arr[b];
    arr[b] = c;
}

int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) { 
                swap(arr, j, j + 1);
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
} This is code before pointer aritmeitcs :)
*/
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    return 0;
}
