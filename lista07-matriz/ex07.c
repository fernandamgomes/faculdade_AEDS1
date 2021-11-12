/*
Fernanda Mendes Gomes (05/11/2021) // (08/11/2021)
Faça um procedimento que preencha 2 matrizes, A 4 x 6 e B 4 x 6. Faça uma função para
cada uma das situações a seguir, que recebe duas matrizes preenchidas, calcula e retorna as
matrizes indicadas :
a) uma matriz S que seja a soma de A e B.
b) uma matriz D que seja a diferença de A e B. (A - B)
*/

#include <stdio.h>
#include <stdlib.h>
// definir tamanho da matriz - variavel global
#define N_LINHAS 2
#define N_COLUNAS 3

void preenche_matriz(int matriz_um[N_LINHAS][N_COLUNAS], int matriz_dois[N_LINHAS][N_COLUNAS]);
int **cria_matriz(int **matriz);
int **diferenca(int matriz_um[N_LINHAS][N_COLUNAS], int matriz_dois[N_LINHAS][N_COLUNAS]);
int **soma(int matriz_um[N_LINHAS][N_COLUNAS], int matriz_dois[N_LINHAS][N_COLUNAS]);
void exibe_matriz(int **matriz);
void destroi_matriz(int **matriz);

int main(void)
{
    // VARIAVEIS
    // matriz A e B alocacao estatica
    int matriz_A[N_LINHAS][N_COLUNAS];
    int matriz_B[N_LINHAS][N_COLUNAS];
    // soma e diferenca - matrizes de alocacao dinamica
    int **diferenca_matriz = NULL;
    int **soma_matriz = NULL; 

    // chamar funcoes e procedimentos para preencher a matriz e fazer a soma e a diferenca entre matrizes
    preenche_matriz(matriz_A, matriz_B); 
    diferenca_matriz = diferenca(matriz_A, matriz_B); 
    soma_matriz = soma(matriz_A, matriz_B); 
    // imprimir resultados
    printf("Soma de A+B\n");
    exibe_matriz(soma_matriz);
    printf("Diferenca de A-B\n");
    exibe_matriz(diferenca_matriz);
    // liberar memoria alocada
    destroi_matriz(soma_matriz);
    destroi_matriz(diferenca_matriz);
    return 0;
}
// procedimento que preenche duas matrizes
void preenche_matriz(int matriz_um[N_LINHAS][N_COLUNAS], int matriz_dois[N_LINHAS][N_COLUNAS])
{
    for (int matriz = 1; matriz <= 2; matriz++)
    {
        for (int linha = 0; linha < N_LINHAS; linha++)
        {
            for (int coluna = 0; coluna < N_COLUNAS; coluna++)
            {
                printf("Valor armazenado na posicao [%d][%d] da matriz %d: ", linha, coluna, matriz);
                if (matriz == 1)
                {
                    scanf("%d", &matriz_um[linha][coluna]);
                }
                else
                {
                    scanf("%d", &matriz_dois[linha][coluna]);
                }
            }
        }
        printf("\n-----------------------------------\n\n");
    }
}
// funcao que faz a alocacao dinamica de memoria para a criacao de uma matriz 
int **cria_matriz(int **matriz)
{
    matriz = malloc(N_LINHAS * sizeof(int *));
    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        matriz[linha] = malloc(N_COLUNAS * sizeof(int));
    }
    return (matriz);
}
// funcao que faz a diferenca entre duas matrizes e retorna uma matriz resultante que foi criada usando alocacao de memoria dinamica
int **diferenca(int matriz_um[N_LINHAS][N_COLUNAS], int matriz_dois[N_LINHAS][N_COLUNAS])
{
    int **diferenca = NULL;
    diferenca = cria_matriz(diferenca);

    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        for (int coluna = 0; coluna < N_COLUNAS; coluna++)
        {
            diferenca[linha][coluna] = matriz_um[linha][coluna] - matriz_dois[linha][coluna];
        }
    }
    return (diferenca);
}
// funcao que faz a soma entre duas matrizes e retorna uma matriz resultante que foi criada usando alocacao de memoria dinamica
int **soma(int matriz_um[N_LINHAS][N_COLUNAS], int matriz_dois[N_LINHAS][N_COLUNAS])
{
    int **soma = NULL;
    soma = cria_matriz(soma);

    for (int linha = 0; linha < N_LINHAS; linha++)
    {
        for (int coluna = 0; coluna < N_COLUNAS; coluna++)
        {
            soma[linha][coluna] = matriz_um[linha][coluna] + matriz_dois[linha][coluna];
        }
    }
    return (soma);
}
// procedimento que imprime os valores da matriz
void exibe_matriz(int **matriz)
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
// procedimento que libera  a memoria alocada dinamicamente para a criacao de uma matriz
void destroi_matriz(int **matriz)
{
    for (int i = 0; i < N_LINHAS; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}