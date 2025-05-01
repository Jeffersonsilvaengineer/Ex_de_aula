//Crie uma função chamada diametro() que recebe o raio de um círculo (double) e retorna o valor do diâmetro do círculo (double).

#include <stdio.h>

double diametro(double raio) {
    return 2 * raio; 
}

int main(void) {
    double raio;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    double resultado = diametro(raio);
    printf("O diâmetro do círculo é: %.2lf\n", resultado);

    return 0;
}
