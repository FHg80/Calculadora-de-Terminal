#include <stdio.h>
#include <stdlib.h>

#include "arit.h"

int main(int argc, char *argv[]) {

    if(argc < 4) {
        fprintf(stderr, "Número de argumentos inválido.\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    char operation = *argv[2];

    if(operation == '+') {
        printf("%i\n", soma(a, b));
    }

    if(operation == '-') {
        printf("%i\n", subtracao(a, b));
    }

    if(operation == '*') {
        printf("%i\n", multiplicacao(a, b));
    }

    if(operation == '/') {
        
        if(divisao(a, b) == 0) {
            fprintf(stderr, "Não é possível dividir por 0.\n");
            return 1;
        } 
        
        printf("%i\n", divisao(a, b));
    }


    return 0;
}