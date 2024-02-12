// Exercício 5. Maior entre dois números
// Dados dois números distintos, informe qual deles é o maior.

#include <stdio.h>
int main(void) {
    float n1, n2;
    printf("Quais sao os numeros? ");
    scanf("%f %f", &n1, &n2);
    if(n1 > n2) puts("n1 > n2");
    else puts("n1 <= n2");
    return 0;
}