/*Contexto:

Você foi contratado pela Embraer para desenvolver um sistema de cálculo de liberação de cargas para aviões de transporte. 
O sistema deve determinar com precisão quando e a que distância uma caixa deve ser liberada para atingir o alvo no solo, 
considerando a altura e velocidade do avião.

Implemente a função: float calcular_tempo_queda(float altura);. Entrada: Altura do avião em metros. Saída: tempo em segundos que a caixa leva para atingir o solo. 
Considere a gravidade g=9.81m/sˆ2. Use a equação da queda livre para calcular o tempo: H = (g * t^2) / 2 Onde H é a altura em metros, g é a gravidade e t é o tempo em segundos.
Implemente a função: float calcular_distancia_liberacao(float velocidade, float altura);. Entrada: Velocidade horizontal do avião em m/s, altura do avião em metros. 
Saída: Distância horizontal em metros onde a caixa deve ser liberada. Utilize a função calcular_tempo_queda. 
Use a fórmula d = v * t onde d é a distância em metros antes do alvo, v é a velocidade do avião e t é o tempo em segundos.
Crie um programa em C que recebe a altura e a velocidade de um avião e mostre a distância do alvo que um objeto deve ser 
liberado e o tempo que levará até a queda usando as funções criadas nos exercícios anteriores.*/

#include <stdio.h>
#include <math.h>

float calcular_tempo_queda(float altura) {
    const float g = 9.81;
    return sqrt((2 * altura) / g);
}

float calcular_distancia_liberacao(float velocidade, float altura) {
    float tempo_queda = calcular_tempo_queda(altura);
    return velocidade * tempo_queda;
}

int main() {
    float altura_aviao, velocidade_aviao;

    printf("Digite a altura do avião (em metros): ");
    scanf("%f", &altura_aviao);

    printf("Digite a velocidade do avião (em m/s): ");
    scanf("%f", &velocidade_aviao);

    if (altura_aviao <= 0 || velocidade_aviao <= 0) {
        printf("Erro: A altura e a velocidade devem ser valores positivos.\n");
        return 1;
    }

    float tempo_queda = calcular_tempo_queda(altura_aviao);
    float distancia_liberacao = calcular_distancia_liberacao(velocidade_aviao, altura_aviao);

    printf("Tempo de queda: %.2f segundos\n", tempo_queda);
    printf("Distância de liberação: %.2f metros\n", distancia_liberacao);

    return 0;
}
