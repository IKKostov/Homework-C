#include <stdio.h>
size_t str_length(char *str) {
    char *ptr = str;
    while (*ptr) {
        ptr++;
    }
    return ptr - str;
}
int main() {

    //int arr[] = {1,2,3,4};
    //int (*p)[] = &arr;//Points the pointer p to the array arr
    //to move the pointer to the next element in the array we do *p + 1
    //to move the pointer with the size of the array x the type we do p + 1
    char *str;
    scanf("%s",str);
    printf(str_length(str));

    return 0;
}