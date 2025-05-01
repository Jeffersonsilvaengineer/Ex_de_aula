//Escreva um programa que peça ao usuário para digitar 3 números reais, armazene-os em um vetor e calcule a soma desses números. 
//Imprima o resultado.

#include <stdio.h>

int main(void) {
    float numeros[3];
    float soma = 0.0;

    for (int i = 0; i < 3; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (int i = 0; i < 3; i++) {
        soma += numeros[i];
    }

    printf("A soma dos números é: %.2f\n", soma);

    return 0;
}