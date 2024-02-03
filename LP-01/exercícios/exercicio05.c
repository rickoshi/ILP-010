// Exercício 5. ASCII
// Dado um caractere, exiba o código ASCII correspondente

#include <stdio.h>
int main(void) {
    char ascii = 'A'; // tipo char é iniciado em aspas simples
    printf("%c \n", ascii); // A
    printf("%d \n", ascii); // 65
    // Quando uma variável é declarada no tipo char, a linguagem C entende a var. como sendo o código ASCII para ser representado visualmente. Sendo assim, se convertido de char (visual) para int (código), o dado de saída será o prório código ASCII da variável.

    char caractere;
    scanf("%c", &caractere);    // a
    printf("%d \n", caractere); // 97
}