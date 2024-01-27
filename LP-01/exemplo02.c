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

// char = seu código ASCII. Adicionar '' para char, ch = 'A'

// Uma declaração consiste em um tipo e um identificador. 
// tipo = o espaço de memória , identificador = referência (inicia por letra).

// Uma variável pode ou não ser iniciada ao ser declarada



/*
Tipo modificado         Bytes       Escala
unsigned char           1           0 ... 255
unsigned int            4           0 ... 4294967295
short int               2       −32767 ... +32767
long long int           8       −922337203e10 ... +922337203e10
unsigned short int      2           0 ... 65535
unsigned long long int  8           0 ... 18446744073709551615
*/

unsigned char contador;
unsigned int a, b, c;
long int tam_arquivo;

// O bit mais à esquerda (bit de sinal) no tipo char ou int é utilizado para distinguir entre valores positivos e negativos: bit zero = valor é positivo; caso contrário, negativo. 

// Usando o modificador unsigned, somente valores sem sinal serão usados e a escala de valores dobra. 

// O modificador long faz com que o espaço de memória reservado para uma variável do tipo int seja duplicado. 
// O modificador short faz com que esse espaço caia para a metade.