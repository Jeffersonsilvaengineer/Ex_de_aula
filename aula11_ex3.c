//Crie um programa em C que recebe 4 notas, armazene as notas em um vetor. Some o total das notas usando for, guarde na variável total. 
//Mostre o resultado com duas casas decimais.

#include <stdio.h>

int main(void) {
    float notas[4]; 
    float total = 0.0; 

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 4; i++) {
        total += notas[i];
    }

    printf("O total das notas é: %.2f\n", total);

    return 0;
}
