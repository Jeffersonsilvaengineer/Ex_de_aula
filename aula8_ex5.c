//Crie um programa em C que imprime a tabela verdade OU, use repetição e variáveis A e B.
//cada linha deve imprimir assim: A: 0 B: 0   0 || 0 = 0

#include <stdio.h>

int main(void) {
    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            int resultado = a || b;
            printf("A: %d B: %d   %d || %d = %d\n", a, b, a, b, resultado);
        }
    }

    return 0;
}
