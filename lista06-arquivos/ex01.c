/*
Fernanda Mendes Gomes (18/10/2021) // (27/10/2021)
Crie  um  programa  que  escreva  de  1  até  10  em  um  arquivo,  armazenando  um  número  por linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // criar o arquivo de saida
    FILE *saida = fopen("ex01.txt", "w");

    // loop de 1 a 10, a cada iteracao imprimir o numero no arquivo
    for (int num = 1; num <= 10; num++)
    {
        fprintf(saida, "%d\n", num);
    }
    // fechar o arquivo de saida e encerrar programa
    fclose(saida); 
    printf("Fim do programa\n");
    return 0;
}