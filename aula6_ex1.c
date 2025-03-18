//Crie um programa em C que recebe 3 notas, calcula e exibe a média das notas.
#include <stdio.h>

int main() {
    float nota, soma = 0;
    int contador = 0;

    while (contador < 3) {
        printf("Digite a nota %d: ", contador + 1);
        scanf("%f", &nota);
        soma += nota;
        contador+= 1;
    }

    float media = soma / 3;
    printf("A média das notas é: %.2f\n", media);

    return 0;
}
