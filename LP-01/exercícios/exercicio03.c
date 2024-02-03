// Exercício 3. Bytes
// Crie um programa para informar quantos bytes são necessários para representar os resultados das expressões 7/2 e 7/2.0, respectivamente.

#include <stdio.h>
int main(void) {

int a = 7;
int b = 2;
float c = 2.0;

printf("%d \n", a/b);   // 3
printf("%.1f \n", a/c); // 3.5 

// OBS: O especificador de formato precisa estar de acordo com o resultado das variáveis. Os valores podem ser "int/int = int" ou "int/float = float"
// Se fosse utilizado "printf("%f \n", a/b)""; ao invés do formato %d, o resultado adequado não apareceria na saída (0.000000). O mesmo acontece para "printf("%d \n", a/c);" em vez de %f
// 7/2      Sendo dois valores inteiros, o resultado será inteiro
// 7/2.0    Sendo um dos valores com ponto, o resultado será com ponto (double)


printf("%d \n", sizeof(a/b)); // 4
printf("%d \n", sizeof(a/c)); // 4; o valor é 4 pois a variável utilizada e convertida foi do tipo float, que possui o mesmo tamanho de int. Se fosse utilizado o tipo double, como em "double c = 2.0", o valor seria 8.

// É necessário utilizar o especificador de formato para determinar o tipo de dado. Em C, todos os dados precisam ser ter tipo. O operador "sizeof()" possui tipo int, e será decimal (%d)"
}