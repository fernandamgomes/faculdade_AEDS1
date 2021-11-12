/*
Fernanda Mendes Gomes (26/10/2021) // (27/10/2021)
Escreva  um  programa  que  concatene  o  conteúdo  de  dois  arquivos.  O  conteúdo  dos  dois
arquivos deverá ser adicionado em um terceiro arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // VARIAVEIS
    FILE *entrada01 = fopen("ex05-01.txt", "r");
    FILE *entrada02 = fopen("ex05-02.txt", "r");
    FILE *saida = fopen("ex05-saida.txt", "w");
    char caractere = '\0';
    // se os arquivos forem validos, ler arquivos
    if ((entrada01 != NULL) && (entrada02 != NULL))
    {
        // ler caractere por caractere ate o fim do arquivo e imprimir no arquivo de saida
        while ((caractere = fgetc(entrada01)) != EOF)
        {
            fputc(caractere, saida);
        }
        fclose(saida);
        fclose(entrada01);
        // abrir novamente o arquivo de saida para acrescentar informacoes
        saida = fopen("ex05-saida.txt", "a");
        // ler caractere por caractere ate o fim do arquivo e imprimir no arquivo de saida
        while ((caractere = fgetc(entrada02)) != EOF)
        {
            fputc(caractere, saida);
        }
        // fechar arquivos e encerrar programa
        fclose(saida);
        fclose(entrada02);
        printf("Fim do programa\n");
        return 0;
    }
    // se o arquivo for invalido avisar o usuario e encerrar o programa
    else
    {
        printf("Erro ao tentar ler arquivo\n");
        return 1;
    }
}