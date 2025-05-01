//Altere o programa abaixo para que multi3 receba o endereço de x e não retorne nada (void):

#include <stdio.h>

void multi3(int *y);

int main(void) {
  int x = 5;
  printf("X antes: %d\n", x);

  multi3(&x);
  printf("Resultado: %d\n", x);

  printf("X depois: %d\n", x);
  return 0;
}

void multi3(int *y) {
  *y = *y *3;
}
