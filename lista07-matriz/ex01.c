/*
Fernanda Mendes Gomes (04/11/2021) // (08/11/2021)
Faça um procedimento que receba e preencha um vetor com as notas de uma turma de 10 alunos.
Faça um outro procedimento que receba um vetor preenchido com as notas, calcule a média da turma e conte quantos alunos obtiveram nota acima da média.
Esse procedimento deve exibir a média e o resultado da contagem.
Faça um programa que declare as devidas variáveis e acione os procedimentos.
*/

#include <stdio.h>

#define COMPRIMENTO 10

void preenchevetor(float vetor[]);
void media(float vetor[]);

int main(void)
{
    // vetor - alocacao estatica
    float notas[COMPRIMENTO];
    // chamar procedimentos
    preenchevetor(notas);
    media(notas);
    return 0;
}
// procedimento que preenche o vetor com a nota dos 10 alunos
void preenchevetor(float vetor[])
{
    for (int i = 0; i < COMPRIMENTO; i++)
    {
        printf("Digite a nota do aluno: ");
        scanf("%f", &vetor[i]);
    }
}
// procedimento que calcula e imprime a media de notas e qtos alunos tiraram notas acima da media da turma
void media(float vetor[])
{
    // VARIAVEIS
    float media = 0;
    int acima_media = 0;
    // fazer o calculo da media da turma
    for (int i = 0; i < COMPRIMENTO; i++)
    {
        media = media + vetor[i];
    }
    media = media / COMPRIMENTO;
    // contar quantos alunos tiraram notas acima da media da turma
    for (int i = 0; i < COMPRIMENTO; i++)
    {
        if (vetor[i] > media)
        {
            acima_media = acima_media + 1;
        }
    }
    // imprimir resultados
    printf("A media da turma e: %.2f\nO numero de alunos com nota acima da media da turma e: %d\n", media, acima_media);
}