//Crie um programa em C que declare um vetor de 5 números inteiros, inicialize-o com valores de sua escolha e imprima cada elemento do vetor junto com seu índice.
//seguindo o exemplo:
// x[0] = 2;
// x[1] = 3;

#include <stdio.h>

int main(void) {
    int x[5] = {2, 3, 5, 7, 11};

    for (int i = 0; i < 5; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}