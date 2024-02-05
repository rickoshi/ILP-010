// Exercício 9. Temperatura
// Dada uma temperatura em graus Fahrenheit (oF), informe a temperatura correspondente em graus Celsius (oC). [Dica: C = (F−32) ∗ (5/9)].


#include <stdio.h>
int main(void) {
// variável para Fahrenheit (entrada)
    float Fahrenheit;
    printf("Informe a temperatura em graus Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    printf("%f\n", (Fahrenheit-32)*(5.0/9.0));
// obs: O valor da divisão "5/9" não está em formato preciso para a operação exigida (5/9 é uma divisão inteira = 0, e queremos valores com ponto, sendo "0.5556...")
// portanto precisamos utilizar os valores float, e para isso pode-se usar "5.0/9.0"
}