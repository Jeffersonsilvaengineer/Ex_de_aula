// Usando do...while crie um programa em C, um jogo para adivinhar um número, o programa deve receber um número 
//se o número for igual à 7 mostre a mensagem "Você ganhou!" . Se o jogador errar o número mostre a mensagem Número errado.
//Tentativas restantes: N. (N é a quantidade restante) Se errar 3 vezes mostre Fim de jogo! e termine o programa.

#include <stdio.h>

int main() {
    int numero, tentativas = 3; // Número de tentativas restantes

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Você tem 3 tentativas para adivinhar o número correto.\n");

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 7) {
            printf("Você ganhou!\n");
            break; // Sai do loop se o jogador acertar
        } else {
            tentativas--; // Reduz o número de tentativas
            if (tentativas > 0) {
                printf("Número errado. Tentativas restantes: %d\n", tentativas);
            } else {
                printf("Fim de jogo!\n");
            }
        }
    } while (tentativas > 0);

    return 0;
}