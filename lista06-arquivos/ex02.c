/*
Fernanda Mendes Gomes (26/10/2021) // (27/10/2021)
Crie um programa que receba uma linha de texto do usuário e grave o texto em um arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // VARIAVEIS
    FILE *saida = fopen("ex02.txt", "w");
    char texto = '\0';
    // input do usuario: linha de texto
    printf("Digite o texto (enter para completar):\n");
    // ler caractere por caractere e imprimir no arquivo de saida, ate detectar uma nova linha
    while ((texto = getchar()) != '\n')
    {
        fputc(texto, saida);
    }
    // fechar arquivo de saida e encerrar o programa
    fclose(saida);
    printf("Fim do programa\n");
    return 0;
}