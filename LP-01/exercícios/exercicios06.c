// Exercício 6. Formatação
// Exiba o texto "c:\backup\texto\novo\arq.txt" no vídeo.

#include <stdio.h>
int main(void) {
    printf("c:\\backup\\texto\\novo\\arq.txt"); // c:\backup\texto\novo\arq.txt
    // Os caracteres que não podem ser exibidos são as barras invertidas "\". Para exibi-las, é necessário utilizar o caracter de controle "\\", ou seja, adicionar outra "\" além da existente.

    /*
    printf("c:\backup\texto\novo\arq.txt");
        Saída:
        cackup  exto
        ovorq.txt
    */
}