/* 
Fernanda Mendes Gomes (15/10/2021) // (18/10/2021)
Escreva um programa em C que leia dois inteiros, armazenando-os em variáveis. 
O programa deve comparar os endereços das variáveis e exibir o maior deles.
*/

#include <stdio.h>

int main(void) 
{
    // VARIAVEIS
    int a = 0, b = 0; 

    printf("Digite dois inteiros separados por espaço: "); // input do usuario: numeros
    scanf("%d %d", &a, &b);

    // comparar endereços e imprimir o maior
    if (&a > &b) 
    {
        printf("O maior endereco e o do numero %d: %p", a, &a);
    }
    else
    {
        printf("O maior endereco e o do numero %d: %p", b, &b);
    }
}