//Ajuste o programa para mostrar o vetor antes de usar media() e o vetor após usar dobro().

#include <stdio.h>

float media(float numeros[], int tamanho) {
    float soma = 0.0;

    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }

    return soma / tamanho;
}

float dobro(float numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] *= 2.0;
    }

    return media(numeros, tamanho);
}

void exibirVetor(float numeros[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");
}

int main(void) {
    float numeros[3]; 
    int tamanho = 3;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("Vetor original:\n");
    exibirVetor(numeros, tamanho);

    float mediaOriginal = media(numeros, tamanho);
    printf("A média original dos números é: %.2f\n", mediaOriginal);

    float novaMedia = dobro(numeros, tamanho);
    printf("Vetor após dobrar os valores:\n");
    exibirVetor(numeros, tamanho);

    printf("A nova média após dobrar os números é: %.2f\n", novaMedia);

    return 0;
}