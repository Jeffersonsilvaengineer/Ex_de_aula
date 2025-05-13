//Ajuste o programa anterior para receber após a impressão uma letra: A para desenhar o triângulo à esquerda e D para desenhar o triângulo à direita. F encerra o programa.

//Digite um numero: 3
//*
//**
//***
//D
//  *
// **
//***
//A
//*
//**
//***
//F

#include <stdio.h>

void desenhar_triangulo_esquerda(int numero) {
    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void desenhar_triangulo_direita(int numero) {
    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= numero - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int numero;
    char opcao;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, digite um numero positivo.\n");
        return 1; // Indica erro
    }

    desenhar_triangulo_esquerda(numero);

    while (1) {
        printf("Digite A (esquerda), D (direita) ou F (fim): ");
        scanf(" %c", &opcao); // Note o espaço antes de %c para consumir quebras de linha pendentes

        if (opcao == 'A') {
            desenhar_triangulo_esquerda(numero);
        } else if (opcao == 'D') {
            desenhar_triangulo_direita(numero);
        } else if (opcao == 'F') {
            break; // Sai do loop
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}
