#include "quadraticroots.h"
#include <math.h>
#include <stdio.h>

struct QuadraticRootsResult findroots(double a, double b, double c)
{
   struct QuadraticRootsResult result;
    if (a == 0) { // Проверява дали а е равно на 0, защона на 0 не се дели
        result.norealroots = 1;
        return result;
    }
    long double disc = b*b - 4*(a*c);//С disc съм кръстил дискриминатата, с която ще намерим x1 & x2
    if(disc <= 0){
        result.norealroots = 1;
        return result;
    }
    else {
        result.norealroots = 0;
        result.x1 = (-b-sqrt(disc))/(2*a);// Формула за намиране на х1
        result.x2 = (-b-sqrt(disc))/(2*a);// Формулка за намиране на х2
   }
}