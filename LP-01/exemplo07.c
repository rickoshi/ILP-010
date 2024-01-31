// Formatação de campos para exibição
// Preenchimento com espaços: % tamanho_do_campo d
// Preenchimento com zeros: %0 tamanho_do_campo d
// Número de casas decimais: %tamanho_do_campo . número_de_casas f

// Exemplo 7. Formatação de campos
#include <stdio.h>
int main(void) {
int a = 678;
float b = 12.3416;
int c = 1;
float d = 1;
printf("%5d\n",a);      //  678
printf("%06d\n",a);     //000678
printf("%7.3f\n",b);    // 12.342
printf("%5d\n",c);      //    1
printf("%05d\n",c);     //00001
printf("%5.1f\n",d);    //  1.0
printf("%1.5f\n",d);    //1.00000
printf("%10.1f\n",d);   //       1.0
printf("%1.10f\n",d);   //1.0000000000
return 0;
}

/*
Espaços     "%5d", 1:    1z
Zeros      "%05d", 1:00001      // apenas 4 zeros para 5 casas decimais
Decimais   "%5.1%f", 1:  1.0    // float ocupa 3 espaços: "1", ".", "0"
Decimais   "%1.5%f", 1:1.00000  // núm de casas é igual ao núm de zeros
*/