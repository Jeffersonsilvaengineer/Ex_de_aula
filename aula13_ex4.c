//Crie um programa em C que recebe um número e desenha um triângulo de asteriscos usando o número como base e altura.

//Digite um numero: 3
//*
//**
//***

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        for (int i = 1; i <= numero; i++) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("Por favor, digite um numero positivo.\n");
    }

    return 0;
}
