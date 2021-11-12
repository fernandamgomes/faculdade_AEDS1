/*
Fernanda Mendes Gomes (26/10/2021) // (27/10/2021)
Implemente um programa que abra o arquivo texto (criado no exercício anterior) e conte a quantidade de caracteres ‘a’ que estão presentes nele.
Imprima a quantidade na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // VARIAVEIS
    FILE *entrada = fopen("ex02.txt", "r");
    char caractere = '\0';
    int num_a = 0;

    if (entrada != NULL) // se o arquivo for valido prosseguir
    {
        // ler caractere por caractere ate o fim do arquivo
        while ((caractere = fgetc(entrada)) != EOF)
        {
            // se o caractere for A ou a atualizar o contador
            if (caractere == 'a' || caractere == 'A')
            {
                num_a++;
            }
        }
        // fechar o arquivo, imprimir resultados e encerrar o programa
        fclose(entrada);
        printf("O numero de 'A's e: %d\n", num_a);
    }
    // se o arquivo for invalido avisar o usuario e encerrar o programa
    else
    {
        printf("Erro ao tentar ler arquivo\n");
        return 1;
    }
}