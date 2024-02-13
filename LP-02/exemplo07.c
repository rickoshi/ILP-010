// Operador condicional (?:)
// Sintaxe: (condição ? expressão1 : expressão2)
// Se a condição é verdadeira, o resultado é a expressão1; senão, ele é a expressão2.

// Exemplo 7. Uso do operador condicional
// Dados dois números inteiros distintos, informe qual dele é o maior.
#include <stdio.h>
int main(void) {
    int a, b;
    printf("Numeros? ");
    scanf("%d %d",&a,&b);
    printf("Maior = %d\n",(a>b ? a : b));
    return 0;
}

// Note que o uso do operador condicional pode deixar o código do programa mais conciso!

/* Outros exemplos
int a2 = 10, b2 = 20, c2;
c2 = (a2 < b2) ? a2 : b2;
printf("%d", c2);
// 10

int a3 = 1, b3 = 2, ans;
ans = (a3 == 1 ? (b3 == 2 ? 3 : 5) : 0);
printf ("%d\n", ans);
// 3
*/