/*
Tipo básico     Bytes       Escala
char            1       -128 ... +127
int             4       -2 147 483 648 ... +2 147 483 647
float           4       3.4e-38 ... 3.4e+38 (absoluto)
double          8       1.7e-308 ... 1.7e+308 (absoluto)
void            0           vazia
*/

char tecla = 'A', opcao, numero = '2';
int x = 07, y = 3, z, a = 0x7F; // 07 é octal e ox7F é hexadec
float comissao = 0.10, desconto, salario, teste = 5.67e2;


// Não há o tipo string, mas há constantes desse tipo

// Os dados podem se apresentar em duas formas distintas: como constantes ou variáveis (que variam de uma execução para outra) 

// caracter a uma variável = seu código ASCII. Adicionar '', ch = 'A'

// Uma declaração consiste em um tipo e um identificador. 
// tipo = o espaço de memória , identificador = referência (inicia por letra).

// Uma variável pode ou não ser iniciada ao ser declarada