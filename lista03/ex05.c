/* 
Fernanda Mendes Gomes (17/09/2021) // (17/09/2021)
Faça  um  procedimento  que  recebe  a  média  final  de  um  aluno,  identifica  e  exibe  o  seu 
conceito,  conforme  a  tabela  abaixo.  
Faça  um  programa  que  leia  a  média  de  N  alunos, 
acionando o procedimento para cada um deles. 
N deve ser lido do teclado

Nota Conceito 
    Até 39 - F 
    40 a 59 -  E 
    60 a 69 -  D 
    70 a 79 - C 
    80 a 89 - B 
    A partir de 90 - A
*/

#include <stdio.h>
void conceito (float media); 
int main(void)
{
    // VARIAVEIS
    int N = 0; 
    float media = 0.0; 

    // input do usuario: numero de alunos (quantas vezes o programa vai analisar as notas)
    printf("Qual o numero de alunos: ");
    scanf("%d", &N);
    printf("\n"); 

    // loop que roda N vezes (numero de alunos)
    for (int i = 0; i < N; i = i + 1)
    {
        // input do usuario: receber valor da media do aluno 
        printf("Qual a media do aluno %d : ", (i+1));
        scanf("%f", &media); 
        // chamar funcao 
        conceito(media); 
        // proximo aluno
    }
    return 0; 
}

void conceito(float media)
{
    // analisar e imprimir conceito baseado no valor de media recebido pela funcao
    printf("Conceito: "); 
    if (media <= 39) 
    {
        printf("F\n"); 
    }
    else if ((media >= 40) && (media <= 59))
    {
        printf("E\n"); 
    }
    else if ((media >= 60) && (media <= 69))
    {
        printf("D\n"); 
    }
    else if ((media >= 70) && (media <= 79))
    {
        printf("C\n"); 
    }
    else if ((media >= 80) && (media <= 89))
    {
        printf("B\n"); 
    }
    else if (media >= 90)
    {
        printf("A\n");
    }
    printf("-------------------------------\n");
}