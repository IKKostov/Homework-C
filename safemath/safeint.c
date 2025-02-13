#include <stdio.h>
#include <limits.h>
#include "safeint.h"
SafeResult safeadd(int a, int b){
    SafeResult result;
    if(a > __INT_MAX__ -b)
    {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
        result.value = a + b;
        result.errorflag = 0;
        return result;
}
SafeResult safesubtract(int a, int b) {
    SafeResult result;
    if (b > 0 && a < INT_MIN + b) { 
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    if (b < 0 && a > INT_MAX + b) {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    result.value = a - b;
    result.errorflag = 0;
    return result;
}
SafeResult safemultiply(int a, int b) {
    SafeResult result;
    if (a > 0 && b > 0 && a > INT_MAX / b) { 
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    if (a > 0 && b < 0 && b < INT_MIN / a) {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    if (a < 0 && b > 0 && a < INT_MIN / b) {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    if (a < 0 && b < 0 && a < INT_MAX / b) {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    result.value = a * b;
    result.errorflag = 0;
    return result;
}
SafeResult safedivide(int a, int b){
    SafeResult result;
    if(a == INT_MIN && b == -1 || b == 0)
    {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }

        result.value = a / b;
        result.errorflag = 0;
        return result;
}