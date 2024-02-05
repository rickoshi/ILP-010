// Exercício 10. Distância
// Dadas as coordenadas (xp, yp) e (xq, yq), de dois pontos P e Q no plano cartesiano, exiba a distância entre eles. [Dica: use o Teorema de Pitágoras].

#include <stdio.h>
#include <math.h>
int main(void){
/*
o teorema de Pitágora é "a^2 + b^2 = c^2"
as coordenadas informarão a medidas dos lados
para o teorema, precisamos de uma hipotênusa e dois catetos
*/

// variáveis do ponto P
    int xp, yp;
    printf("Informe as coordenadas do ponto P: ");
    scanf("%d %d", &xp, &yp);
    printf("As coordenadas de P sao: %d, %d \n", xp, yp);

// variáveis do ponto Q
    int xq, yq;
    printf("Informe as coordenadas do ponto Q: ");
    scanf("%d %d", &xq, &yq);
    printf("As coordenadas de Q sao: %d, %d \n", xq, yq);

// é preciso achar um ponto que determine o ângulo reto do triângulo. Para isso, o ponto é estabelecido com o valor X de P e o valor Y de Q (xp, yq), ou vice-versa. Criando assim um ponto independente das duas coordenadas. 
    printf("As coordenadas do ponto que determinam o angulo reto: %d, %d \n", xp, yq);

// depois, os valores da coordenada X do ponto são subtraidos com a coordenada X oposta. O mesmo acontece com a coordenada Y. ex: (xp - xq; yq - yp)
// o resultado dessa operação são dois valores que determinam dois lados do triângulo (xp - xq = a; yq - yp = b).
    printf("Os valores que determinam dois dos tres lados do triangulo: %d, %d \n", (xp - xq), (yq - yp));

// informando os lados a e b, é possível calcular a hipotênusa, ou nesse exercício, a distância dos dois pontos ("a^2 + b^2 = c^2")
    printf("A distancia entre os ponto P e Q: %.2f \n", (sqrt((pow((xp - xq),2) + pow((yq - yp),2)))));

/*
para simplificação:
(sqrt((pow((xp - xq),2) + pow((yq - yp),2))))

a = (xp - xq)
b = (yq - yp)
(sqrt((pow((a),2) + pow((b),2))));

a^2 + b^2 = (pow((a),2) + pow((b),2))

(sqrt(a^2 + b^2));

no final, a operação foi calcular a raiz quadrada da soma dos dois catetos
c^2 = a^2 + b^2
c = sqrt(a^2 + b^2)
*/


// (xp = xq; yp != yq), ou (xp != xq; yp = yq)
// obs: mesmo que um dos lados tenha valor de subtração 0 (ex: 2-(2)=0), ainda é possível calcular a distância, visto que um dos lados ainda terá distância do outro. No teorema, um dos catetos não será calculado na formúla ("a^2 = c^2" ou "b^2 = c^2"). 

// (xp = xq; yp = yq)
// se as duas coordenadas de P e Q fornecidos forem iguais (xp = xq; yp = yq), a distância calculada será 0.
}