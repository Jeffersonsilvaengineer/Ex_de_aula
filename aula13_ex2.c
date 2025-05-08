//Ajuste o programa do ordenamento para colocar em ordem crescente todos os elementos do vetor.

#include <stdio.h>

void ordenar(float numeros[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                float temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

void exibirVetor(float numeros[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");
}

int main(void) {
    float numeros[5];
    int tamanho = 5;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("Vetor original:\n");
    exibirVetor(numeros, tamanho);

    ordenar(numeros, tamanho);

    printf("Vetor ordenado em ordem crescente:\n");
    exibirVetor(numeros, tamanho);

    return 0;
}