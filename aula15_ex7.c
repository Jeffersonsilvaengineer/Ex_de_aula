/*Crie um programa em C que permite ao usuário digitar o nome de um arquivo SVG e inserir figuras retângulos, 
círculos, linhas e texto até que aperte a tecla F. Use as funções definidas anteriormente. */

#include <stdio.h>
#include <stdlib.h>
#include "aula15_ex3.c" // For retangulo()
#include "aula15_ex4.c" // For circulo()
#include "aula15_ex5.c" // For linha()
#include "aula15_ex6.c" // For texto()

int main() {
    char nome_arquivo[100];
    FILE *arquivo;
    char opcao;

    printf("Digite o nome do arquivo SVG (sem a extensão .svg): ");
    scanf("%s", nome_arquivo);
    strcat(nome_arquivo, ".svg");

    arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "<svg version=\"1.1\" width=\"500\" height=\"500\" xmlns=\"http://www.w3.org/2000/svg\">\n");

    do {
        printf("\nEscolha uma figura para adicionar:\n");
        printf("R - Retângulo\n");
        printf("C - Círculo\n");
        printf("L - Linha\n");
        printf("T - Texto\n");
        printf("F - Finalizar\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'R':
            case 'r':
                retangulo(arquivo);
                break;
            case 'C':
            case 'c':
                circulo(arquivo);
                break;
            case 'L':
            case 'l':
                
                linha(arquivo);
                break;
            case 'T':
            case 't':
                texto(arquivo);
                break;
            case 'F':
            case 'f':
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 'F' && opcao != 'f');

    fprintf(arquivo, "\n</svg>");
    fclose(arquivo);

    printf("Arquivo %s criado com sucesso!\n", nome_arquivo);

    return 0;
}
