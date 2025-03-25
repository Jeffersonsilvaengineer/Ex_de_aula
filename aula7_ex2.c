//Ajuste o programa dos tamanhos para receber a letra usando getchar():
#include <stdio.h>

int main(void) {
  char tamanho;
  
  printf("Digite o tamanho recebido, F para encerrar:");
  scanf("%c", &tamanho);

  int quantidade_P = 0;
  int quantidade_M = 0;
  int quantidade_G = 0;

  while( tamanho != 'F' ) {
    switch (tamanho) {
      case 'P':
	quantidade_P++;
	break;
      case 'M': 
	quantidade_M++;
	break;
      case 'G':
	quantidade_G++;
	break;
    }

    printf("Digite o tamanho recebido, F para encerrar:");
    scanf("%c", &tamanho);
  }

  printf("P: %d M: %d G: %d", quantidade_P, quantidade_M, quantidade_G);
  return 0;
}


//char letra;

printf("Digite uma letra: ");

letra = getchar();

printf("Digitado: %c", letra);
