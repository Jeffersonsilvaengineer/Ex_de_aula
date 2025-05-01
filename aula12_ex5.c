//Crie um programa que recebe uma senha e determina se ela possui 8 ou mais caracteres. 
//Se for menor que 8 mostre a mensagem: "Erro na senha". Se for maior ou igual a 8 imprima: "Senha conforme".

#include <stdio.h>
#include <string.h>

int main(void) {
    char senha[50];

    printf("Digite a senha: ");
    scanf("%49s", senha); 

    if (strlen(senha) >= 8) {
        printf("Senha conforme\n");
    } else {
        printf("Erro na senha\n");
    }

    return 0;
}
