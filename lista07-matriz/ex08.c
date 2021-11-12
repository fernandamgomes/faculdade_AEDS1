/*
Fernanda Mendes Gomes (05/11/2021) // (08/11/2021)
Escrever um procedimento que preenche uma matriz M(10,10) e a escreve.
Faça outros procedimentos que recebam uma matriz preenchida, realize as trocas indicadas a seguir (um procedimento para cada uma delas) e exiba a matriz resultante da troca:
a) a linha 2 com a linha 8
b) a coluna 4 com a coluna 10
c) a diagonal principal com a diagonal secundária
d) a linha 5 com a coluna 10.
*/
#include <stdio.h>
#include <stdlib.h>
// definir o tamanho da matriz - variaveis globais
#define N_LINHAS 10
#define N_COLUNAS 10
void preenche_matriz(int matriz[N_LINHAS][N_COLUNAS]);
void exibe_matriz(int matriz[N_LINHAS][N_COLUNAS]);
void swap_linha(int matriz[N_LINHAS][N_COLUNAS], int linha_um, int linha_dois);
void swap_coluna(int matriz[N_LINHAS][N_COLUNAS], int coluna_um, int coluna_dois);
void swap_diagonais(int matriz[N_LINHAS][N_COLUNAS]);
void swap_linha_coluna(int matriz[N_LINHAS][N_COLUNAS], int linha, int coluna);

int main(void)
{
    // criacao da matriz - alocacao estatica
    int matriz[N_LINHAS][N_COLUNAS];
    // chamar procedimentos e imprimir resultados
    preenche_matriz(matriz);
    printf("\n-----------------------------------\n\nMatriz preenchida:\n");
    exibe_matriz(matriz);
    printf("Troca da linha 2 com a linha 8\n");
    swap_linha(matriz, 1, 7);
    exibe_matriz(matriz);
    printf("Troca da coluna 4 com a coluna 10\n");
    swap_coluna(matriz, 3, 9);
    exibe_matriz(matriz);
    printf("Troca das diagonais\n");
    swap_diagonais(matriz);
    exibe_matriz(matriz);
    printf("Troca da linha 5 com a coluna 10\n");
    swap_linha_coluna(matriz, 4, 9);
    exibe_matriz(matriz);

    return 0; 
}
// procedimento que preenche a matriz a partir dos inputs do usuario
void preenche_matriz(int matriz[N_LINHAS][N_COLUNAS])
{
    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        for (int coluna = 0; coluna < N_COLUNAS; coluna++)
        {
            printf("Valor armazenado na posicao [%d][%d] da matriz: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}
// procedimento que imprime a matriz na tela
void exibe_matriz(int matriz[N_LINHAS][N_COLUNAS])
{
    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        for (int coluna = 0; coluna < N_COLUNAS; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n-----------------------------------\n\n");
}
// procedimento que troca os valores de duas linhas 
void swap_linha(int matriz[N_LINHAS][N_COLUNAS], int linha_um, int linha_dois)
{
    int tmp = 0;
    for (int coluna = 0; coluna < N_COLUNAS; coluna++)
    {
        tmp = matriz[linha_um][coluna];
        matriz[linha_um][coluna] = matriz[linha_dois][coluna];
        matriz[linha_dois][coluna] = tmp;
    }
}
// procedimento que troca os valores de duas colunas
void swap_coluna(int matriz[N_LINHAS][N_COLUNAS], int coluna_um, int coluna_dois)
{
    int tmp = 0;
    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        tmp = matriz[linha][coluna_um];
        matriz[linha][coluna_um] = matriz[linha][coluna_dois];
        matriz[linha][coluna_dois] = tmp;
    }
}
// procedimento que troca os valores das diagonais primaria e secundaria
void swap_diagonais(int matriz[N_LINHAS][N_COLUNAS])
{
    int tmp = 0;
    for (int num = 0; num < N_LINHAS; num++)
    {
        tmp = matriz[num][num];
        matriz[num][num] = matriz[num][N_COLUNAS - 1 - num];
        matriz[num][N_COLUNAS - 1 - num] = tmp;
    }
}
// procedimento que troca os valores de uma linha com os valores de uma coluna
void swap_linha_coluna(int matriz[N_LINHAS][N_COLUNAS], int linha, int coluna)
{
    int tmp = 0;
    for (int num = 0; num < N_LINHAS; num++)
    {
        tmp = matriz[linha][num];
        matriz[linha][num] = matriz[num][coluna];
        matriz[num][coluna] = tmp;
    }
}