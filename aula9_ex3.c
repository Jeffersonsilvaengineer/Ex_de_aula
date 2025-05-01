//Use passagem por referência para alterar o programa anterior de modo que subtrai3() receba o endereço de numero.

//digite um numero: 7
//recebido: 7
//resultado: 4
//atual: 4

#include <stdio.h>

void subtrai3(int *numero) {
    *numero = *numero - 3; 
}

int main(void) {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Recebido: %d\n", numero);

    subtrai3(&numero);

    printf("Resultado: %d\n", numero);
    printf("Atual: %d\n", numero);

    return 0;
}