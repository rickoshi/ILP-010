// Exercício 9. Imposto de renda
// Dado o salário de um funcionário, informe o valor de Imposto de Renda a ser recolhido. Considere as alíquotas na tabela ao lado.

/*
Faixa salarial                      Alíquota
Até 1.903,98                        isento
Acima de 1.903,98, até 2.826,65     7,5 %
Acima de 2.826,65, até 3.751,05     15,0 %
Acima de 3.751,05, até 4.664,68     22,5 %
Acima de 4.664,68                   27,5 %
*/

#include <stdio.h>
int main(void) {
    double salario, aliquota, imposto; // Devido a imprecisão de valores float, opta-se pelo tipo double
    printf("Qual o salario? ");
    scanf("%lf", &salario);     // Para a função scanf, o tipo double necessita ser apontado por "%lf" ao invés de "%f"
    aliquota =  (salario <= 1903.98) ? 0.0 : 
                (salario <= 2826.65) ? 7.5 : 
                (salario <= 3751.05) ? 15.0 : 
                (salario <= 4664.68) ? 22.5 : 
                27.5;
    printf("Aliquota: %.2f%%\n", aliquota);

    imposto = salario * (aliquota / 100);
    printf("Imposto a ser recolhido = R$%.2f", imposto);

/*
1903.98             - 0%
1903.99 2826.65     - 7.50%
2826.66 3751.05     - 15.00%
3751.06 4664.68     - 22.50%
4664.69             - 27.50%
*/
}

/*
aliquota = (salario <= 1.903,98 ? isento : 
    (salario > 1.903,98 && <= 2.826,65 ? 7.5 : 
        (salario > 2.826,65 && <= 3.751,05 ? 15.0 : 
            (salario > 3.751,05 && <= 4.664,68 ? 22.5 : 
                (salario > 4.664,68 ? 27.5 : 0)))))
printf("%f", aliquota);

é possível fazer o exercício utilizando comandos if-else, porém para simplificação, também é possível utilizar o operador ternário e atribui-lo para o valor da aliquota

todos os operadores condicionais ficarão encadeados

var: faixa salárial, aliquota, imposto
*/