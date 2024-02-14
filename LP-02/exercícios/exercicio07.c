// Exercício 7. Situação do aluno [3ª versão]
// Dados o número de faltas e a média de um aluno, informe sua situação. Um aluno com mais de 5 faltas ou com média inferior a 4.0 é reprovado; caso contrário, se ele tem média no mínimo 6.0, ele é aprovado; senão, ele fica de recuperação. Exiba os textos em cores.

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
    if( faltas > 5 || m<4) { _textcolor(12); puts("Reprovado"); }
    else if ( m >= 6 ) { _textcolor(9); puts("Aprovado"); }
    else { _textcolor(6); puts("Recuperacao"); }
    return 0;
}

// primeira condição: true=reprovado, end; false=próxima condição
// se possuir > 5 faltas ou média < 4: reprovado

// condição encadeada: true=aprovado, end; false=recuperação, end.
// senão, média >= 6: aprovado
// senão: recuperação