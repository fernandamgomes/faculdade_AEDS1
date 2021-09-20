/* 
Fernanda Mendes Gomes (17/09/2021) // (17/09/2021)
Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria 
desse nadador de acordo com a tabela abaixo.

Idade (anos)    Categoria
5 a 7               F 
8 a 10              E 
11 a 13             D 
14 a 15             C 
16 a 17             B 
Acima de 18         A 

Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela função
*/

#include <stdio.h>
char categoria_nadador (int idade); 
int main (void)
{
    // VARIAVEIS
    int  idade_nadador = 0; 

    // input do usuario: idade (idades menores que 5 nao sao validas)
    while (idade_nadador < 5)
    {
        printf("Qual a idade do nadador (a partir de 5 anos): "); 
        scanf("%d", &idade_nadador);
    } 
    // chamar a funcao que retorna a categoria e imprimir 
    printf("A categoria e: %c", categoria_nadador(idade_nadador));
    return 0; 
}

// funcao que recebe a idade e retorna a categoria do nadador
char categoria_nadador (int idade)
{
    // testar cada condicao de idade fornecida e retornar categoria correspondente
    if ((idade >= 5 ) && (idade <= 7 ))
    {
        return 'F'; 
    }
    else if ((idade >= 8 ) && (idade <= 10 ))
    {
        return 'E';
    }
    else if ((idade >= 11 ) && (idade <= 13 ))
    {
        return 'D';
    }
    else if ((idade == 14) || (idade == 15))
    {
        return 'C';
    }
    else if ((idade == 16) || (idade == 17))
    {
        return 'B';
    }
    else if (idade >= 18)
    {
        return 'A';
    }
}