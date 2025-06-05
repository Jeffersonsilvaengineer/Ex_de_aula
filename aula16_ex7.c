/* Crie um programa em C que lê e mostra as informações gravadas no arquivo filmes.txt.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char genero[50];
    int ano;
} Filme;

int main() {
    FILE *arquivo;
    char linha[120];
    Filme filme;

    arquivo = fopen("filmes.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    printf("Informações dos filmes:\n");

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (strncmp(linha, "Título:", 7) == 0) {
            sscanf(linha, "Título: %99[^\n]", filme.titulo);
        } else if (strncmp(linha, "Gênero:", 7) == 0) {
            sscanf(linha, "Gênero: %49[^\n]", filme.genero);
        } else if (strncmp(linha, "Ano:", 4) == 0) {
            sscanf(linha, "Ano: %d", &filme.ano);
            
            printf("  Título: %s\n", filme.titulo);
            printf("  Gênero: %s\n", filme.genero);
            printf("  Ano: %d\n", filme.ano);
            printf("\n");
        }
    }

    fclose(arquivo);

    return 0;
}
