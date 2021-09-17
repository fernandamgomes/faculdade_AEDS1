/* 
Fernanda Mendes Gomes (17/09/2021) // (17/09/2021)
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, calculado segundo a fórmula abaixo.  
    S = 1 + 1/1! + 1/2!  + 1/3! + ...+1 /N! 
Faça um programa que leia N e imprima o valor retornado pela função.
*/

#include <stdio.h>
float equacao (int num_positivo); 
float fatorial (int num); 
int main(void)
{
    // VARIAVEIS
    int N = 0; 
    // forcar o usuario a fornecer um numero inteiro positivo
    while (N<=0)
    {
        // input do usuario: numero inteiro positivo
        printf("Digite um valor inteiro positivo "); 
        scanf("%d", &N); 
        // chamar funcao que calcula S
        printf("%.5f", equacao(N)); 
    }
    return 0; 
}

// funcao que calcula 3o fatorial
float fatorial (int num)
{
    // base case
    if (num==1)
    {
        return 1.0; 
    }
    // esgotar funcao 
    else
    {
        return num * fatorial(num - 1.0); 
    }

}
// funcao que calcula S 
float equacao (int num_positivo)
{
    // base case
    if (num_positivo == 1)
    {
        return 2.0; 
    }
    // esgotar funcao 
    else
    {
        return 1.0/fatorial(num_positivo) + equacao (num_positivo - 1); 
    }
}

