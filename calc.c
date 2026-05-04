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

    if(*argv[2] == '+') {
        printf("%i\n", soma(a, b));
    }

    if(*argv[2] == '-') {
        printf("%i\n", subtracao(a, b));
    }

    if(*argv[2] == '*') {
        printf("%i\n", multiplicacao(a, b));
    }

    return 0;
}