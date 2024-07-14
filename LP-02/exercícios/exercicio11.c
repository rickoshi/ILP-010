// Exercício 11. Uma calculadora simples [3ª versão]
// Altere o programa anterior de modo que os caracteres * e x possam ser usados para representar um produto,
// E os caracteres / e : possam ser usados para representar uma divisão.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float x, y;
    char o;
    printf("Expressao? ");
    scanf("%f %c %f",&x,&o,&y);
    switch( o ) {
        case '+': printf("Valor = %.2f\n",x+y); break;
        case '-': printf("Valor = %.2f\n",x-y); break;
        case '*': printf("Valor = %.2f\n",x*y); break;
        case 'x': printf("Valor = %.2f\n",x*y); break;
        case '/': if (y == 0) {
            printf("Erro: Nao e possivel dividir por zero"); exit(1);
        } else {
        printf("Valor = %.2f\n",x/y); break;
        }
        case ':': if (y == 0){
            printf("Erro: Nao e possivel dividir por zero"); exit(1);
        } else {
        printf("Valor = %.2f\n",x/y); break;
        }
        default : printf("Operador invalido: %c\n",o);
   }
   return 0;
}