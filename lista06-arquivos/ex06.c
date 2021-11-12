/*
Fernanda Mendes Gomes (18/10/2021) // (27/10/2021)
Faça um programa que solicite ao usuário um número, em seguida, imprima na tela todos os seus divisores. Salve em um arquivo texto a soma total desses divisores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // VARIAVEIS
    int num = 0;
    int soma_div = 0;
    FILE *saida = fopen("ex06.txt", "w");
    // input do usuario: numero
    printf("Digite um inteiro: ");
    scanf("%d", &num);

    // testar divisao de 1 ate o numero
    for (int divisores = 1; divisores <= num; divisores++)
    {
        // se o resto for zero imprimir o divisor e atualizar o valor da soma dos divisores
        if (num % divisores == 0)
        {
            printf("%d || ", divisores);
            soma_div = soma_div + divisores;
        }
    }
    // imprimir a soma total de divisores no arquivo de saida e fechar arquivo
    fprintf(saida, "A soma dos divisores e: %d\n", soma_div);
    fclose(saida);
    return 0;
}