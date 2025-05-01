#ifndef UTIL_H
#define UTIL_H

// Função que calcula o diâmetro de um círculo
double diametro(double raio) {
    return 2 * raio;
}

// Função que calcula a circunferência de um círculo
double circunferencia(double raio) {
    return 2 * 3.14159 * raio;
}

// Função que calcula a área de um círculo
double area(double raio) {
    return 3.14159 * raio * raio;
}

#endif