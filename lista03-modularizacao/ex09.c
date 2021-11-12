/* 
Fernanda Mendes Gomes (17/09/2021) // (17/09/2021)
Faça uma função que lê um número indeterminado de notas de alunos, calcula e retorna a 
média das notas dos alunos aprovados (nota maior ou igual a 6). 
Faça um programa que lê  o número de alunos e imprime a média retornada pela função. 
*/

#include <stdio.h>

float media(int num_alun); 
int main (void)
{
    // VARIAVEIS 
    int num_alunos = 0; 
    float media_aluno = 0.0; 

    // input do usuario: numero de alunos 
    printf("Qual o numero de alunos: "); 
    scanf("%d", &num_alunos);

    // loop vai rodar para cada aluno
    for (int i = 0; i < num_alunos; i++)
    {
        // chamar a funcao que calcula a media
        media_aluno = media(i+1); 
        // se o valor retornado for 0, o aluno reprovou --> imprimir
        if (media_aluno == 0)
        {
            printf("\nAluno reprovado\n---------------------\n");
        }
        // se qualquer outro valor, imprimir a media do aluno (foi aprovado)
        else
        {
            printf("\nA media do aluno %d e: %.2f\n---------------------\n", (i+1), media_aluno);
        }
    }
    return 0; 
}
// funcao que lê as notas, calcula e retorna a media das notas dos alunos aprovados
float media(int num_alun)
{
    // VARIAVEIS
    float total = 0.0; 
    float nota = 0.0; 
    int contador = 0; 
    float media = 0.0; 

    // imprimir o numero do aluno que esta tendo sua media calculada
    printf("ALUNO %d\n", num_alun); 

    // input do usuario
    printf("Qual a nota do aluno: "); 
    scanf("%f", &nota);

    // loop roda ate a nota fornecida ser negativa
    while (nota >= 0)
    {
        // atualizar numero de vezes que o loop rodou para o calculo da media 
        contador++; 
        // atualizar a soma total das notas fornecidas para aquele aluno
        total = total + nota; 
        // input do usuario
        printf("Nota (se desejar encerrar a leitura de notas desse aluno digite um numero negativo): "); 
        scanf("%f", &nota);
    }
    // calculo da media do aluno
    media = total/contador; 
    // se o aluno tiver sido aprovado retornar a media
    if (media >= 6.0)
    {
        return media; 
    }
    // se reprovado retornar 0 
    else
    {
        return 0; 
    }
}