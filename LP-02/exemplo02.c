// Operador relacional
// é um operador que compara valores, resultando em 0 (falso) ou 1 (verdade).

// Exemplo 2. Operadores relacionais
#include <stdio.h>
int main(void) {
printf("1==2 = %d\n",1==2);     // 0
printf("1!=2 = %d\n",1!=2);     // 1
printf("1<2 = %d\n",1<2);       // 1
printf("1>2 = %d\n",1>2);       // 0
printf("9-2<=2*3+1 = %d\n",9-2<=2*3+1); // 1
return 0;
}

/*
Operador Significado
    ==      Igual
    !=      Diferente
    <       Menor
    >       Maior
    <=      Menor ou igual
    >=      Maior ou igual
*/

// Os operadores aritméticos têm prioridade sobre os operadores relacionais!