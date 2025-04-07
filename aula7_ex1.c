//Crie um programa em C que recebe um número e, usando for, soma todos os impares de 1 até o número recebido.

#include <stdio.h>

int main() {
    int fim = 0;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &fim);
    for(int contador = 1; contador <= fim; contador++) {
        if (contador % 2 == 1) {
            soma += contador;
        }
    } 
    printf("A soma dos impares de 1 a %d é: %d\n", fim, soma);
    return 0;
}
