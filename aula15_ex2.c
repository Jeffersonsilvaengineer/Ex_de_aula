/*Crie um programa em C que recebe o nome do arquivo, a posição de um quadrado (x e y), a largura (width), a altura (height) e 
cria um arquivo .svg contendo o quadrado (rect) com as proprieades recebidas do usuário.*/

#include <stdio.h>

int main() {
    char nome_arquivo[100];
    int x, y, width, height;
    FILE *arquivo;

    printf("Digite o nome do arquivo (sem a extensão .svg): ");
    scanf("%s", nome_arquivo);
    strcat(nome_arquivo, ".svg");

    printf("Digite a posição x do quadrado: ");
    scanf("%d", &x);

    printf("Digite a posição y do quadrado: ");
    scanf("%d", &y);

    printf("Digite a largura do quadrado: ");
    scanf("%d", &width);

    printf("Digite a altura do quadrado: ");
    scanf("%d", &height);

    arquivo = fopen(nome_arquivo, "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "<svg version=\"1.1\"\n");
    fprintf(arquivo, "width=\"%d\" height=\"%d\"\n", x + width + 50, y + height + 50);
    fprintf(arquivo, "xmlns=\"http://www.w3.org/2000/svg\">\n");
    fprintf(arquivo, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />\n", x, y, width, height);
    fprintf(arquivo, "</svg>\n");

    fclose(arquivo);

    printf("Arquivo %s criado com sucesso!\n", nome_arquivo);

    return 0;
}
