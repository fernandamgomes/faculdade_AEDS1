/* 
Fernanda Mendes Gomes (16/09/2021) // (20/09/2021)
Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. 
Se a letra for ‘A’,o procedimento calcula e escreve a média aritmética das notas do aluno, se for ‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). 
Faça um programa que leia 3 notas de N alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado)
*/
#include <stdio.h>
void aluno (float arr_notas[], char input_usuario); 
int main (void) 
{
    // VARIAVEIS
    float notas[3]; 
    char opcao; 
    int num_alunos = 0; 

    // ler o valor de  N (numero de alunos)
    printf("Digite o numero de alunos: "); 
    scanf ("%d", &num_alunos); 

    // loop principal: roda 1x para cada aluno
    for (int j = 0; j < num_alunos; j = j + 1)
    {
        // loop secundario: roda 3x para ler as 3 notas de cada aluno
        for (int i= 0; i < 3; i = i + 1) 
        {
            printf("Digite a nota %d do aluno %d: ", (i + 1), (j+1)); 
            scanf("%f", &notas[i]);
        }
        // receber input: opcao switch
        printf("Digite 'A' para calcular a media aritmetica ou 'P' para ponderada: ");
        scanf(" %c", &opcao);
        
        // chamar o procedimento que calcula a media com os parametros recebidos 
        aluno(notas, opcao);
        printf("-------------------------\n");
        // proximo aluno
    }
}

// procedimento que calcula a media aritmetica ou media pinderada
void aluno (float arr_notas[], char input_usuario)
{
    // ler caso switch recebido
    switch (input_usuario)
    {
    case 'A':
        // se caso A calcular a media aritmetica das 3 notas
        printf("A media aritmetica e: %.2f\n", ((arr_notas[0] + arr_notas[1] + arr_notas[2])/3));
        break;
    case 'P':
        // se caso P calcular a media ponderada das 3 notas
        printf("A media ponderada e: %.2f\n",((arr_notas[0] * 5 + arr_notas[1] * 3 + arr_notas[2] * 2) / 10));
        break;
    default:
        // se o usuario digitar algum caractere diferente de A ou P --> input e invalido 
        printf("Input invalido\n");
        break;
    }
}
