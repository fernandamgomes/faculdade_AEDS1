/*
Fernanda Mendes Gomes (04/11/2021) // (08/11/2021)
Faça um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando as posições de 0 a 9 em cada vetor).
Faça um outro procedimento que receba dois vetores preenchidos  e  gera  um  novo  vetor  com  os  elementos  desses  2  vetores  intercalados  de  tal forma que nas posições ímpares do novo vetor estejam os elementos do primeiro vetor e nas posições pares os elementos do segundo vetor recebido por parâmetro.
Faça um procedimento  que  receba  e  exiba  o  conteúdo  de  um  vetor.
Faça  um  programa  que  faça  as devidas declarações e acione os módulos para exemplificar o seu uso.
*/

#include <stdio.h>
// variavel global - numero de elementos do vetor
#define COMPRIMENTO 10

void preenchevetor(float vetor_um[], float vetor_dois[]);
void exibevetor(float vetor[], int tamanho);
void intercala_vetores(float vetor_um[], float vetor_dois[], float resultado[]);

int main(void)
{
    // VARIAVEIS - vetores de alocacao estatica
    float numeros_um[COMPRIMENTO];
    float numeros_dois[COMPRIMENTO];
    float vetor_intercalado[COMPRIMENTO * 2];
    // preencher e imprimir vetores
    preenchevetor(numeros_um, numeros_dois);
    exibevetor(numeros_um, COMPRIMENTO);
    exibevetor(numeros_dois, COMPRIMENTO);
    // intercalar vetores e imprimir vetor resultante
    intercala_vetores(numeros_um, numeros_dois, vetor_intercalado);
    exibevetor(vetor_intercalado, COMPRIMENTO * 2);
    return 0;
}
// procedimento que preenche dois vetores
void preenchevetor(float vetor_um[], float vetor_dois[])
{
    for (int vetor = 1; vetor <= 2; vetor++)
    {
        for (int i = 0; i < COMPRIMENTO; i++)
        {
            printf("Digite o numero[%d] do vetor %d: ", i, vetor);
            if (vetor == 1)
            {
                scanf("%f", &vetor_um[i]);
            }
            else
            {
                scanf("%f", &vetor_dois[i]);
            }
        }
        printf("\n-----------------------------------\n\n");
    }
}
// procedimento que imprime os valores de um vetor
void exibevetor(float vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%.2f || ", vetor[i]);
    }
    printf("\n\n-----------------------------------\n\n");
}
// procedimento que gera um novo vetor com os elementos de outros 2 vetores intercalados
void intercala_vetores(float vetor_um[], float vetor_dois[], float resultado[])
{
    // VARIAVEIS
    int impares = 0;
    int pares = 0;

    for (int i = 0; i < COMPRIMENTO * 2; i++)
    {
        if (i % 2 != 0)
        {
            resultado[i] = vetor_um[impares];
            impares++;
        }
        else
        {
            resultado[i] = vetor_dois[pares];
            pares++;
        }
    }
}