#include <stdio.h>
#include <limits.h>

int main()
{
    size_t sizeOfChar = sizeof(char);
    size_t sizeOfInt = sizeof(int);
    size_t sizeOfLong = sizeof(long);
    size_t sizeOfDouble = sizeof(double);
    size_t sizeOfFloat = sizeof(float);

    printf("%-10s %-10s %-14s %-14s %-14s %-14s\n","Type", "Format", "Size(Bytes)", "SignedMax", "SignedMin", "UnsignedMax");
    printf("%-10s %-10s %-14zu %-14d %-14d %-14u\n", "char", "%c", sizeOfChar, SCHAR_MAX, SCHAR_MIN, UCHAR_MAX);
    printf("%-10s %-10s %-14zu %-14d %-14d %-14u\n", "int", "%d", sizeOfInt, INT_MAX, INT_MIN, UINT_MAX);
    printf("%-10s %-10s %-14zu %-14ld %-14ld %-14lu\n", "long", "%ld", sizeOfLong, LONG_MAX, LONG_MIN, ULONG_MAX);
    printf("%-10s %-10s %-14zu %-14d %-14d N/A\n", "double", "%lf", sizeOfDouble, __DBL_MAX__, __DBL_MIN__);
    printf("%-10s %-10s %-14zu %-14ld %-14ld N/A\n", "float", "%f", sizeOfFloat, __FLT_MAX__, __FLT_MIN__ );
    return 0;
}
