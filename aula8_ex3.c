//Altere o programa anterior para mostrar todos os números de 1 a 20, exceto os múltiplos de 3. 
//Use o comando continue para pular a impressão dos múltiplos de 3. A saída será: 1 2 4 5 7 8 10 11 13 14 16 17 19 20

#include <stdio.h>

int main(void) {
  int x = 0;

  while( x < 20 ) {
    x++;      
    if( x % 3 == 0) {
      continue;
    }
    printf("%d ", x);
  }

  printf("\nValor atual de x: %d", x);
  return 0;
}
