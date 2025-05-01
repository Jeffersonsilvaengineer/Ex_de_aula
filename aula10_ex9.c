//Coloque as funções diametro(), circunferencia() e area() em um arquivo chamado util.h.

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
