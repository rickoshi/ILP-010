/*
Exercício 15. Índice de massa corpórea (IMC)
Uma pessoa com IMC entre 18.5 e 30 está normal, com IMC abaixo de 18.5 está magra e com
IMC acima de 30 está obesa. Dados o peso e a altura de uma pessoa, informa a sua situação.
*/

#include <stdio.h>

int main (void) {
    double peso, altura, imc;
    printf("Peso em quilos: ");
    scanf("%lf", &peso);
    printf("Altura em metros: ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);
    printf("%.2f", imc);

    if (imc >= 18.5 && imc <= 30.0)
    {
        printf("\nIMC normal");
    } else if (imc < 18.5)
    {
        printf("\nIMC magro");
    } else printf("\nIMC obeso");
}