/*
Fernanda Mendes Gomes (18/10/2021) // (27/10/2021)
Considere um arquivo texto que armazene números em ponto flutuante em cada uma de suas linhas.
Escreva um programa em C que determine o valor máximo, o valor mínimo e a média desses valores armazenados no arquivo. Imprima esses valores na tela
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // VARIAVEIS
    FILE *entrada = fopen("ex10.txt", "r");
    float num = 0.0;
    float min = 0.0;
    float max = 0.0;
    double media = 0.0;
    int contador = 0;

    // definir minimo e maximo como o primeiro numero do arquivo
    fscanf(entrada, "%f", &min);
    rewind(entrada); // voltar a leitura do arquivo para a 1 linha
    max = min;
    // se o arquivo for invalido prosseguir
    if (entrada != NULL)
    {
        // ler dados do arquivo
        while (fscanf(entrada, "%f", &num) != EOF)
        {
            // comparar valores minimos e maximos ao numero atual
            if (num > max)
            {
                max = num;
            }
            else if (num < min)
            {
                min = num;
            }
            // calcular a soma dos numeros e atualizar contador
            media = media + num;
            contador++;
        }
        fclose(entrada); // fechar o arquivo de entrada
    }
    else
    {
        printf("Erro ao tentar ler o arquivo\n");
        return -1;
    }
    // calcular o valor da media
    media = media / contador;
    // imprimir resultados de minimo, maximo e media
    printf("Valor maximo: %.2f\nValor Minimo: %.2f\nMedia: %.2lf\n", max, min, media);
    return 0;
}
