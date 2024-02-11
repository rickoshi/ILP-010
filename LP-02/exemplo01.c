// Valor booleano
// é um valor que pode ser apenas 0 (representando falso) ou 1 (representando verdade)

/*
Em C:
O tipo _Bool pode ser usado para criar variáveis que guardam valores booleanos.
O arquivo stdbool.h, define o tipo bool e as constantes false e true. Em vez de bool, podemos usar o tipo int e as constantes 0 (false) e 1 (true).
A constante 0 representa falso e todo valor diferente de 0 representa verdade.
*/

#include <stdio.h>
#include <stdbool.h>
int main(void) {
bool p = false, q = 7;
printf("sizeof(bool) = %d, p = %d, q = %d\n",sizeof(bool),p,q); // 1 0 1
return 0;
}