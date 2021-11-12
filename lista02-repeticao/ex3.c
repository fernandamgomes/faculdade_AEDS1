#include <stdio.h>
/*
Fernanda Mendes Gomes (04/09/21) // (05/09/21)
Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao mesmo  tempo),  por  2  e  por  5.  
Caso  algum  número  não  seja  divisível  por  nenhum  desses números mostre a mensagem “Número não é divisível pelos valores”. 
Apresente também ao final a quantidade de números divisíveis por 3 e 9, por 2 e por 5.
*/
int main (void) 
{
    // VARIAVEIS
    int numero = 0; 
    int div_tres_nove = 0;
    int div_dois = 0; 
    int div_cinco = 0; 

    for (int i = 0; i < 10; i = i + 1)
    {
        // pedir input:numero
        printf("Digite um numero: "); 
        scanf("%d", &numero);

        // inicializar teste, se o valor de teste nao for alterado, o numero nao e divisivel pelos valores
        int teste = 0; 
        
        // checar todas as condicoes, se o numero for divisivel o restante e 0 
        if ((numero % 3 == 0) && (numero % 9 == 0))
        {
            teste = 1;
            div_tres_nove++;
        }
        if (numero % 2 == 0)
        {
            teste = 1;
            div_dois++;
        }
        if (numero % 5 == 0)
        {
            teste = 1;
            div_cinco++; 
        }
        if (teste == 0)
        {
            printf("Numero nao e divisivel pelos valores\n"); 
        }
    }
    // imprimir totais
    printf("A quantidade de numeros divisiveis por 3 e 9 (simultaneamente) e: %d\n", div_tres_nove);
    printf("A quantidade de numeros divisiveis por 2 e: %d\n", div_dois);
    printf("A quantidade de numeros divisiveis por 5 e: %d\n", div_cinco);
    return 0; 
}