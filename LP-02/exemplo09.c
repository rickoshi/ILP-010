// O comando switch-case
// Seleciona um comando para ser executado, de acordo com o valor de uma expressão.

// Exemplo 9. Efeito do break num switch-case

#include <stdio.h>

int main(void) {
   int n;
   printf("Numero? ");
   scanf("%d",&n);
   switch( n ) {
      case  1: putchar('A'); break;
      case  3: putchar('B');
      case  4: putchar('C'); break;
      default: putchar('*');
      case  5: putchar('D');
   }
   puts("."); 
   return 0;
}

// A função putchar(), declarada em stdio.h, exibe um único caractere no vídeo!

/*
Avalia a expressão (que deve ser do tipo char ou int).
Entra no caso cuja constante (cte i) é igual ao valor da expressão.
Se um tal caso não existe, entra no caso default (que é opcional).
Após entrar num caso, a execução só termina quando um break é encontrado
*/

// por não possuir o comando break nos cases, 3, default e 5, se por acaso um desses casos for escolhido, o programa passa para a próxima instrução 
/*
Numero? 1
A.
Numero? 3
BC.
Numero? 4
C.
Numero? 2
*D.
Numero? 5
D.
*/