#include <math.h>

#include "arit.h"

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if(a == 0 || b == 0) {
        return 0;
    } else {
        return a / b;
    }
}

double potencia(double a, double b) {

   double result = pow(a, b);
   return result;
}
