/*
Fernanda Mendes Gomes (22/11/2021) // (22/11/2021)
Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente,
e-mail, número de  horas  de  acesso, página  (S-sim ou  N-não).
Elaborar  um  algoritmo que calcule  e mostre um  relatório contendo o valor a pagar  por
cada cliente, sabendo-se que  as  primeiras  20  horas  de  acesso  é  R$35,00  e  as  horas
que  excederam  tem  o  custo  de R$2,50 por hora. Para os clientes que têm página, adicionar
R$40,00.
Inserir um conjunto de registros (máximo 500).
*/

#include <stdio.h>
#include <string.h>

#define TAMANHO 5

typedef struct Clientes
{
    char codigoCliente[100];
    char email[100];
    int horasAcesso;
    char pagina[1];
} Clientes;

// procedimento que preenche a estrutura com os dados do cliente
void preencherCliente(Clientes *cliente)
{
    printf("\nDADOS DO CLIENTE:\n");
    printf("Codigo do cliente: ");
    scanf(" %[^\n]", cliente->codigoCliente);
    printf("Email do cliente: ");
    scanf(" %[^\n]", cliente->email);
    printf("Numero de horas de acesso: ");
    scanf("%d", &cliente->horasAcesso);
    printf("Possui pagina: ");
    scanf(" %[^\n]", cliente->pagina);
}

// procedimento que calcula o valor a ser pago pelos clientes do provedor de Internet
void valor(Clientes cliente[])
{
    float valorPagar = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        valorPagar = 35;
        if (cliente[i].horasAcesso > 20)
        {
            valorPagar = valorPagar + (cliente[i].horasAcesso - 20) * 2.5;
        }
        if (strcmp("S", cliente[i].pagina) == 0)
        {
            valorPagar = valorPagar + 40;
        }
        printf("\nValor a pagar pelo cliente %d: %.2f", i + 1, valorPagar);
    }
}

int main(void)
{
    Clientes cliente[TAMANHO];
    // preencher os dados dos clientes
    for (int i = 0; i < TAMANHO; i++)
    {
        preencherCliente(&cliente[i]);
    }
    // calcular e imprimir valor a ser pago pelos clientes
    valor(cliente);
    return 0;
}