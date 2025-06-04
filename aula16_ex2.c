/*Crie um programa em C que recebe o titulo do livro e os nomes de personagens do livro salvando os 
dados no arquivo: titulo_do_livro.txt onde titulo_do_livro foi digitado pelo usuário. */

#include <stdio.h>
#include <string.h>

int main() {
    char titulo[100];
    char personagem[100];
    FILE *arquivo;

    printf("Digite o título do livro: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strcspn(titulo, "\n")] = 0;

    char nome_arquivo[200];
    strcpy(nome_arquivo, titulo);
    strcat(nome_arquivo, ".txt");

    arquivo = fopen(nome_arquivo, "w");

    if (arquivo == NULL) {
        perror("Erro ao criar o arquivo");
        return 1;
    }

    printf("Digite os nomes dos personagens (digite 'fim' para terminar):\n");

    while (1) {
        printf("Nome do personagem: ");
        fgets(personagem, sizeof(personagem), stdin);
        personagem[strcspn(personagem, "\n")] = 0;

        if (strcmp(personagem, "fim") == 0) {
            break;
        }

        fprintf(arquivo, "%s\n", personagem);
    }

    fclose(arquivo);
    printf("Dados salvos em %s com sucesso!\n", nome_arquivo);

    return 0;
}
