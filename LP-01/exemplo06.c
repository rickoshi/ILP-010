// A função printf()
// exibe dados no vídeo (saída padrão)

// printf("formatação", val1, val2, ..., valn);
// especificadores de formato (%): são substituídos pelos valores correspondentes.
// caracteres de controle (\): produzem efeitos especiais (e.g., som e mudança de linha).

// Exemplo 6. Saída formatada
#include <stdio.h>
int main(void) {
int idade;
char sexo;
// scanf("%d %c",&idade,&sexo);
printf("%d %c\n",idade,sexo); // sem nenhuma iniciação da var., ela recebe um valor aleatória. Há especificadores de formato (%d dec, %c char) e caract. de controle (\n avança para próxima linha)

// printf("\a");
// printf("\b");
// printf("\f");
// printf("\n");
// printf("\r");
// printf("\t");
// printf("\"");
// printf("\'");
// printf("\\");
// printf("\0");
}

/*
Caractere de controle
representa um caractere especial da tabela ASCII.

Caractere de controle   Efeito na saída de dados
\a                      soa o alarme
\b                      cursor retrocede à coluna anterior
\f                      alimenta página na impressora
\n                      cursor avança para uma nova linha
\r                      cursor retrocede para a primeira coluna da linha
\t                      o cursor avança para próxima marca de tabulação
\"                      exibe única aspa
\'                      exibe único apóstrofo
\\                      exibe única barra invertida
\0                      indica o final de uma cadeia de caracteres

// os caractere que aparecem frequentemente são \n e outros que movimentam o cursor
*/