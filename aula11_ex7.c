//Crie uma função dobro() que recebe o vetor numeros, multiplica cada número por 2.0 e retorna a nova média.

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

int main(void) {
    float numeros[3];
    int tamanho = 3;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    float mediaOriginal = media(numeros, tamanho);
    printf("A média original dos números é: %.2f\n", mediaOriginal);

    float novaMedia = dobro(numeros, tamanho);
    printf("A nova média após dobrar os números é: %.2f\n", novaMedia);

    return 0;
}