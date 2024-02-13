// Bloco
// é uma sequência de comandos entre chaves, tratada como um único comando.

// Exemplo 5. Uso de blocos
#include <conio.h>
...
if( m>=6 ) { _textcolor(9); puts("Aprovado");  }
else { _textcolor(12); puts("Reprovado"); }

// é necessário usar ";" em cada instrução do bloco

// O arquivo conio.h (console input/output header) não faz parte da linguagem C padrão.
// A função _textcolor() seleciona a cor de exibição de textos no vídeo (0 a 15).