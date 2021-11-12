/*
Fernanda Mendes Gomes (04/11/2021) // (08/11/2021)
Faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na tela a soma dos  elementos  abaixo  da  diagonal  principal.
Mostre  na  tela  os  elementos  da  diagonal principal também.
*/

#include <stdio.h>
// variavel global - tamanho da matriz
#define N_LINHAS 4
#define N_COLUNAS 4

int main(void)
{
    // VARIAVEIS
    // criacao de uma matriz com alocacao estatica
    float matriz[N_LINHAS][N_COLUNAS]; 
    float soma_principal = 0;
    float soma = 0;
    // PREENCHER MATRIZ
    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        for (int coluna = 0; coluna < N_COLUNAS; coluna++)
        {
            printf("Valor armazenado na posicao [%d][%d] da matriz: ", linha, coluna);
            scanf("%f", &matriz[linha][coluna]);
        }
    }
    // SOMA DIAGONAL PRINCIPAL
    printf("\n---------------------------------\n\nDiagonal Principal:\n");
    for (int num = 0; num < N_LINHAS; num++)
    {
        printf("%.2f || ", matriz[num][num]);
        soma_principal = soma_principal + matriz[num][num];
    }
    printf("\nA soma da diagonal principal e: %.2f\n", soma_principal);
    // ELEMENTOS ABAIXO DA DIAGONAL PRINCIPAL
    for (int num = 0; num < N_LINHAS - 1; num++)
    {
        soma = soma + matriz[num + 1][num];
    }
    printf("A soma dos elementos abaixo da diagonal principal e: %.2f\n", soma);
    return 0;
}