/* 
Fernanda Mendes Gomes (17/10/2021) // (20/10/2021)

Faça  um  programa  que  leia  três  valores  inteiros  e  chame  uma  função  que  receba  estes  3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável.
A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. 
Exibir os valores ordenados na tela no programa principal.
*/

#include <stdio.h>
int ordem (int *num1, int *num2, int *num3);
void swap (int *num1, int *num2);
int main(void) 
{
    //VARIAVEIS
    int num1 = 0;
    int num2 = 0;
    int num3 = 0; 
    // input do usuario
    printf("Declare tres inteiros separados por espaco: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    ordem(&num1, &num2, &num3); // chamar funcao que ordena valores

    printf("Os valores ordenados sao:\n - Numero 1: %d\n - Numero 2: %d\n - Numero 3: %d\n", num1, num2, num3); // imprimir valores ordenados
}

int ordem (int *num1, int *num2, int *num3) 
{
    // se os valores forem iguais retornar 0 e encerrar a funcao
    if ((*num1 == *num2) && (*num2 == *num3))
    {
        return 0;
    }
    // se nao forem iguais, comparar os tres valores, se a condicao for verdadeira, chamar procedimento que realiza a troca 
    if (*num1 > *num2)
    {
        swap(num1, num2);
    }
    if (*num1 > *num3)
    {
        swap(num1, num3);
    }
    if (*num2 > *num3)
    {
        swap(num2, num3);
    }
    // retornar 1
    return 1; 
}

void swap (int *num1, int *num2)
{
    int temp = 0;
    // trocar ordem dos valores
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}