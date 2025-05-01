//Crie um programa que use uma constante PI com o valor 3.14159. 
//Calcule a área de um círculo com raio digitado pelo usuário usando a fórmula área = PI * raio * raio e imprima o resultado.

#include <stdio.h>

#define PI 3.14159

int main(void) {
    double raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("A área do círculo é: %.2lf\n", area);

    return 0;
}