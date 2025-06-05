/*Crie um programa em C que recebe 3 informações de um filme e grava no arquivo filmes.txt usando struct. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char genero[50];
    int ano;
} Filme;

int main() {
    Filme filme;
    FILE *arquivo;

    printf("Digite o título do filme: ");
    fgets(filme.titulo, sizeof(filme.titulo), stdin);
    filme.titulo[strcspn(filme.titulo, "\n")] = 0;

    printf("Digite o gênero do filme: ");
    fgets(filme.genero, sizeof(filme.genero), stdin);
    filme.genero[strcspn(filme.genero, "\n")] = 0;

    printf("Digite o ano de lançamento do filme: ");
    scanf("%d", &filme.ano);
    getchar();

    arquivo = fopen("filmes.txt", "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "Título: %s\n", filme.titulo);
    fprintf(arquivo, "Gênero: %s\n", filme.genero);
    fprintf(arquivo, "Ano: %d\n", filme.ano);
    fprintf(arquivo, "\n");

    fclose(arquivo);

    printf("Informações do filme gravadas com sucesso em filmes.txt\n");

    return 0;
}
