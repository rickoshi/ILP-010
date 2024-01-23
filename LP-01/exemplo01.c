/* OBESO.C - determina se uma pessoa está obesa */

// As diretivas #include tem arquivos de cabeçalhos com declarações para compilação
#include <stdio.h>   // Comandos de I/O padrão
#include <math.h>    // Funções matemáticas

int main(void) {                             // início da main()
   float peso, altura, imc;                  // Declaração das variáveis
   printf("Qual o peso e a altura? ");       // Saída de texto 
   scanf("%f %f", &peso, &altura);           // Entrada de dados
   imc = peso/pow(altura, 2);                 // Var. que recebe uma operação aritmética
   printf("IMC = %.1f\n",imc);               // Saída de texto da variável que recebeu op. aritmética
   if( imc<=30 ) printf("Nao esta obesa!\n"); // Condição que compara se a var. após a op. aritmética é <=> que um valor; saída de texto 
   else printf("Esta obesa!\n");             // Sáida de texto baseado na condição não estar verdadeira
   return 0;                                 // Resposta da função
}

// Float funciona por ponto . e não vírgula ,

/* 
   Todo texto demilimatado por / * * / é comentário
*/

// Os () após main() são obrigatórios, e a linguagem C é case-sensitive

// {} delimitam um bloco de instruções