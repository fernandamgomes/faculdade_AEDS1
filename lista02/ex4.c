#include <stdio.h>
float fact (int num);
float recur_main (int y);
/*
Fernanda Mendes Gomes (04/09/21) // (04/09/21)
Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E:
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!
*/
int main (void) 
{
    // pedir input do usuario: valor de N
    float numero = 0; 
    printf("Digite o numero: "); 
    scanf("%f", &numero);
    // chamar a funcao recursiva principal que calcula o valor de E
    float resultado = recur_main(3);
    // imprimir valor de E
    printf("O valor de E e: %.2f", resultado);
    return 0; 
}
// funcao recursiva que calcula o fatorial
float fact (int num) 
{
    // base case
    if (num == 1)
    {
        return 1.0; 
    }
    // esgotar a função
    else
    {
        return  num * fact(num - 1.0);
    }
}

float recur_main (int y)
{
    // base case
    if (y == 1)
    {
        return 2.0;
    }
    // esgotar a função
    else
    {
        return 1.0/fact(y) + recur_main(y-1); 
    } 
}

