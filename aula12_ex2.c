// Se listarmos todos os números naturais menores que 10 múltiplos de 3 ou 5, obtemos 3, 5, 6 e 9. A soma desses múltiplos é 23. 
//Crie um programa em C que encontre a soma de todos os múltiplos de 3 ou 5 abaixo de um número digitado pelo usuário

#include <stdio.h>

int main(void) {
    int limite, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &limite);

    for (int i = 1; i < limite; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma de todos os múltiplos de 3 ou 5 abaixo de %d é: %d\n", limite, soma);

    return 0;
}
