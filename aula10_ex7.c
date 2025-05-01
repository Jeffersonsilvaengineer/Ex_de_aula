//Crie uma função chamada circunferencia() que recebe o raio de um círculo (double) e retorna a circunferência do círculo (double).

#include <stdio.h>

double circunferencia(double raio) {
    return 2 * 3.14159 * raio; 
}

int main(void) {
    double raio;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    double resultado = circunferencia(raio);
    printf("A circunferência do círculo é: %.2lf\n", resultado);

    return 0;
}