/* 
Fernanda Mendes Gomes (16/09/2021) // (17/09/2021)
A  prefeitura  de  uma  cidade  fez  uma  pesquisa  entre  os  seus  habitantes,  coletando  dados sobre  o  salário  e  número  de  filhos.  
Faça um procedimento que  leia  esses  dados  para  um número  não  determinado  de  pessoas,  calcule  e  exiba a  média  de  salário  da  população  (a condição de parada pode ser um flag ou a quantidade N). 
Faça um programa que acione o procedimento
*/
#include <stdio.h>
void dados_pop (void); 
int main (void) 
{
    // chamar a funcao que recebe os dados e calcula a media dos salarios
    dados_pop(); 
    return 0; 
}

void dados_pop (void) 
{
    // VARIAVEIS
    float salario = 0.0; 
    int filhos = 0;
    int contador = 0;  
    float total = 0; 

    // receber e armazenar input do usuario: valor do salario
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    // condição de parada do loop: salario = -1
    while (salario != -1)
    {
        // receber e armazenar input do usuario: numero de filhos
        printf("Digite o numero de filhos: "); 
        scanf("%d", &filhos); 

        // atualizar o numero de vezes que o loop rodou
        contador++; 
        // atualizar o valor da soma total dos valores de salario recebidos
        total = total + salario; 
        // receber e armazenar input do usuario: valor do salario, se for == -1 o loop não vai rodar na proxima iteracao 
        printf("Digite o valor do salario (se desejar encerrar o programa digite '-1'): ");
        scanf("%f", &salario);
    }
    // calcular e impprimir a media dos salarios: total dividido pelo numero de vezes que o loop rodou 
    printf("A media dos salarios da populacao e: %.2f\n", (total / contador)); 
}