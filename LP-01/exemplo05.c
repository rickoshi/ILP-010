// A função scanf()
// lê dados do teclado (entrada padrão) e os armazena em variáveis

// scanf("formatação", &ender1, &ender2, ..., &endern);
// especificadores de formato (%): indicam os tipos e a ordem em que os dados devem ser digitados

// Exemplo 5. Entrada formatada
#include <stdio.h>
int main(void) {
int idade;      // type int
char sexo;      // type char
scanf("%d %c",&idade,&sexo);    // (int char, idade(int), sexo(char)) 
// é necessário colocar o operador '&' antes das váriáveis, para informar o endereço de memória da var. para a função
// printf("%d %c", idade,sexo); 
}


/*
Especificador de formato
determina o tipo de dado que será lido do teclado ou exibido no vídeo.

Especificador       Representa
%c                  caractere
%o, %d, %x, %X      núm int octal, decimal ou hexadecimal
%u                  núm int decimal sem sinal
%hd                 núm int curto decimal
%lld                núm int longo longo decimal
%f                  núm real de precisão simples ou dupla
%s                  cadeia de caracteres (string)
%%                  único sinal de porcentagem

// os especificadores que aparecem frequentemente são %c, %d, %f e %s
*/