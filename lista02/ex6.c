#include <stdio.h>
/*
Fernanda Mendes Gomes (04/09/21) // (04/09/21)
Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma: 
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
*/
int main (void) 
{
    int numero = 0; 
    float soma = 0;  
    // input de usuario: valor de N
    do
    {
        printf("Digite um numero inteiro positivo: "); 
        scanf("%d", &numero);
    } 
    while (numero <= 0);

    // loop de 1 ate (incluindo) numero fornecido pelo usuario, para executar a equacao fornecida
    for (int i = 1; i <= numero; i = i + 1) 
    {
        soma = soma + 1.0/i;
        // imprimir valores parciais de S
        printf (("Iteracao %d: %.2f\n"), i, soma); 
    }
    // imprimir o valor final da soma
    printf("O valor final de S e: %.2f", soma);
    return 0; 
}