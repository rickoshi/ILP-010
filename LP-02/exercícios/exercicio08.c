// Exercício 8. Equação do 2º grau
// Dados os coeficientes (a≠0, b e c) de uma equação do 2º grau, informe quais são suas raízes reais (se elas existirem). 
// Use a fórmula de Bhaskara

#include <stdio.h>
#include <math.h>
int main(void){
    int a, b, c;    // a=x^2, b=x, c
    printf("Coeficientes a=x^2, b=x e c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("coeficientes: a=%d b=%d c=%d \n", a, b, c);

    int delta = (pow(b, 2) - (4 * a * c));
    
    float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);
    // printf("x = %.1f e %.1f\n", x1, x2);

    if(a != 0) {
        printf("delta = %d \n", delta);
        if(delta < 0) printf("Sem raiz real\n");
        else
            if (delta == 0) {printf("uma raiz real\n"); printf("S = {%.1f}\n", x1);}
            else {printf("duas raizes reais\n"); printf("S = {%.1f, %.1f}\n", x1, x2);}
    }
    else printf("nao pode ser equacao de 2 grau");
}

/*
if a != 0, não é equacao de 2° grau

delta = (pow(b, 2) - (4 * a * c))
se delta < 0, não há raízes reais
se delta = 0, há 1 raiz
se delta > 0, há duas raízes reais

x = (-b ± delta)/(2 * a)
x1 = (-b + sqrt(delta)) / (2 * a)
x2 = (-b - sqrt(delta)) / (2 * a)
*/