//Crie um programa em C que recebe três valores inteiros e verifica se os valores podem formar um triângulo retângulo. 
//Permita que o usuário teste outros valores até que ele digite -1 como o primeiro valor.

#include <stdio.h>

int main() {
    int a, b, c;

        printf("Digite o primeiro lado (ou -1 para sair): ");
        scanf("%d", &a);
    while (a != -1) {
        printf("Digite o segundo lado: ");
        scanf("%d", &b);

        printf("Digite o terceiro lado: ");
        scanf("%d", &c);

        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("%d, %d, %d formam um triângulo retângulo.\n", a, b, c);
        else
            printf("%d, %d, %d NÃO formam um triângulo retângulo.\n", a, b, c);
        
        printf("Digite o primeiro lado (ou -1 para sair): ");
        scanf("%d", &a);
    }
    return 0;
}