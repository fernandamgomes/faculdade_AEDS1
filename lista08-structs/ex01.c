/*
Fernanda Mendes Gomes (22/11/2021) // (22/11/2021)
Dados os seguintes campos de um registro:  nome, dia de aniversário e mês de aniversário,
desenvolver um algoritmo que mostre em cada um dos meses do ano quem são as pessoas
que fazem aniversário, exibir também o dia. Considere um conjunto de 40 pessoas.
*/

#include <stdio.h>

#define TAMANHO 40

typedef struct Pessoa
{
    char nome[100];
    int diaAniv;
    int mesAniv;
} Pessoa;

// procedimento que preenche uma estrutura do tipo Pessoa de acordo com o input do usuario
void preencherPessoa(Pessoa *pessoa)
{
    printf("***** Dados da Pessoa ******\n");
    printf("Nome: ");
    scanf(" %[^\n]", pessoa->nome);
    printf("Dia do aniversario: ");
    scanf("%d", &pessoa->diaAniv);
    printf("Mes do aniversario: ");
    scanf("%d", &pessoa->mesAniv);
}

// procedimento que imprime o nome e dia do aniversario das pessoas separadas por mes
void aniversariosMes(Pessoa p[])
{
    for (int mes = 01; mes < 13; mes++)
    {
        printf("\n\n--------------------------\n\nAniversariantes do mes %d:\n", mes);
        for (int pessoa = 0; pessoa < TAMANHO; pessoa++)
        {
            if (p[pessoa].mesAniv == mes)
            {
                printf("Nome: %s\n", p[pessoa].nome);
                printf("Dia do Aniverario: %d", p[pessoa].diaAniv);
            }
        }
    }
}

int main(void)
{
    Pessoa pessoas[TAMANHO];
    // chamar procedimento que preenche o vetor de pessoas
    for (int i = 0; i < TAMANHO; i++)
    {
        preencherPessoa(&pessoas[i]);
    }
    // chamar procedimento que imprime os aniversariantes do mes
    aniversariosMes(pessoas);
    return 0;
}