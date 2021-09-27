/* 
Fernanda Mendes Gomes (27/09/2021) // (27/09/2021)
Faça uma função recursiva que calcula a divisão usando subtrações sucessivas: 
    int divisao (int numerador, int denominador) 
Faça  um  programa  principal  que  leia  dois  números,  acione  a  função  e  exiba  o  resultado gerado. 
*/

#include <stdio.h>
int divisao (int numerador, int denominador);
int main(void) 
{
    // VARIAVEIS
    int num = 0; 
    int denom = 0; 

    // input do usuario: numerador
    printf("Digite um valor inteiro para o numerador: ");
    scanf("%d", &num);

    // input do usuario: denominador
    printf("Digite um valor inteiro diferente de zero para o denominador: ");
    scanf("%d", &denom);

    // imprimir o valor da divisão retornado pelo acionamento da funcao divisao 
    printf("O resultado da divisao e: %d", divisao(num, denom)); 
    return 0; 
}

// funcao recursiva que calcula a divisao usando subtrações sucessivas
int divisao (int numerador, int denominador)
{
    // VARIAVEIS
    static int div_result; 
    // base case - numerador e menor que o denominador
    if (numerador < denominador)
    {
        return div_result; 
    }
    // esgotar funcao com subtracoes sucessivas
    else
    {
        // atualizar o valor da divisao
        div_result = div_result + 1;
        return divisao((numerador - denominador), denominador);
    }
}