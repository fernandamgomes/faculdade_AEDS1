/* 
Fernanda Mendes Gomes (17/09/2021) // (17/09/2021)
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, calculado segundo a fórmula abaixo.  

S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3) 

Faça um programa que leia N e imprima o valor retornado pela função.
*/

#include <stdio.h>
#include <math.h>
float equacao(int N); 
int main (void)
{
    // VARIAVEIS
    int num = 0; 
    // input do usuario: inteiro positivo
    while (num <= 0)
    {
        printf("Digite um inteiro positivo: "); 
        scanf("%d", &num); 
    }
    // chamar funcao que retorna o valor da equacao e imprimir
    printf("%.5f\n", equacao(num)); 
    return 0; 
}

// funcao recursiva que calcula o valor de S
float equacao(int N) 
{
    // base case
    if (N == 1)
    {
        return 0.5; 
    }
    // esgotar funcao 
    else
    {
        return equacao(N - 1) + ((pow(N, 2.0) + 1)/ (N + 3)); 
    }
}