// Exercício 6. Situação do aluno [2ª versão]
// Dados o número de faltas e a média de um aluno, informe se ele está aprovado ou reprovado. Considere que a aprovação requer no máximo 5 faltas e no mínimo média 6.0. Use uma condição composta por um operador lógico e exiba as possíveis situações em cores distintas.

#include <stdio.h>
#include <conio.h>
int main(void) {
    float p1, p2, m;
    int faltas;
    printf("Notas? ");
    scanf("%f %f",&p1,&p2);
    printf("Faltas? ");
    scanf("%d", &faltas);
    m = (p1+p2)/2;
    if( faltas < 5 && m>=6 ) { _textcolor(9); puts("Aprovado"); }
    else { _textcolor(12); puts("Reprovado"); }
    return 0;
}