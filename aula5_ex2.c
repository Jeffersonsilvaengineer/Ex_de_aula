//Crie um programa em C que peça ao usuário dois números e, utilizando o operador condicional (?:), 
//imprima o maior dos dois números.
#include <stdio.h>
int main() {
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("O maior número é: %d\n", num1 > num2 ? num1 : num2);
}