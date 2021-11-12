#include <stdio.h>
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
Faça um algoritmo que leia 2 números inteiros e faça sua adição. 
Se o resultado for maior ou  igual  a  10,  some  5  a  este  número.  Caso  contrário  some  7  a  ele.  Imprima  o  resultado final
*/
int main(void) 
{
    // VARIAVEIS
    int num1 = 0; 
    int num2 = 0; 

    // pedir input do usuário
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    // fazer a adição dos numeros
    int soma = num1 + num2;

    // testar casos e gerar resultado final
    if (soma >= 10) 
    {
        soma = soma + 5; 
    }
    else 
    {
        soma = soma + 7; 
    }

    // imprimir resultado final
    printf("%d", soma); 
    return 0;
}