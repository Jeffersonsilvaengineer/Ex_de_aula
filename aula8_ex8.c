// Crie uma função chamada testa_par que recebe um número inteiro e retorna 1 se o número for par e 0 se for ímpar. 
// Na função main, teste a função com alguns valores e exiba os resultados. Exemplo de saída:

// 4 é par? 1
//5 é par? 0

#include <stdio.h>
int x = 0;

int testa_par(int x) {
  return x%2;
}  

int main(void) {
  int resultado = testa_par(3);
  if (rersultado == 0){
    printf("%d é par? %d", x, resultado);
  }
  printf("Resultado: %d", resultado);
}
