/*
Fernanda Mendes Gomes (04/11/2021) // (08/11/2021)
Em uma cidade, sabe-se hipoteticamente que, em janeiro de 2021, não ocorreu temperatura inferior a 15°C, nem superior a 40°C.
Faça um programa que armazene as temperaturas de cada dia de janeiro em um vetor (de 31 posições), calcule e imprima:
• A menor e a maior temperatura ocorrida;
• A temperatura média;
• O número de dias nos quais a temperatura foi inferior a temperatura média.
*/

#include <stdio.h>
// variavel global - numero de elementos do vetor
#define COMPRIMENTO 31

int main(void)
{
    // VARIAVEIS
    float menor = 99999;
    float maior = 0;
    float temperatura[COMPRIMENTO];
    float media = 0;
    int abaixo_media = 0;

    for (int dia = 1; dia <= COMPRIMENTO; dia++)
    {
        // input do usuario: temperatura em determinado dia
        printf("Qual foi a temperatura no dia %d: ", dia);
        scanf("%f", &temperatura[dia - 1]);
        // analisar input: maior e maior temperatura
        if (temperatura[dia - 1] > maior)
        {
            maior = temperatura[dia - 1];
        }
        if (temperatura[dia - 1] < menor)
        {
            menor = temperatura[dia - 1];
        }
        // atualizar valor da media
        media = media + temperatura[dia - 1];
    }
    // calculo da media
    media = media / COMPRIMENTO;
    // calcular o numero de dias nos quais a temperatura foi inferior a temperatura media
    for (int i = 0; i <= COMPRIMENTO; i++)
    {
        if (temperatura[i] < media)
        {
            abaixo_media++;
        }
    }
    // imprimir resultados
    printf("A maior temperatura foi: %.2f\n", maior);
    printf("A menor temperatura foi: %.2f\n", menor);
    printf("A temperatura media foi: %.2f\n", media);
    printf("O numero de dias nos quais a temperatura foi inferior a temperatura media foi: %.2f\n", abaixo_media);
    return 0;
}