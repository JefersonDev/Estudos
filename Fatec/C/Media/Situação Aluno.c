#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    //Declara��o das vari�veis
  float nota1, nota2, media, frequencia;

  printf("Insira a frequ�ncia do aluno (em porcentagem): ");
    scanf("%f", &frequencia);

    if ( frequencia >= 75 ) {

        printf("\n");
        printf("Insira a primeira nota do aluno: ");
        scanf("%f", &nota1);

        printf("\n");
        printf("Insira a segunda nota do aluno: ");
        scanf("%f", &nota2);

        media = ( nota1 + nota2 ) / 2;

        printf("\n");
        printf("M�DIA: %.1f\n", media);

        printf("\n");

        if ( media >= 6 ) {
            printf("APROVADO!!\n");
        }
        else {
            if ( media >= 3 ) {
                printf("Pode fazer SUBSTITUTIVA!!\n");
            }
            else {
                printf("REPROVADO!!\n");
            }
        }
    }
    else {
        printf("\n");
        printf("REPROVADO POR FALTAS!!\n");
    }


  printf("\n");

  system("pause");//pausa da tela somente para Windows
  return 0;//retorno da fun��o main
}
