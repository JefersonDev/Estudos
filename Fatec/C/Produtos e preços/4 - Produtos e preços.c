#include <stdio.h>
#include <stdlib.h>
#include <locale.h>>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nomeProduto[5][30];
    float precoProduto[5], soma, media;
    int quantidade1, quantidade2, i;

    soma = 0;
    media = 0;
    quantidade1 = 0;
    quantidade2 = 0;


    for(i = 0; i <= 4; i++){
        printf("\nDigite o nome do produto: ");
        scanf("%s", &nomeProduto[i]);
        setbuf(stdin, NULL);

        printf("digite o pre�o do produto: R$");
        scanf("%f", &precoProduto[i]);
        setbuf(stdin, NULL);
    }


    for(i = 0; i <= 4; i++){
        if(precoProduto[i] < 50){
            quantidade1 = quantidade1 + 1;
        }
    }

    printf("\nA quantidade de produtos com pre�o menor que R$50,00 �: %d", quantidade1);
    printf("\n\nO nome dos Produtos com pre�o entre R$50,00 a R$100,00 �: ");

    for(i = 0; i <= 4; i++){
        if(precoProduto[i] >= 50 && precoProduto[i] <= 100){
            printf("\n%s", nomeProduto[i]);
        }
    }


    for(i = 0; i <= 4; i++){
        if(precoProduto[i] > 100){
            quantidade2 = quantidade2 + 1;
            soma = soma + precoProduto[i];
        }
    }

    media = soma / quantidade2;

    printf("\n\nA m�dia dos produtos acima de R$100,00 �: R$%5.2f\n\n", media);



    return 0;
}
