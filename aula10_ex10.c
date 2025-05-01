//Crie um programa que importe o arquivo util.h. O programa recebe o valor do raio digitado pelo usuário e mostra os valores de diâmetro, circunferência e raio usando as funções de util.h.

#include <stdio.h>
#include "util.h" 

int main(void) {
    double raio;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    printf("O diâmetro do círculo é: %.2lf\n", diametro(raio));

    printf("A circunferência do círculo é: %.2lf\n", circunferencia(raio));

    printf("A área do círculo é: %.2lf\n", area(raio));

    return 0;
}
