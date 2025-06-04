/*Crie um programa em C que escreve as linhas abaixo usando fprintf() no arquivo chamado quadrado.svg.
<svg version="1.1"
width="300" height="200"
xmlns="http://www.w3.org/2000/svg">
<rect x="20" y="30" width="100" height="100" fill="red" />
</svg>
 */

#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("quadrado.svg", "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "<svg version=\"1.1\"\n");
    fprintf(arquivo, "width=\"300\" height=\"200\"\n");
    fprintf(arquivo, "xmlns=\"http://www.w3.org/2000/svg\">\n");
    fprintf(arquivo, "<rect x=\"20\" y=\"30\" width=\"100\" height=\"100\" fill=\"red\" />\n");
    fprintf(arquivo, "</svg>\n");

    fclose(arquivo);

    printf("Arquivo quadrado.svg criado com sucesso!\n");

    return 0;
}
