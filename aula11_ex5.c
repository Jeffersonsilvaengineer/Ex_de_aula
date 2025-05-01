//Crie um programa em C que recebe 2 números reais, armazene os números no vetor chamado numeros.

#include <stdio.h>

int main(void) {
    float numeros[2]; 

    for (int i = 0; i < 2; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("Os números armazenados são:\n");
    for (int i = 0; i < 2; i++) {
        printf("numeros[%d] = %.2f\n", i, numeros[i]);
    }

    return 0;
}
