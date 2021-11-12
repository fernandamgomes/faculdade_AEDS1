/*
Fernanda Mendes Gomes (26/10/2021) // (27/10/2021)
Faça um programa para inserir N letras informadas pelo usuário em um arquivo texto. Onde
N  é  uma  quantidade  de  letras  definida  pelo  usuário.  Depois  de  inseridas  as  N  letras,  o
programa deverá ler todas as N letras do arquivo, calcular e mostrar a quantidade de vogais,
ou seja,  quantas letras a, e, i, o, u.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    // VARIAVEIS
    int num_letras = 0;
    char letra = '\0';
    FILE *saida = fopen("ex07.txt", "w");
    int vogais = 0;

    // input do usuario: numero de letras que deseja ler
    printf("Digite o numero de letras: ");
    scanf("%d", &num_letras);

    // inserir letras no arquivo
    for (int contador = 0; contador < num_letras; contador++)
    {
        printf("Digite a letra: ");
        scanf(" %c", &letra);
        fprintf(saida, "%c\n", letra);
    }
    fclose(saida);

    // abrir novamente o arquivo de saida, mas dessa vez para ler os dados
    saida = fopen("ex07.txt", "r");
    if (saida != NULL)
    {
        // ler caracteres ate o fim do arquivo
        while (fscanf(saida, " %c", &letra) != EOF)
        {
            letra = toupper(letra);
            // se for vogal, atualizar contador de vogais
            if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
            {
                vogais++;
            }
        }
        // fechar arquivo, imprimir numero de vogais e encerrar o programa
        fclose(saida);
        printf("O numero de vogais e: %d\n", vogais);
        return 0;
    }
    // se o arquivo for invalido informar o usuario e encerrar o programa
    else
    {
        printf("Erro ao tentar ler o arquivo\n");
        return 1;
    }
}