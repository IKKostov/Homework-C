#include <stdio.h>
#include <stdlib.h>
void swap(void *a, void *b) {
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}
int compareasc(const void *a, const void *b) {
    int int_a = *(int *)a;
    int int_b = *(int *)b;
    return (int_a > int_b) - (int_a < int_b);
}
int comparedesc(const void *a, const void *b) {
    int int_a = *(int *)a;
    int int_b = *(int *)b;
    return (int_a < int_b) - (int_a > int_b);
}
void bubblesort(void *arr, size_t n, size_t size, int (*compare)(const void *, const void *), void (*swapelements)(void *, void *)) {
    char *array = (char *)arr;
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - i - 1; j++) {
            if (compare(array + j * size, array + (j + 1) * size) > 0) {
                swapelements(array + j * size, array + (j + 1) * size);
            }
        }
    }
}

void printArray(int arr[], size_t n) {
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);
    bubblesort(arr, n, sizeof(int), compareasc, swap);
    printf("Sorted ascending: ");
    printArray(arr, n);
    int arr2[] = {5, 2, 9, 1, 5, 6};
    bubblesort(arr2, n, sizeof(int), comparedesc, swap);
    printf("Sorted descending: ");
    printArray(arr2, n);
    return 0;
}
