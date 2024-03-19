// O comando switch-case

// Exemplo 10. Uma calculadora simples [1ª versão]
// Dada uma expressão composta por dois números reais e um operador aritmético, exiba seu valor.

#include <stdio.h>

int main(void) {
   float x, y;
   char o;
   printf("Expressao? ");
   scanf("%f %c %f",&x,&o,&y);
   switch( o ) {
      case '+': printf("Valor = %.2f\n",x+y); break;
      case '-': printf("Valor = %.2f\n",x-y); break;
      case '*': printf("Valor = %.2f\n",x*y); break;
      case '/': printf("Valor = %.2f\n",x/y); break;
      default : printf("Operador invalido: %c\n",o);
   }
   return 0;
}