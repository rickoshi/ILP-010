// Exercício 2. Erro
// Qual é o erro no programa a seguir?

#include <stdio.h>
int main(void) { 
    printf("%d\n",067);
    // printf("%d\n",0678); // O numeral "0678" está em base octal, mas possui o dígito "8", que é inválido nessa base. 
    // Obs: O especificador de formtato está em decimal (%d), enquanto o numeral está em octal (%o), portanto "067" será convertido para o mesmo formato do especificador (decimal).
    // Saída de vídeo: 55
    return 0; 
}