/*Implemente a função palindromo que recebe um ponteiro para uma String e determina se a String é um palíndromo usando aritmética de ponteiros.
Implemente a função inverter_string que recebe um ponteiro para uma string e inverte seus caracteres usando apenas aritmética de ponteiros.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(const char *str) {
    const char *inicio = str;
    const char *fim = str + strlen(str) - 1;

    while (inicio < fim) {
        if (tolower(*inicio) != tolower(*fim)) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}

void inverter_string(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;
    char temp;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = 0;

    if (palindromo(texto)) {
        printf("\"%s\" é um palíndromo.\n", texto);
    } else {
        printf("\"%s\" não é um palíndromo.\n", texto);
    }

    inverter_string(texto);
    printf("String invertida: \"%s\"\n", texto);

    return 0;
}
