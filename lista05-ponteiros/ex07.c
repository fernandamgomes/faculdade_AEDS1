/* 
Fernanda Mendes Gomes (17/10/2021) // (17/10/2021)

Faça um  programa  que  leia  dois  valores  inteiros  e  chame  um procedimento  que  receba  estes  2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável.
Escreva o conteúdo das 2 variáveis na telano programa principal.
*/

#include <stdio.h>

void ordem (int *num1, int *num2);
int main(void) 
{
    //VARIAVEIS 
    int num1 = 0;
    int num2 = 0; 

    // input do usuario
    printf("Declare dois inteiros separados por espaco: ");
    scanf("%d %d", &num1, &num2);

    ordem(&num1, &num2); // chamar procedimento que ordena os valores

    printf("Maior valor: %d\nMenor valor: %d\n", num1, num2); // imprimir valores ordenados
    return 0; 
}

void ordem (int *num1, int *num2) 
{
    if (*num1 < *num2) // se o primeiro numero for menor que o segundo trocar os valores
    {
        int temp = *num1; 
        *num1 = *num2; 
        *num2 = temp; 
    }
}