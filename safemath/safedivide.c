#include <stdio.h>
#include "safeint.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if (b == 0) {
        return 1;
    }
    safedivide(a, b);
    printf("%d", safedivide(a, b));
    return 0;
}
