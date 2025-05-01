//Crie uma função media() que recebe o vetor numeros, calcule e retorne a média dos valores em numeros.

#include <stdio.h>

float media(float numeros[], int tamanho) {
    float soma = 0.0;

    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }

    return soma / tamanho;
}

int main(void) {
    float numeros[3];
    int tamanho = 3;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    float resultado = media(numeros, tamanho);

    printf("A média dos números é: %.2f\n", resultado);

    return 0;
}