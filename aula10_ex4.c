//Crie uma função que recebe dois inteiros e retorna a soma dos dois.

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main(void) {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int resultado = soma(num1, num2);
    printf("A soma de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}
