/* 
Fernanda Mendes Gomes (16/09/2021) // (20/09/2021)
Faça um procedimento que recebe 3 valores inteiros por parâmetro e os  exiba em ordem crescente.  
Faça  um  programa  que  leia  N  conjuntos  de  3  valores  e  acione o  procedimento para cada conjunto. (N deve ser lido do teclado)
*/
#include <stdio.h>
void ordem_int (int num[]); 
int main (void) 
{
    // VARIAVEIS
    int num[3]; 
    int num_conjuntos = 0; 

    // input do usuario: numero de conjuntos
    printf("Quantos conjuntos deseja ler: "); 
    scanf("%d", &num_conjuntos); 
    printf("\n"); 

    // loop vai rodar para cada conjunto
    for (int j = 0; j < num_conjuntos; j = j + 1)
    {
        // pedir o input do usuario: 03 valores do conjunto --> salvar valores
        for (int i = 0; i < 3; i = i + 1)
        {
            printf("Digite o numero %d: ", (i+1)); 
            scanf("%d", &num[i]); 
        }
        // chamar a funcao que coloca o conjunto em ordem 
        ordem_int(num); 
        // proximo conjunto
    }
    
}

// funcao que ordena e exibe os numeros recebidos
void ordem_int (int num[]) 
{
    // VARIAVEIS
    int temp = 0; 
    // loop pelos valores
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // se o valor i for menor que o j, trocar os valores para ordenar os numeros
            if (num[i] < num[j])
            {
                // salvar o valor do array em uma variavel temporaria para nao perde-lo e depois trocar valores
                temp =  num[i]; 
                num[i] =num[j]; 
                num[j] = temp; 
            }
        }
    }
    // imprimir valores em ordem 
    printf("Valores em ordem crescente: %d / %d / %d\n---------------\n\n", num[0], num[1], num[2]); 
}



