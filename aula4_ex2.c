//Sem usar return no corpo do if e do else. Crie um programa em C que recebe uma nota em valor real
//(exemplo: 5.3) e mostra o conceito que o aluno recebeu, de acordo com a tabela:

//Intervalo de nota	Conceito
//      [9,10]	      A
//      [8,9[	      B
//      [7,8[	      C
//      [6,7[	      D
//      [0,6[	      F
#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 9 && nota <= 10) {
        printf("A");
    } else if (nota >= 8 && nota < 9) {
        printf("B");
    } else if (nota >= 7 && nota < 8) {
        printf("C");
    } else if (nota >= 6 && nota < 7) {
        printf("D");
    } else if (nota >= 0 && nota < 6) {
        printf("F");
    } else {
        printf("Nota inválida\n");
    }
}
