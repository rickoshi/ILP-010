// Aninhamento e encadeamento
// Um comando if é chamado aninhado se ele fica na parte verdadeira de outro if. Um comando if é chamado encadeado se ele fica na parte falsa de outro if

// Exemplo 8. Classificação de triângulos
// Dados três números positivos quaisquer, verifique se eles podem representar as medidas dos lados de um triângulo e, se puderem classifique o triângulo em equilátero, isósceles ou escaleno.
#include <stdio.h>
int main(void) {
    float a, b, c;
    printf("Numeros? ");
    scanf("%f %f %f",&a,&b,&c);
    if( a<b+c && b<a+c && c<a+b ) {
        printf("Triangulo: ");
        if( a==b && b==c ) puts("equilatero");
        else if( a==b || a==c || b==c) puts("isosceles");
        else puts("escaleno");
    }
    else puts("Nao e triangulo!");
    return 0;
}

// para triângulos, soma de 2 lados precisa ser maior que o terceiro
// se todos os lados são iguais, é equilatero
// se apenas dois dos lados são iguais, é isosceles
// se todos os lados são diferentes, é escaleno