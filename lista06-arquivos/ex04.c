/*
Fernanda Mendes Gomes (26/10/2021) // (27/10/2021)
Implemente um programa que leia um arquivo texto e imprima, linha a linha, o seu conteúdo
na tela.
Imprima também a quantidade de linhas que este arquivo possui.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // VARIAVEIS
    FILE *entrada = fopen("ex04.txt", "r");
    char caractere = '\0';
    int num_linhas = 0;
    // se o arquivo for valido, prosseguir
    if (entrada != NULL)
    {
        // ler caractere por caractere ate o fim do arquivo
        while ((caractere = fgetc(entrada)) != EOF)
        {
            // imprimir caractere
            printf("%c", caractere);
            // se o caractere for uma nova linha, atualizar o numero de linhas
            if (caractere == '\n')
            {
                num_linhas = num_linhas + 1;
            }
        }
        // fechar arquivo de entrada e imprimir o numero de linhas e encerrar o programa
        fclose(entrada);
        printf("O numero de linhas e: %d", num_linhas);
        return 0;
    }
    // se o arquivo for invalido avisar o usuario e encerrar o programa
    else
    {
        printf("Erro ao tentar ler o arquivo\n");
        return 1;
    }
}