//Escreva um programa em C que solicite ao usuário a idade de um paciente em um hospital geriátrico, 
//usando o operador condicional (?:), imprima "Pode ser atendido" se a idade for maior ou igual a 60, 
//ou "Não pode ser atendido" caso contrário.
#include <stdio.h>
int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("%s\n", idade >= 60 ? "Pode ser atendido" : "Não pode ser atendido");
}