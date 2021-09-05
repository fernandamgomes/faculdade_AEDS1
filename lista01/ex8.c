#include <stdio.h>
#include <ctype.h>
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
Construa  um  programa  que  lê  uma  opção  conforme  abaixo  (usar estrutura SWITCH)  e  o salário atual do funcionário, calcula e exibe o novo salário:
A = aumento de 8% no salário;
B = aumento de 11% no salário;
C = aumento fixo no salário (de R$ 350,00 se o salário atual for até R$ 1000 e de R$ 200,00 se o salário atual for maior que R$ 1000).
*/
int main(void) 
{
    float salario = 0.0;
    char opcao;
    int i = 0; 
    
    // pedir input: valor do salario 
    printf ("Qual o valor do seu salario atual? "); 
    scanf ("%f", &salario);   

    // pedir input: qual opcao de aumento usuario deseja
    printf("A = aumento de 8/100 no salario\nB = aumento de 11/100 no salario\nC = aumento fixo no salario (de R$350 se o salario atual for de ate R$1000 e de R$200 se o salario atual for maior que R$1000\nEscolha uma das opcoes acima: ");
    scanf (" %c", &opcao);
    // case insensitive
    opcao = toupper(opcao);


    // checar qual opcao de aumento o usuario escolheu e atualizar o valor da variavel salario
    // se o input do usuario tiver sido invalido, usar o default para avisar que o input e invalido
    switch (opcao)
    {
    case 'A':
        salario = salario * 1.08;
        break;
    case 'B':
        salario = salario * 1.11;
        break;
    case 'C':
        if (salario <= 1000)
        {
            salario = salario + 350;
        }
        else
        {
            salario = salario + 200;
        }
        break;
    default:
        i = 1;
        printf("Input invalido");
        break;
    }
    // se o input tiver sido valido, imprimir o novo valor do salario, se não pular e encerrar o programa (i = teste)
    if (i == 0) 
    {
        printf("O novo valor do salario e: %.2f", salario);
    }
    return 0;
}