/* Crie a função linha() que recebe um stream e as informações para imprimir uma linha em um svg como definido aqui.*/

#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("desenho_com_linha.svg", "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    
    fprintf(arquivo, "<svg version=\"1.1\" width=\"300\" height=\"200\" xmlns=\"http://www.w3.org/2000/svg\">\n");

    
    linha(arquivo);

    fprintf(arquivo, "\n</svg>");

    fclose(arquivo);

    printf("Arquivo desenho_com_linha.svg criado com sucesso!\n");

    return 0;
}
