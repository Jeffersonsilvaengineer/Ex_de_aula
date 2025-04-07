//Crie um programa em C que recebe 4 números inteiros de 0 a 10 e imprime uma linha de asteriscos para cada número recebido.
// exemplo: 6 7 3 9

//******
//*******
//***
//*********

#include <stdio.h>

int main(void) {
    int numero1, numero2, numero3, numero4;
    printf("Digite 4 números inteiros entre 0 e 10:\n");
    do {
        printf("Número 1: ");
        scanf("%d", &numero1);
        if (numero1 < 0 || numero1 > 10) {
            printf("Número inválido! Digite um número entre 0 e 10.\n");
        }
    } while (numero1 < 0 || numero1 > 10);
    do {
        printf("Número 2: ");
        scanf("%d", &numero2);
        if (numero2 < 0 || numero2 > 10) {
            printf("Número inválido! Digite um número entre 0 e 10.\n");
        }
    } while (numero2 < 0 || numero2 > 10);
    do {
        printf("Número 3: ");
        scanf("%d", &numero3);
        if (numero3 < 0 || numero3 > 10) {
            printf("Número inválido! Digite um número entre 0 e 10.\n");
        }
    } while (numero3 < 0 || numero3 > 10);
    do {
        printf("Número 4: ");
        scanf("%d", &numero4);
        if (numero4 < 0 || numero4 > 10) {
            printf("Número inválido! Digite um número entre 0 e 10.\n");
        }
    } while (numero4 < 0 || numero4 > 10);
    printf("\nLinhas de asteriscos:\n");
    for (int i = 0; i < numero1; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < numero2; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < numero3; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < numero4; i++) {
        printf("*");
    }
    printf("\n");
    return 0;
}
