#include <stdio.h>
#include <stdlib.h>

#include "arit.h"

int main(int argc, char *argv[]) {

    if(*argv[2] == '+') {
        printf("%i\n", soma(atoi(argv[1]), atoi(argv[3])));
    }

    return 0;
}