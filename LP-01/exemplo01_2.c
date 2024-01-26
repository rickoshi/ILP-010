// Exercício 1.2. Descubra os erros no programa a seguir:

/* PERIM.C - informa o perímetro de uma circunferência */ // Cometário corrigido
#include <stdio.h> // <studio.h> --> <stdio.h>
#include <conio.h> // Inclusão do arquivo header <conio.h>
#define PI 3.1415 // Retirado PI = 3.14 para apenas PI 3.14
int main(void) { // Função Main() --> main() // Adicionado (void) para estilo novo
 float raio;
 // Retirado clrscr(), biblioteca legado do turbo C
 printf("\n Qual a medida do raio? "); /* solicita o raio da circunferência */
 scanf("%f", &raio); 
 float perim; /* calcula o seu perímetro */
 perim = 2*PI*raio; // Retirado := para =
 printf("\n O perímetro é %f", perim);
 // Retirado getch() 
} 


// Programa original
///* PERIM.C - informa o perímetro de uma circunferência /*
//#include <studio.h>
//#define PI = 3.1415
//Main() {
// float raio;
// clrscr;
// printf("\n Qual a medida do raio? "); /* solicita o raio
// scanf("%f", &raio); da circunferência */
// float perim; /* calcula o seu
// perim := 2*PI*raio; perímetro */
// printf("\n O perímetro é %f", perim);
// getch;
// } 