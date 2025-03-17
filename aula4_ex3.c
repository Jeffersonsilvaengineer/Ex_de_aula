//Usando if/else interno crie um programa em C que recebe o peso e altura de um usuário e imprime
//qual o diagnóstico de acordo com a tabela disponível em: https://aps.bvs.br/apps/calculadoras/?page=6

// IMC = Peso / Altura * 2

//Valores de referência

//IMC	                              Diagnóstico
//menor que    18,5	                  baixo peso
//entre        18,5 e 24,9	          intervalo normal
//entre        25 e 29,9	          sobrepeso
//entre        30 e 34,9	          obesidade classe I
//entre        35 e 39,9	          obesidade classe II
//maior que    40	                  obesidade classe III

#include <stdio.h>
int main() {
    float imc;

    printf("Digite seu IMC: ");
    scanf("%f", &imc);

    if (imc < 18.5) {
        printf("baixo peso!\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Intervalo normal\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso\n"); 
    } else if (imc >= 30 && imc <= 34.9) {
        printf("Obesidade classe I\n");
    } else if (imc >= 35 && imc <= 39.9) {
        printf("Obesidade classe II\n");
    } else (imc > 40) ;{
        printf("Obesidade classe III\n");
    }

}