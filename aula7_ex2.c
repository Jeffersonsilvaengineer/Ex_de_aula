//Ajuste o programa dos tamanhos para receber a letra usando getchar():
#include <stdio.h>

int main(void) {
    char tamanho;
    int quantidade_P = 0;
    int quantidade_M = 0;
    int quantidade_G = 0;

    printf("Digite o tamanho recebido, F para encerrar:\n");
    tamanho = getchar();

    while (tamanho != 'F' && tamanho != 'f') {
        if (tamanho == 'P' || tamanho == 'p') {
            quantidade_P++;
        } else if (tamanho == 'M' || tamanho == 'm') {
            quantidade_M++;
        } else if (tamanho == 'G' || tamanho == 'g') {
            quantidade_G++;
        }
        while ((getchar()) != '\n');
        printf("Digite o tamanho recebido, F para encerrar:\n");
        tamanho = getchar();
    }

    printf("P: %d\nM: %d\nG: %d\n", quantidade_P, quantidade_M, quantidade_G);
    return 0;
}