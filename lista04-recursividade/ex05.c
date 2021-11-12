/* 
Fernanda Mendes Gomes (27/09/2021) // (27/09/2021)
Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0: 
            S = 1/1! + 1/2!  + 1/3! + ...+1 /N! 
double serie (int n) 
Faça um programa principal que leia um número, acione a função e exiba o resultado gerado.
*/

#include <stdio.h>
double serie (int n);
int main(void)
{
    // VARIAVEIS
    int num = 0; 

    // input do usuario: valor de n
    while (num <= 0)
    {
        printf("Digite um inteiro positivo maior que 0: "); 
        scanf("%d", &num); 
    }

    // acionar a funcao recursiva que calcula o valor de S e imprimir o resultado
    printf("O resultado da serie e: %lf", serie(num)); 
    return 0; 
}

// funcao recursiva que calcula o valor de S da serie
double serie (int n)
{
    // VARIAVEIS
    double fatorial = 1; 
    // base case
    if (n == 1)
    {
        return 1; 
    }
    // esgotar a funcao
    else 
    {
        // calcular o valor do fatorial de n
        for (int i = 1; i <= n; i++)
        {
            fatorial = fatorial * i; 
        }
        return 1/fatorial + serie(n-1);
    }
}