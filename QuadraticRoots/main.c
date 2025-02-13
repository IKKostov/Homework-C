#include "quadraticroots.h"
#include <stdio.h>

int main() {
    // Тест с цели числа (int)
    int a, b, c;
    printf("Enter 3 integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    struct QuadraticRootsResult roots_int = findroots(a, b, c);
    if (roots_int.norealroots) {
        printf("For integers: The equation has no real roots.\n");
    } else {
        printf("For integers: x1 = %.2f, x2 = %.2f\n", roots_int.x1, roots_int.x2);
    }//До тук за int
    //Сега да направя float
    float a_f, b_f, c_f;
    printf("Enter 3 floats (a_f, b_f, c_f): ");
    scanf("%f %f %f", &a_f, &b_f, &c_f);
    struct QuadraticRootsResult roots_float = findroots(a_f, b_f, c_f);//Във структурата, съдържаща резултата вкарваме roots_float което е равно на отговора изкаран от функцията за намиране на x1 i x2
    if (roots_float.norealroots) {
        printf("For floats: The equation has no real roots.\n");
    } else {
        printf("For floats: x1 = %.2f, x2 = %.2f\n", roots_float.x1, roots_float.x2);
    }

    // Тест с числа с двойна точност (double)
    double a_d = 1.0, b_d = -3.0, c_d = 2.0; // Пример: x^2 - 3x + 2 = 0
    struct QuadraticRootsResult roots_double = findroots(a_d, b_d, c_d);
    if (roots_double.norealroots) {
        printf("For doubles: The equation has no real roots.\n");
    } else {
        printf("For doubles: x1 = %.2f, x2 = %.2f\n", roots_double.x1, roots_double.x2);
    }

    return 0;
}
