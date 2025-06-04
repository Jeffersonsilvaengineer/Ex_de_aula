/* #include <stdio.h>

int main(void) {
  FILE *pArquivo = NULL;
  pArquivo = fopen("nomes.txt", "r");

  char destino[80];
  fgets(destino, 80, pArquivo);

  printf("%s", destino);

  fclose(pArquivo);
  return 0;
}*/

/*Ajuste o programa anterior para ler todas as linhas do arquivo abaixo:
Capitu
Bentinho
Escobar
Sancha
Dona Gloria
Jose Dias
Ezequiel
 */

 #include <stdio.h>

int main(void) {
  FILE *pArquivo;
  char linha[80];

  pArquivo = fopen("nomes.txt", "r");

  if (pArquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    return 1;
  }

  while (fgets(linha, sizeof(linha), pArquivo) != NULL) {
    printf("%s", linha);
  }

  fclose(pArquivo);
  return 0;
}
