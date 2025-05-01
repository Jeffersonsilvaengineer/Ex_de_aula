//Crie um programa em C que recebe o nome e o sobrenome de uma pessoa e mostra o nome completo
//usando apenas uma string com o comando: printf("Nome completo: %s\n", completo);

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];       
    char sobrenome[50];  
    char completo[100];  

    printf("Digite o nome: ");
    scanf("%49s", nome); 

    printf("Digite o sobrenome: ");
    scanf("%49s", sobrenome); 

    strcpy(completo, nome);       
    strcat(completo, " ");       
    strcat(completo, sobrenome);  

    printf("Nome completo: %s\n", completo);

    return 0;
}