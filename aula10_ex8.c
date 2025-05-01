//Crie uma função area() que recebe o valor de um raio (double) e retorna a área do círculo com aquele raio.

#include <stdio.h>

double area(double raio) {
    return 3.14159 * raio * raio;
}

int main(void) {
    double raio;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    double resultado = area(raio);
    printf("A área do círculo é: %.2lf\n", resultado);

    return 0;
}