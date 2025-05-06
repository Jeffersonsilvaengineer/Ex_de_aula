/*Crie um programa em C que recebe uma palavra com até 10 letras e verifique se a palavra é um palíndromo. Exemplo:

Digite a palavra: osso
Resultado: é um palíndromo!

Digite a palavra: ame
Resultado: NÃO é!*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[11];
    int i, j;
    int palindromo = 1;

    printf("Digite a palavra: ");
    scanf("%10s", palavra);

    for (i = 0; palavra[i]; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    for (i = 0, j = strlen(palavra) - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("Resultado: é um palíndromo!\n");
    } else {
        printf("Resultado: NÃO é!\n");
    }

    return 0;
}
