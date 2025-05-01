//Crie uma função que pede ao usuário um numero e retorna o valor informado.

#include <stdio.h>


int pedeNumero() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    return numero;
}

int main(void) {
 
    int numero = pedeNumero();
    printf("Você digitou: %d\n", numero);

    return 0;
}
