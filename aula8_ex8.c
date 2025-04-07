// Crie uma função chamada testa_par que recebe um número inteiro e retorna 1 se o número for par e 0 se for ímpar. 
// Na função main, teste a função com alguns valores e exiba os resultados. Exemplo de saída:

// 4 é par? 1
//5 é par? 0

#include <stdio.h>

int testa_par(int x) {
    return x % 2 == 0;
}

int main(void) {
    int numero;

    for (int i = 1; i <= 4; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &numero);

        int resultado = testa_par(numero);
        printf("%d é par? %d\n", numero, resultado);
    }

    return 0;
}
