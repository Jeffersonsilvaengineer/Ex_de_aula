//Crie um programa em C que recebe um valor de IMC e determina se o valor está no intervalo normal [18.5, 24.9]. 
//A resposta deve ser "Intervalo normal" ou "Fora do intervalo normal".

#include <stdio.h>

int main() {
    float imc;

    printf("Digite o valor do IMC: ");
    scanf("%f", &imc);

    if (imc < 18.5) {
        printf("Abaixo do normal\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Intervalo normal\n");
    } else {
        printf("Fora do intervalo normal\n");
    }
    return 0;
}
