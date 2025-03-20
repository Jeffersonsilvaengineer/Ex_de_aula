//Crie um programa em C que recebe o valor do raio de um círculo, calcule e mostre o diâmetro, 
//a circunferência e a área do círculo.

#include <stdio.h>

int main() {
    float raio, diametro, circunferencia, area;

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);
        
    diametro = 2 * raio;
    circunferencia = 2 * 3.14159 * raio;
    area = 3.14159 * raio * raio;
    printf("Diâmetro: %.2f\n", diametro);
    printf("Circunferência: %.2f\n", circunferencia);
    printf("Área: %.2f\n", area);
    
    return 0;
}