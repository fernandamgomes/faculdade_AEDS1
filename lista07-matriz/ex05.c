/*
Fernanda Mendes Gomes (04/11/2021) // (08/11/2021)
Faça um procedimento que preencha uma matriz M 5 x 5.
Faça uma função que receba uma matriz preenchida, calcule e retorne cada uma das somas a seguir (uma função para cada letra abaixo):
a) da linha 4 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz.
*/

#include <stdio.h>
// variavel global - tamanho da matriz
#define N_LINHAS 5
#define N_COLUNAS 5
// procedimento que preenche uma matriz
void preenche_matriz(float matriz[N_LINHAS][N_COLUNAS])
{
    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        for (int coluna = 0; coluna < N_COLUNAS; coluna++)
        {
            printf("Valor armazenado na posicao [%d][%d] da matriz: ", linha, coluna);
            scanf("%f", &matriz[linha][coluna]);
        }
    }
}
// funcao que calcula e retorna a soma dos elementos de determinada linha
float soma_linha(float matriz[N_LINHAS][N_COLUNAS], int linha)
{
    float soma = 0;
    for (int coluna = 0; coluna < N_COLUNAS; coluna++)
    {
        soma = soma + matriz[linha][coluna];
    }
    return soma;
}
// funcao que calcula e retorna a soma dos elementos de determinada coluna
float soma_coluna(float matriz[N_LINHAS][N_COLUNAS], int coluna)
{
    float soma = 0;
    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        soma = soma + matriz[linha][coluna];
    }
    return soma;
}
// funcao que calcula e retorna a soma dos elementos da diagonal principal
float soma_diagonal(float matriz[N_LINHAS][N_COLUNAS])
{
    float soma = 0;
    for (int num = 0; num < N_LINHAS; num++)
    {
        soma = soma + matriz[num][num];
    }
    return soma;
}
// funcao que calcula e retorna a soma dos elementos da diagonal secundaria
float soma_diagonal_sec(float matriz[N_LINHAS][N_COLUNAS])
{
    float soma = 0;
    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        soma = soma + matriz[linha][N_LINHAS - 1 - linha];
    }
    return soma;
}
// funcao que calcula e retorna a soma de todos os elementos de uma matriz
float soma_total(float matriz[N_LINHAS][N_COLUNAS])
{
    float soma = 0;
    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        for (int coluna = 0; coluna < N_COLUNAS; coluna++)
        {
            soma = soma + matriz[linha][coluna];
        }
    }
    return soma;
}

int main(void)
{
    // declarar a matriz, alocacao estatica
    float matriz[N_LINHAS][N_COLUNAS];
    // chamar funcoes e procedimentos e imprimir resultados
    preenche_matriz(matriz);
    printf("\n----------------------------------\n\n");
    printf("A soma da linha 04 e: %.2f\n", soma_linha(matriz, 3));
    printf("A soma da coluna 02 e: %.2f\n", soma_coluna(matriz, 1));
    printf("A soma da diagonal principal e: %.2f\n", soma_diagonal(matriz));
    printf("A soma da diagonal secundaria e: %.2f\n", soma_diagonal_sec(matriz));
    printf("A soma de todos os elementos da matriz e: %.2f\n", soma_total(matriz));
    return 0;
}
