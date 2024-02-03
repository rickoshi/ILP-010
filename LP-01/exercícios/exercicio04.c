// Exercício 4. Conversão
// Dado um número inteiro em base 10, exibir o valor correspondente em base 16

#include <stdio.h>
int main(void){

int b10 = 99999;
printf("%x \n", b10);
// utilizando o especificador de formato, os números podem ser convertidos de uma base para outra
// um número da base 10 possui o formato %d, e um número de base 16 possui o formato %x

int base10;
scanf("%d", &base10);   // Não é necessário \n em scanf()
printf("%x \n", base10);
// se a variável iniciada for em base 10 e o especificador de formato de saída for em base 16, a var. será lida como um número de base diferente, nesse caso, 16
}