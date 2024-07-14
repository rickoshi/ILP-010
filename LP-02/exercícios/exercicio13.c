/*
Exercício 13. Rodízio de veículos [1ª versão]
Usando comandos if-else, faça um programa para ler o número da placa de um veículo
(sem as letras) e informar em que dia da semana ele deve estar no rodízio.

Final       Dia do rodízio
1 e 2       Segunda-feira
3 e 4       Terça-feira
5 e 6       Quarta-feira
7 e 8       Quinta-feira
9 e 0       Sexta-feira
*/

#include <stdio.h>

int main(void) {
    int numPlaca;
    scanf("%d", &numPlaca);
    printf("%d\n", numPlaca);

    if (numPlaca == 1 || numPlaca == 2)
    {
        printf("Segunda-feira\n");
    } else if (numPlaca == 3 || numPlaca ==  4)
    {
        printf("Terca-feira\n");
    } else if (numPlaca == 5 || numPlaca ==  6)
    {
        printf("Quarta-feira\n");
    } else if (numPlaca == 7 || numPlaca ==  8)
    {
        printf("Quinta-feira\n");
    } else if (numPlaca == 9 || numPlaca ==  0)
    {
        printf("Sexta-feira\n");
    }
    return 0;
}