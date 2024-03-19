// Exercício 10.Uma calculadora simples [2ª versão]
// Usando um comando if-else, dentro do switch-case, altere o programa anterior para que uma divisão por zero cause a exibição de uma mensagem de alerta para o usuário.

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
      case '/': if (y == 0) {
                printf("Erro: Nao e possivel dividir por zero"); exit(1); 
                } // Quando executada, a função exit() interrompe a execução do programa.
                // É possível omitir o else, a expressão permanece a mesma que seria utilizada anteriormente; ou em todo o caso de divisão
                printf("Valor = %.2f\n",x/y); break;
      default : printf("Operador invalido: %c\n",o);
   }
   return 0;
}

// Não existe restrição alguma quanto aos tipos de comandos que podem estar associados a um determinado case dentro do comando switch.
// Como toda a estrutura switch é envolvida por chaves, não é necessário usar bloco quando há mais que uma instrução associada a um determinado case