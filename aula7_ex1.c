//Crie um programa em C que recebe um número e, usando for, soma todos os impares de 1 até o número recebido.

#include <stdio.h>

int main() {
    int fim = 10;
    int soma = 0;

    for(int contador = 1; contador <= fim; contador++) {
        if (contador %2 == 1)
            soma++;
        //printf("%d ", contador);
        printf("%d ", soma);
}
    return 0;
}
