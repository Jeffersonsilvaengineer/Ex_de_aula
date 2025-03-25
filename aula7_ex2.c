//Ajuste o programa dos tamanhos para receber a letra usando getchar():
#include <stdio.h>

int main(void) {
  char tamanho;
  
  printf("Digite o tamanho recebido, F para encerrar:");
  //scanf("%c", &tamanho);
  tamanho = getchar();
  getchar();

  int quantidade_P = 0;
  int quantidade_M = 0;
  int quantidade_G = 0;

  while( tamanho != 'F' || tamanho == 'f' ) {
    switch (tamanho) {
      case 'P':
      case 'p':
	quantidade_P++;
	break;
      case 'M':
      case "m";
	quantidade_M++;
	break;
      case 'G':
      case "g";
	quantidade_G++;
	break;
    }

    printf("Digite o tamanho recebido, F para encerrar:");
    //scanf("%c", &tamanho);
    tamanho = getchar();
    getchar();
  }

  printf("P: %d M: %d G: %d", quantidade_P, quantidade_M, quantidade_G);
  return 0;
}
