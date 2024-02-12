// O comando if-else
// seleciona um comando para ser executado, de acordo com uma condição.

// Exemplo 4. O comando if-else
#include <stdio.h>
int main(void) {
    int idade;
    printf("Idade? ");
    scanf("%d",&idade);
    if( idade<=18 ) puts("Menor");  // Se a idade for menor ou igual a 18, executará o comando-1
    else puts("Maior");  // Senão, executa o comando-2
    return 0;
}

/*
if( condição ) comando-1;
else comando-2;
*/

// A função puts(), declarada em stdio.h, exibe uma cadeia (string) e muda o cursor de linha!