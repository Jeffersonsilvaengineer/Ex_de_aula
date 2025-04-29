// Crie um programa em C que imprime seu nome assim:
// * j * e * f * f * e * r * s * o * n *

#include <stdio.h>

int main() {
    char nome[10] = "jefferson";

for(int i = 0; i < 10; i++) {
  printf(" * %c", nome[i]);
}

    return 0;
}
