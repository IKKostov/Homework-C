#include <stdio.h>
#include "safeint.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

 safeadd(a, b);
 printf("%d", safeadd(a, b));
 }
