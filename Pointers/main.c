#include <stdio.h>

int main(){
    double a, b;

    printf("Enter value of a and b");
    scanf("%lf", &a);
    scanf("%lf", &b);

    double * p1 = &a;
    double * p2 = &b;

    printf("The address of a is %p1 \n",p1);
    printf("The value of a is %lf \n",*p1);
    printf("The address of b is %p2 \n",p2);
    printf("The value of b is %lf \n",*p2);
}