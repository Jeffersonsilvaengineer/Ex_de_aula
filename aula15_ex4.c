/* Crie a função circulo() que recebe um stream e as informações para criar imprimir um círculo em um svg como definido aqui.*/

#include <stdio.h>

void circulo(FILE *stream) {
    int cx, cy, raio;

    printf("Digite a coordenada x do centro do círculo: ");
    scanf("%d", &cx);

    printf("Digite a coordenada y do centro do círculo: ");
    scanf("%d", &cy);

    printf("Digite o raio do círculo: ");
    scanf("%d", &raio);

    fprintf(stream, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\" fill=\"blue\" />", cx, cy, raio);
}
