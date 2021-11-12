#include <stdio.h>
/*
Fernanda Mendes Gomes (04/09/21) // (04/09/21)
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos de cada habitante. A prefeitura deseja saber: 
a)média do salário da população; 
b)média do número de filhos; 
c)maior salário; 
d)percentual de pessoas com salário até R$100,00. 
O final da leitura dedados se dará com a entrada de um salário negativo. 
*/

int main (void) 
{
    // VARIAVEIS
    float contador = 0.0; 
    float media_salario = 0; 
    float media_filhos = 0; 
    float maior_salario = 0;
    int abaixo_cem = 0; 
    float porcentagem_abaixo_cem = 0; 
    int filhos = 0; 
    float salario = 0.0; 

    // input do usuario: salario 
    printf("Qual o seu salario? "); 
    scanf("%f", &salario);
    // loop roda enquanto o salario for positivo
    while (salario >= 0)
    {
        // input do usuario: numero de filhos
        printf("Quantos filhos voce tem? "); 
        scanf("%d", &filhos);
        if (salario > maior_salario)
        {
            maior_salario = salario;
        }
        if (salario < 100)
        {
            abaixo_cem = abaixo_cem + 1;
        }
        // atualizar o numero de vezes que o loop foi executado
        contador = contador + 1.0; 
        // soma total do salario/ soma total do numero de filhos
        media_salario = media_salario + salario;
        media_filhos = media_filhos + filhos; 

        // input do usuario: salario 
        printf("Qual o seu salario? "); 
        scanf("%f", &salario);
    }
    // fazer o calculo das medias
    media_salario = media_salario/contador;
    media_filhos = media_filhos/contador;
    porcentagem_abaixo_cem = 100 * abaixo_cem /contador;


    // imprimir resultados
    printf("A media do salario da populacao e: %.2f\n", media_salario);
    printf("A media do numero de filhos e: %.2f\n", media_filhos);
    printf("O maior salario e: %.2f\n", maior_salario ); 
    printf("O percentual de pessoas com salario ate R$100.00 e: %.2f\n", porcentagem_abaixo_cem); 
    return 0; 
}