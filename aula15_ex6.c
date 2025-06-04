/* Crie a função texto() que recebe um stream e as informações necessárias para imprimir um texto em um svg como definido aqui.*/

#include <stdio.h>


void texto(FILE *stream) {
    int x, y;
    char texto[100];

    printf("Digite a coordenada x do início do texto: ");
    scanf("%d", &x);

    printf("Digite a coordenada y do início do texto: ");
    scanf("%d", &y);

    printf("Digite o texto a ser exibido: ");
    scanf(" %[^\n]s", texto);


    fprintf(stream, "<text x=\"%d\" y=\"%d\" fill=\"black\">%s</text>", x, y, texto);
}
