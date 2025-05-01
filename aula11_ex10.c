//Ajuste o programa para mostrar o conteúdo de numeros antes de chamar maior() e depois de chamar maior().

#include <stdio.h>

void maior(float numeros[], int tamanho) {
    int indiceMaior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > numeros[indiceMaior]) {
            indiceMaior = i;
        }
    }

    if (indiceMaior != 0) {
        float temp = numeros[0];
        numeros[0] = numeros[indiceMaior];
        numeros[indiceMaior] = temp;
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

    maior(numeros, tamanho);

    printf("Vetor após colocar o maior valor na primeira posição:\n");
    exibirVetor(numeros, tamanho);

    return 0;
}
