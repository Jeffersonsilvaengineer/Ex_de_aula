//Crie um programa em C que recebe uma palavra de até 5 letras. Receba em seguida uma letra e informe se a letra foi encontrada ou não na palavra.
//Até que o usuário erre 3 vezes.

#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[6];
    char letra;
    int tentativas = 3;
    int encontrada;

    printf("Digite uma palavra de até 5 letras: ");
    scanf("%5s", palavra);

    while (tentativas > 0) {
        printf("Digite uma letra: ");
        scanf(" %c", &letra); 

        encontrada = 0;
        for (int i = 0; i < strlen(palavra); i++) {
            if (palavra[i] == letra) {
                encontrada = 1;
                break;
            }
        }

        if (encontrada) {
            printf("A letra '%c' foi encontrada na palavra!\n", letra);
            return 0;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("A letra '%c' não foi encontrada. Tentativas restantes: %d\n", letra, tentativas);
            } else {
                printf("Você errou 3 vezes. Fim do jogo!\n");
            }
        }
    }

    return 0;
}