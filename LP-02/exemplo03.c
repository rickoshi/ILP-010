// Operador lógico
// assim como um operador relacional, sempre resulta em 0 (falso) ou 1 (verdade)

// Exemplo 3. Operadores lógicos
#include <stdio.h>
int main(void) {
printf("!0 = %d\n",!0);         // 1
printf("!9 = %d\n",!9);         // 0
printf("1&&0 = %d\n",1&&0);     // 0
printf("0||1 = %d\n",0||1);     // 1
printf("2<3 || 3<2 = %d\n",2<3 || 3<2); // 1
printf("%d %d %d %d", !3, !0, 3+'a'>'b'+2 && !'b', 1 || !2 && 3);
return 0;
}

/*
!3, !0, 3+'a'>'b'+2 && !'b', 1 || !2 && 3
0 , 1 , 3+97 > 98+2 "e" !98, 1 "ou" 0 "e" 1
0 , 1 , 100 > 100 "e" 0, 1 "e" 1
0 , 1 , 0 "e" 0, 1
0 , 1 , 1 , 1 

!3, !0
 0,  1

3+'a'>'b'+2 && !'b'
3+97 > 98+2 "e" !98
100 > 100 "e" 0
0 "e" 0
0

1 || !2 && 3
1 "ou" 0 "e" 1
1 "e" 1
1
*/

/*
Operador    Significado
    !       Negação (não)
    &&      Conjunção (e)
    ||      Disjunção (ou)
*/

// Os operadores relacionais têm prioridade sobre os operadores lógicos!
// ! tem prioridade sobre &&, que tem prioridade sobre || (! > && > ||).
// Os resultados dos operadores lógicos são definidos por tabelas-verdade.