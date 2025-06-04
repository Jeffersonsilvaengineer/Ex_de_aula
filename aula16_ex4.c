/* Crie um programa que recebe uma data e hora digitadas pelo usuário assim:
Data: 03/06/2025 Hora: 14:00

Salve no arquivo remedios.txt a linha: "03/06/2025 14:00".*/

#include <stdio.h>

int main() {
    int dia, mes, ano, hora, minuto;
    FILE *arquivo;

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Digite a hora (hh:mm): ");
    scanf("%d:%d", &hora, &minuto);

    arquivo = fopen("remedios.txt", "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "%02d/%02d/%d %02d:%02d", dia, mes, ano, hora, minuto);

    fclose(arquivo);

    printf("Data e hora salvas em remedios.txt\n");

    return 0;
}
