#include <stdio.h>
#include <stdlib.h>

#include "arit.h"

int main(int argc, char *argv[]) {

    if(argc < 4) {
        fprintf(stderr, "Número de argumentos inválido.\n");
        return 1;
    }

    double a = atof(argv[1]);
    double b = atof(argv[3]);
    char operation = *argv[2];

    if(operation == '+') {
        printf("%.2f\n", soma(a, b));
    }

    if(operation == '-') {
        printf("%.2f\n", subtracao(a, b));
    }

    if(operation == '*') {
        printf("%.2f\n", multiplicacao(a, b));
    }

    if(operation == '/') {
        
        if(divisao(a, b) == 0) {
            fprintf(stderr, "Não é possível dividir por 0.\n");
            return 1;
        } 
        
        printf("%.2f\n", divisao(a, b));
    }

    if(operation == '^') {
        printf("%.2f\n", potencia(a, b));
    }

    if(operation == 'r') {
        printf("%.2f\n", raiz(a, b));
    }

    return 0;
}