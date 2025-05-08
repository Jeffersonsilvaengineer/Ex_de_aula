//Crie um programa em C que recebe duas strings e verifique se são anagramas. Use strlen e ordenação de vetores.

#include <stdio.h>
#include <string.h>

void ordenarString(char str[]) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int saoAnagramas(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    ordenarString(str1);
    ordenarString(str2);

    return strcmp(str1, str2) == 0;
}

int main(void) {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (saoAnagramas(str1, str2)) {
        printf("As strings são anagramas.\n");
    } else {
        printf("As strings não são anagramas.\n");
    }

    return 0;
}