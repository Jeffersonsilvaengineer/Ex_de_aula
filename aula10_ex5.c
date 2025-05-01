//Crie uma função que recebe um valor de soma e imprime uma mensagem ao usuário.

#include <stdio.h>

void imprimeMensagem(int soma) {
    printf("O resultado da soma é: %d\n", soma);
}

int main(void) {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int resultado = num1 + num2;

    imprimeMensagem(resultado);

    return 0;
}
