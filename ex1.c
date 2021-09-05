
#include <stdio.h>
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
Dado dois números imprimir somente o maior deles
*/
int main(void) 
{
    // VARIAVEIS
    float num1 = 0.0; 
    float num2 = 0.0; 

    // pedir input do usuário
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    // comparar inputs e imprimir o maior, se forem iguais imprimir que sao iguais
    if (num1 > num2)
    {
        printf("%.2f", num1);
    }
    else if (num1 < num2)
    {
        printf("%.2f", num1);
    }
    else
    {
        printf("Os numeros sao iguais");
    }
    
    return 0;
}