//Crie o jogo "É par?" em C. O programa recebe um número de 1 a 6 que é o valor de um dado jogado pelo usuário até 
//que o número seja ímpar. Quando o número digitado é ímpar use o break para terminar, o jogo termina mostrando
// a soma total dos número pares digitados até o momento.

#include <stdio.h>

int main(void) {
    int soma = 0;
    int dado = 0;

    printf("Bem-vindo ao jogo 'É par?'\n");
    printf("Jogue o dado (digite um número de 1 a 6):\n");

    do {
        printf("Jogue o dado: ");
        scanf("%d", &dado);

        if (dado < 1 || dado > 6) {
            printf("Número inválido! Digite um número entre 1 e 6.\n");
            continue;
        }

        if (dado % 2 == 0) {
            soma += dado; 
            printf("É par! Soma atual: %d\n", soma);
        } else {
            printf("É ímpar! Fim de jogo.\n");
            break;
        }
    } while (1);

    printf("Soma total dos números pares: %d\n", soma);
    return 0;
}