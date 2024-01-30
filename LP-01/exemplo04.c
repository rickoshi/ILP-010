// O operador sizeof
// Exemplo 4. Tamanho de um tipo

// informa a quantidade de memória (em bytes) usada por um tipo de dados. Pode ser aplicado a tipo, constante, variável ou expressão

#include <stdio.h>
int main(void) {
    char v = 'A';
    printf("%d\n", sizeof(int));    // int = 4
    printf("%d\n", sizeof(1.2));    // se converte para double = 8
    printf("%d\n", sizeof(v));      // char = 1
    printf("%d\n", sizeof(v+1));    // char + int = 4
    printf("%d\n", (v+1));          // ascii(A) + 1 = 66 
    // char é representado pelo seu código ascii. Se não existir nada após a variável char, seu sizeof será de 1 (char = 1). Se existir um valor int após o char, como em (v+1), o valor de char é convertido para código ascii e somado ao outro valor (sendo v = 'A', v = 65/código ascii de 'A'; 65 + 1 = 66)
    return 0;
/*
sizeof(int)     4
sizeof(1.2)     8
sizeof(v)       1
sizeof(v+1)     4
(v+1)           66
*/
}