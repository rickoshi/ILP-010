/*
Exercício 14. Rodízio de veículos [2ª versão]
Usando o comando switch-case, faça um programa para ler o número da placa de um
veículo (sem as letras) e informar em que dia da semana ele deve estar no rodízio.

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
    
    switch (numPlaca)
    {
    case 1:
    case 2:
        printf("Segunda-feira\n"); break;
    case 3:
    case 4:
        printf("Terca-feira\n"); break;
    case 5:
    case 6:
        printf("Quarta-feira\n"); break;
    case 7:
    case 8:
        printf("Quinta-feira\n"); break;
    case 9:
    case 0:
        printf("Sexta-feira\n"); break;
    default: printf("Placa invalida"); break;
    }
    return 0;
}