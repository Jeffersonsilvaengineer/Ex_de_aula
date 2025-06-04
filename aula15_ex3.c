/*Crie a função retangulo que tem como argumento um ponteiro para um stream, a função deve receber do usuário a 
posição de um quadrado (x e y), a largura (width), a altura (height) e imprimir no stream recebido o rect: <rect x="20" y="30" width="100" height="100" fill="red" />*/

#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("desenho.svg", "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "<svg version=\"1.1\" width=\"300\" height=\"200\" xmlns=\"http://www.w3.org/2000/svg\">\n");

    retangulo(arquivo);

    fprintf(arquivo, "\n</svg>");

    fclose(arquivo);

    printf("Arquivo desenho.svg criado com sucesso!\n");

    return 0;
}
