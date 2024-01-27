#include <stdio.h>   // Comandos de I/O padrão
#include <math.h>    // Funções matemáticas
int main(void) {
    float a = 1 + 2;
    float b = 8.0 - 4;
    float c = 3 * 7;
    float d = 7 / 2;
    float e = 7 / 2.0;
    float f = 7 % 2;
//  float g = 7.0 % 2.0;
    
    printf("%f \n", a);     // 3
    printf("%f \n", b);     // 4.0
    printf("%f \n", c);     // 21
    printf("%f \n", d);     // 3
    printf("%f \n", e);     // 3.5
    printf("%f \n", f);     // 1
//  printf("%f \n", g);     // erro
}

/*
Soma       +
Subtração  - 
Produto    *
Divisão    /
Resto      %
*/

// Divisão: o resultado é inteiro apenas quando os dois valores são inteiros

// Resto: produz o resto da divisão entre dois números inteiros 7 % 2 ⇒ 1 || 7.0 % 2 ⇒ erro