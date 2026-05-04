#include "arit.h"

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(int a, int b) {
    if(a == 0 || b == 0) {
        return 0;
    } else {
        return a / b;
    }
}
