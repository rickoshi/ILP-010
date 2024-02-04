// Exercício 8. Consumo
// Dada uma distância percorrida percorrida em quilômetros,  e o total de litros de combustível gasto para percorrê-la, informe o consumo médio do veículo.

#include <stdio.h>
#include <locale.h>
int main (void) {

// variável distância em quilômetros
// variável total de litros de combustível
// tanto a distância quanto os litros podem ser valores não inteiros, portanto serão declarados como float
    float distancia;
    float litros;

    printf("Qual foi a distância em quilômetros? ");
    scanf("%f", &distancia);
    printf("Qual foi o total de litros de combustível? ");
    scanf("%f", &litros);

// consumo médio = distância/litro
    printf("O consumo médio do veículo foi de: %.2f Km/L\n", (distancia/litros));
}






