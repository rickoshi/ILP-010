// Exercício 1. Tabela-verdade do operador &&

// Execute o programa a seguir e analise o resultado.
#include <stdio.h>
int main(void) {
printf("0 && 0 == %d\n",0 && 0);    // 0
printf("0 && 1 == %d\n",0 && 1);    // 0
printf("1 && 0 == %d\n",1 && 0);    // 0
printf("1 && 1 == %d\n",1 && 1);    // 1
return 0;
}