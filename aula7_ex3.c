//Crie um programa para máquina lava-roupas nos moldes do programa anterior. 
//  As opções são:
//  Secar
//  Enxaguar e secar
//  Lavar, Enxaguar e secar

#include <stdio.h>

int main(void) {
    char opcao;
    int quantidadeSecar = 0;
    int quantidadeEnxaguarSecar = 0;
    int quantidadeLavarEnxaguarSecar = 0;

    do {
        printf("Escolha uma opção para a máquina de lavar roupas, F para encerrar:\n");
        printf("S - Secar\n");
        printf("E - Enxaguar e secar\n");
        printf("L - Lavar, Enxaguar e Secar\n");
        printf("Digite sua opção: ");
        scanf(" %c", &opcao);

        if (opcao == 'S' || opcao == 's') {
            quantidadeSecar++;
        } else if (opcao == 'E' || opcao == 'e') {
            quantidadeEnxaguarSecar++;
        } else if (opcao == 'L' || opcao == 'l') {
            quantidadeLavarEnxaguarSecar++;
        } else if (opcao != 'F' && opcao != 'f') {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 'F' && opcao != 'f');
    printf("\nResumo das operações:\n");
    printf("Secar: %d\n", quantidadeSecar);
    printf("Enxaguar e Secar: %d\n", quantidadeEnxaguarSecar);
    printf("Lavar, Enxaguar e Secar: %d\n", quantidadeLavarEnxaguarSecar);

    return 0;
}