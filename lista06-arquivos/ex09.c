/*
Fernanda Mendes Gomes (18/10/2021) // (27/10/2021)
Crie um programa que receba dados de vários alunos (Matricula e Telefone) e armazene em um  arquivo texto.
Crie  no  mesmo  programa  uma  opção  de  ler  dados  de  um  arquivo  já armazenado dados de alunos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // VARIAVEIS
    FILE *saida = fopen("ex09.txt", "w");
    int tel = 0;
    int matricula = 0;
    int teste = 1;

    // input do usuario - matricula
    printf("Digite a matricula: ");
    scanf("%d", &matricula);

    // ler dados ate a matricula ser igual a -1 ja leu todos os dados
    while (matricula != -1)
    {
        // input do usuario - telefone
        printf("Digite o telefone: ");
        scanf("%d", &tel);
        // imprimir dados no arquivo de saida
        fprintf(saida, "Matricula: %d\nTelefone: %d\n\n", matricula, tel);
        // input do usuario - matricula
        printf("Digite a matricula, se ja tiver cadastrado todos os alunos digite -1: ");
        scanf("%d", &matricula);
    }
    fclose(saida);

    // input do usuario: opcao de ler dados de um outro arquivo
    printf("Se desejar ler dados de um arquivo que armazena dados de alunos digite 0: ");
    scanf("%d", &teste);
    // se o teste for verdadeiro (usuario quer ler dados de outro arquivo), prosseguir
    if (teste == 0)
    {
        // abrir o arquivo com os dados de matricula e telefone para leitura e testar se o arquivo e valido
        FILE *entrada = fopen("ex09-opcional.txt", "r");
        if (entrada != NULL)
        {
            // abrir o arquivo de saida criado previamente para acrescentar dados
            saida = fopen("ex09.txt", "a");
            // ler e acrescentar dados ate alcancar o final do arquivo
            while (fscanf(entrada, "%d %d", &matricula, &tel) != EOF)
            {
                fprintf(saida, "Matricula: %d\nTelefone: %d\n\n", matricula, tel);
            }
            // fechar os arquivos
            fclose(entrada);
            fclose(saida);
        }
        // se o arquivo de entrada for invalido informar o usuario e encerrar o programa
        else
        {
            printf("Erro ao tentar ler o arquivo\n");
            return -1;
        }
    }
    printf("Fim do programa\n");
    return 0;
}
