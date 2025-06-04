/* Crie um programa em C que recebe o titulo do livro, lê e imprime um nome de personagem por vez 
se o usuário apertar P se apertar F ou chegar ao fim do arquivo, encerre o programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char titulo[100];
    char nome_arquivo[200];
    FILE *arquivo;
    char personagem[100];
    char opcao;

    printf("Digite o título do livro: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strcspn(titulo, "\n")] = 0;


    strcpy(nome_arquivo, titulo);
    strcat(nome_arquivo, ".txt");

    arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    printf("Pressione 'P' para ler o próximo personagem ou 'F' para sair.\n");

    while (1) {
        printf("Opção: ");
        scanf(" %c", &opcao);

        if (opcao == 'P' || opcao == 'p') {
            if (fgets(personagem, sizeof(personagem), arquivo) != NULL) {
                personagem[strcspn(personagem, "\n")] = 0;
                printf("Personagem: %s\n", personagem);
            } else {
                printf("Fim do arquivo.\n");
                break;
            }
        } else if (opcao == 'F' || opcao == 'f') {
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    fclose(arquivo);
    return 0;
}
