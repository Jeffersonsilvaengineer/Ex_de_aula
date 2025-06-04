/* Crie um programa em C que lê o arquivo remedios.txt e mostra somente a última linha com a data e hora:
Última: 03/06/2025 14:00*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char linha[100];
    char ultima_linha[100] = "";

    arquivo = fopen("remedios.txt", "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        strcpy(ultima_linha, linha);
    }

    fclose(arquivo);

    if (strlen(ultima_linha) > 0) {
        ultima_linha[strcspn(ultima_linha, "\n")] = 0;
        printf("Última: %s\n", ultima_linha);
    } else {
        printf("O arquivo está vazio.\n");
    }

    return 0;
}
