#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*A empresa ABC Corporation aumentar� o sal�rio de seus funcion�rios.
#A partir da leitura do sal�rio atualizar conforme as condi��es a seguir:
(a) sal�rios abaixo de 1.000,00, considerar reajuste de 20%
(b) sal�rios de 1.000 a 5.000, reajustar 15%
(c) sal�rios mais de 5.000 at� 10.000,00, reajustar 10%
(d) sal�rios acima de 10.000,00, reajustar 5%
Exibir o sal�rio informado, o percentual de reajuste, o valor do reajuste e o sal�rio atualizado.
Se o valor do reajuste exceder 500,00 exibir a mensagem "MAIS DE 500,00".
*/

int main() {
    setlocale(LC_ALL, "");
    setlocale(LC_ALL, "PORTUGUESE");

    float salario, salario_reajustado, valor_reajuste, reajuste;

    printf("Qual � o valor do sal�rio atual?\n ");
    printf("Sal�rio: ");
    scanf("%f", &salario);

    printf("\n");

    if (salario < 1000) {
        reajuste = 0.20;
    }
    else {
        if (salario <= 5000){
            reajuste = 0.15;
        }
        else{
            if (salario <= 10000){
                reajuste = 0.10;
            }
            else {
                reajuste = 0.05;
            }
        }
    }
valor_reajuste = salario * reajuste;
salario_reajustado = salario + valor_reajuste;

printf("O sal�rio atual � de R$ %.2f\n\n", salario);
printf("O percentual de reajuste � de %.f %%\n\n", reajuste*100);
printf("O valor do reajuste � de R$ %.2f\n\n", valor_reajuste);
printf("O sal�rio atualizado � de R$ %.2f\n\n", salario_reajustado);

if (valor_reajuste > 500){
    printf("Mais de R$ 500,00\n\n");
}

    system("pause");


}
