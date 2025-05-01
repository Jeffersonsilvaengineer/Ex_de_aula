//Crie um programa em C que recebe uma senha de um usuário e se a senha for igual à palavra "azimo" 
//mostre a mensagem: "Seja bem vindo!" e se o usuário errar a senha, mostre a mensagem: "Senha errada. 
//Tentativas restantes: 2", se o usuário errar 3 vezes mostra a mensagem: "Tente novamente mais tarde".

#include <stdio.h>
#include <string.h> // Para usar strcmp()

int main(void) {
    char senha[20];
    const char senhaCorreta[] = "azimo";
    int tentativas = 3;

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%s", senha);

        
        if (strcmp(senha, senhaCorreta) == 0) {
            printf("Seja bem-vindo!\n");
            return 0; 
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            } else {
                printf("Tente novamente mais tarde.\n");
            }
        }
    }

    return 0;
}
