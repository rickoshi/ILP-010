/* 
Exercício 12. Numerologia de Facebook
Suponha que o perfil de uma pessoa possa ser determinado pela sua data de nascimento (como exemplificado a seguir).
Dada uma data de nascimento, informe o perfil correspondente.
Data de nascimento: 13/06/1970
1º passo: 1306 + 1970 = 3276
2º passo: 32 + 76 = 108
3º passo:   108 / 5  -->  108 % 5 = 3
           -105  21
              3

Resto   Perfil
0       Tímido
1       Sonhador
2       Paquerador
3       Atraente
4       Irresistível
*/

#include <stdio.h>

int main (void) {
    int dia, mes, ano;
    printf("Digite o dia de nascimento: ");
    scanf("%d", &dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    int somaDIaMes = (dia * 100) + mes;
    int somaDiaMesAno = somaDIaMes + ano;
    int num1 = somaDiaMesAno / 100, num2 = somaDiaMesAno % 100;
    int somaNum = num1 + num2;
    int resultadoPerfil = somaNum % 5;

    switch (resultadoPerfil) {
        case 0: printf("Seu perfil é Tímido"); break;
        case 1: printf("Seu perfil é Sonhador"); break;
        case 2: printf("Seu perfil é Paquerador"); break;
        case 3: printf("Seu perfil é Atraente"); break;
        case 4: printf("Seu perfil é Irresistível"); break;
        default: printf("Alguma coisa deu errado! Tente novamente mais tarde"); break;
    }
    return 0;
}