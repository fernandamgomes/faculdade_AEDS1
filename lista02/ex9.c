#include <stdio.h>
/*
Fernanda Mendes Gomes (04/09/21) // (04/09/21)
Um   comerciante   deseja   fazer   o   levantamento   do   lucro   das   mercadorias   que   ele comercializa.  
Para  isto,  mandou  digitar  uma linha  para  cada  mercadoria  com  o  preço de compra e de venda de cada uma. 
A última linha contém preço de compra igual a 0.
Escreva um programa que:
a) Determine e escreva quantas mercadorias proporcionaram:
    i) Lucro < 10%
    ii) 10% <= lucro <= 20%
    iii) Lucro > 20%
b) Determine e escreva o valor total de compra e de venda de todas as mercadorias,assim como o lucro total.
*/
int main (void) 
{
    // VARIAVEIS
    float preco_compra = 0.0;
    float preco_venda = 0.0;
    float total_compra = 0.0;
    float total_venda = 0.0;
    float lucro = 0.0;
    int lucro_menor_dez = 0;
    int lucro_dez_e_vinte = 0;
    int lucro_maior_vinte = 0; 

    // pedir input do usuario: preco de compra
    printf("Digite o preco de compra e de venda (formato: numero1 numero2): "); 
    scanf("%f %f", &preco_compra, &preco_venda);
    // loop roda até o valor de compra fornecido pelo usuario ser 0 
    while (preco_compra != 0)
    {
        lucro = (preco_venda - preco_compra) * 100 / preco_compra;
        // checar condicoes fornecidas para o valor do lucro 
        if (lucro < 10)
        {
            lucro_menor_dez = lucro_menor_dez + 1; 
        }
        else if ((lucro >= 10) && (lucro <= 20))
        {
            lucro_dez_e_vinte = lucro_dez_e_vinte + 1; 
        }
        else if (lucro > 20)
        {
            lucro_maior_vinte = lucro_maior_vinte + 1;
        }
        // atualizar os valores totais de venda e compra
        total_compra = total_compra + preco_compra; 
        total_venda = total_venda + preco_venda; 

        // pedir input do usuario
        printf("Digite o preco de compra e de venda (formato: numero1 numero2): "); 
        scanf("%f %f", &preco_compra, &preco_venda);
    }
    // imprimir totais 
    printf("Mercadorias com lucro < 10: %d\n", lucro_menor_dez);
    printf("Mercadorias com 10 <= lucro <= 20: %d\n", lucro_dez_e_vinte);
    printf("Mercadorias com lucro > 20: %d\n", lucro_maior_vinte);
    printf ("O total de compra e: %2.f\n", total_compra); 
    printf ("O total de venda e: %2.f\n", total_venda); 
    printf("O lucro total e: %.2f\n", total_venda - total_compra); 
    return 0; 
    
}