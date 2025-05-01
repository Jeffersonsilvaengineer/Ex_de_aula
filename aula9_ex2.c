// Crie um programa em C que recebe um número inteiro, armazene na variável numero, imprime o número recebido, use uma função chamada subtrai3()
//que recebe o valor do número e retorna o numero - 3. Por fim, a função deve imprimir o valor retornado por subtrai3() e o valor atual da variável numero. 
//Assim:

//digite um numero: 7
//recebido: 7
//resultado: 4
//atual: 7

#include <stdio.h>

int subtrai3(int numero) {
    return numero - 3;
}

int main(void) {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Recebido: %d\n", numero);

    int resultado = subtrai3(numero);

    printf("Resultado: %d\n", resultado);
    printf("Atual: %d\n", numero);

    return 0;
}