//Ajuste o programa dos tamanhos para receber a letra usando getchar():
#include <stdio.h>

int main(void) {
  char tamanho;

  printf("Digite o tamanho recebido, F para encerrar:");
  scanf("%c", &tamanho);

  int quantidadeP = 0;
  int quantidadeM = 0;
  int quantidadeG = 0;

  while( tamanho != 'F' ) {
    switch (tamanho) {
      case 'P':
	quantidadeP++;
	break;
      case 'M': 
	quantidadeM++;
	break;
      case 'G':
	quantidadeG++;
	break;
    }

    printf("Digite o tamanho recebido, F para encerrar:");
    scanf("%c", &tamanho);
  }

  printf("P: %d M: %d G: %d", quantidadeP, quantidadeM, quantidadeG);
  return 0;
}


//char letra;

printf("Digite uma letra: ");

letra = getchar();

printf("Digitado: %c", letra);
