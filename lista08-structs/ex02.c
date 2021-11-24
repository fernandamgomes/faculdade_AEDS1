/*
Fernanda Mendes Gomes (22/11/2021) // (22/11/2021)
Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone e preço
de um eletrodoméstico.
Desenvolver um algoritmo que permita exibir qual foi a média dos preços cadastrados e uma
relação contendo o nome e o telefone das lojas cujo preço estava
abaixo da média.
*/

#include <stdio.h>

#define TAMANHO 15

typedef struct Registro
{
    char nomeLoja[100];
    int tel;
    float preco;
} Registro;

// procedimento que preenche as estruturas de registro do eletrodomestico
void preencheRegistro(Registro registros[])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("\nDADOS DO ELETRODOMESTICO: \n");
        printf("Nome da Loja: ");
        scanf(" %[^\n]", registros[i].nomeLoja);
        printf("Telefone: ");
        scanf("%d", &registros[i].tel);
        printf("Preco: ");
        scanf("%f", &registros[i].preco);
    }
}

// funcao que calcula e retorna a media do preco do eletrodomestico em diferentes lojas
float media(Registro registros[])
{
    float mediaPrecos = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        mediaPrecos = mediaPrecos + registros[i].preco;
    }
    mediaPrecos = mediaPrecos / TAMANHO;
    return (mediaPrecos);
}

// procedimento que identifica e imprime as lojas onde o preco do eletrodomestico esta abaixo da media
void abaixoMedia(Registro registros[], float media)
{
    printf("LOJAS COM PRECO ABAIXO DA MEDIA:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        if (registros[i].preco < media)
        {
            printf("Nome da Loja: %s\n", registros[i].nomeLoja);
            printf("Telefone: %.d\n\n", registros[i].tel);
        }
    }
}

int main(void)
{
    Registro eletrodomestico[TAMANHO];
    // chamar procedimento que preenche o registro do eletrodomestico
    preencheRegistro(eletrodomestico);
    // calcular e imprimir media
    float mediaPreco = media(eletrodomestico);
    printf("\n--------------------------\n\nA media de precos e: %.2f\n--------------------------\n\n", mediaPreco);
    // chamar procedimento - lojas com preco abaixo da media
    abaixoMedia(eletrodomestico, mediaPreco);
    return 0;
}
