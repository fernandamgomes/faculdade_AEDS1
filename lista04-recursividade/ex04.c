/* 
Fernanda Mendes Gomes (27/09/2021) // (27/09/2021)
Faça uma função recursiva que calcula o resto da divisão usando subtrações sucessivas: 
    int resto (int numerador, int denominador) 
Faça  um  programa  principal  que  leia  dois  números,  acione  a  função  e  exiba  o  resultado gerado.
*/

#include <stdio.h>
int resto (int numerador, int denominador); 
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

    // imprimir o resultado do resto retornado pelo acionamento da funcao resto
    printf("O resto da divisao e: %d", resto(num, denom)); 
    return 0; 
}

//  funcao recursiva que calcula o resto da divisao usando subtraçoes sucessivas
int resto(int numerador, int denominador)
{
    // base case - numerador e menor que o denominador
    if (numerador < denominador)
    {
        return numerador; 
    }
    // esgotar funcao com subtracoes sucessivas
    else
    {
        return resto((numerador - denominador), denominador);
    }
}