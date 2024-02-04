// Exercício 7. Média
// Dadas as duas notas de prova de um aluno, informe a sua média

#include <stdio.h>
#include <locale.h>
int main(void) {
    // 2 variáveis serão duas notas de prova
    float nota1;
    float nota2;
    
    printf("Qual é a primeira nota? \n");
    scanf("%f", &nota1); // primeira entrada
    
    printf("Qual é a segunda nota? \n");
    scanf("%f", &nota2); // segunda entrada

    printf("%.2f \n", (nota1 + nota2)/2);   // saída de vídeo com cálculo das variáveis "(nota1 + nota2)/2" + formatação de 2 casas decimais "%.2f"

// Para calcular a média é necessário somar os valores e dividi-los pela quantidade de variáveis
// É considerado que as notas podem ser valores não inteiros
// Por serem dois tipos não inteiros, o resultado será considerado não inteiro (float/double)
}