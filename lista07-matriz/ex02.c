/*
Fernanda Mendes Gomes (04/11/2021) // (08/11/2021)
Faça um procedimento que preencha um vetor X de 10 elementos.
A seguir faça uma função que receba um vetor preenchido, teste e copie todos os valores negativos deste vetor para um novo vetor (sem deixar elementos vazios entre os valores copiados), retornando este vetor como resultado.
Faça um procedimento que recebe e exibe o conteúdo de um vetor.
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar o seu uso.
*/

#include <stdio.h>
#include <stdlib.h>

#define COMPRIMENTO 10

void preenchevetor(int vetor[]);
void exibevetor(int *vetor, int tamanho);
int *negativos(int vetor[], int *quant_neg);

int main(void)
{
    // VARIAVEIS
    // vetor X de 10 elementos - alocacao estatica
    int numeros[COMPRIMENTO];
    int *num_negativo = NULL;
    int tamanho = 0; 
    // chamar procedimentos: preenche o vetor e imprime o vetor
    preenchevetor(numeros);
    exibevetor(numeros, COMPRIMENTO);
    // chamar funcao que preenche um vetor de alocacao dinamica com os valores negativos encontrados no vetor numeros
    num_negativo = negativos(numeros, &tamanho);
    // imprimir o vetor de numeros negativos
    exibevetor(num_negativo, tamanho);
    // liberar memoria alocada dinamicamente
    free(num_negativo);
    return 0;
}
// procedimento que preenche um vetor
void preenchevetor(int vetor[])
{
    for (int i = 0; i < COMPRIMENTO; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\n-----------------------------------\n\n");
}
// procedimento que imprime um vetor
void exibevetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d || ", vetor[i]);
    }
    printf("\n\n-----------------------------------\n\n");
}
// funcao que aloca memoria dinamicamente para a criacao de um vetor e o retorna. A memoria alocada varia de acordo com o numero de valores negativos encontrados em um outro vetor fornecido
int *negativos(int vetor[], int *quant_neg)
{
    int *negativo = NULL;
    for (int i = 0; i < COMPRIMENTO; i++)
    {
        if (vetor[i] < 0)
        {
            if (negativo == NULL)
            {
                negativo = malloc(sizeof(int));
            }
            else
            {
                negativo = realloc(negativo, sizeof(int));
            }
            negativo[(*quant_neg)] = vetor[i];
            (*quant_neg)++;
        }
    }
    return (negativo);
}