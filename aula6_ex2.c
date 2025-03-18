//Crie um programa em C que recebe várias notas de um aluno e calcula a média após o usuário digitar -5.

#include <stdio.h>

int main(void) {
  float soma, media = 0;
  float nota;
  int contador = 1;

  printf("Digite a nota: %d (-5 para encerrar): ", contador);
  scanf("%f", &nota);

  while(nota != -5) {
    soma += nota;
    contador += 1;
    media = soma / contador;
    printf("Digite a nota: %d (-5 para encerrar): ", contador);
    scanf("%f", &nota);
  }
  
  printf("A média deste aluno é: %.2f", media);

  return 0;
}
