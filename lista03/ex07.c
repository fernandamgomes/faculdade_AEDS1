/* 
Fernanda Mendes Gomes (17/09/2021) // (17/09/2021)
Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. 
A  função  deve  retornar  um  valor  lógico  (true  ou  false).  Faça  um  programa  que  lê  N 
números e para cada um deles exibe uma mensagem informando se ele é positivo ou não, 
dependendo se foi retornado verdadeiro ou falso pela função. 

*/

#include <stdio.h>
#include <stdbool.h>
bool positivo (int num); 
int main (void)
{
    // VARIAVEIS
    int num = 0; 
    int teste = 0; 

    // loop roda ate o input do usuario de teste ser 1 (encerra o programa)
    while (teste != 1)
    {
        num = 0;
        while (num == 0)
        {
            // input do usuario: numero != 0
            printf("Digite um numero inteiro diferente de 0: "); 
            scanf("%d", &num);  
        }

        // testar valores de retorno da funcao e imprimir resultado
        if (positivo(num) == true)
        {
            printf("O numero e positivo\n--------------------\n"); 
        }
        else if (positivo(num) == false)
        {
            printf("O numero e negativo\n--------------------\n"); 
        }
        // input do usuario: deseja ou nao testar outro numero 
        printf("Se desejar encerrar digite 1, se nao qualquer outro numero "); 
        scanf("%d", &teste); 
    }
    return 0; 
       
}
// Funcao que verifica se o numero e positivo ou negativo
bool positivo (int num)
{
    return(num>0); 
}
