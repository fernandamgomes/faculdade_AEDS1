/*
Fernanda Mendes Gomes (22/11/2021) // (22/11/2021)
Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias
são: nome, endereço e telefone. Deve ser usada uma estrutura de registro para a construção
deste cadastro.
*/

#include <stdio.h>

#define TAMANHO 2

typedef struct Cliente
{
    char nome[100];
    int telefone;
    char endereco[100];
} Cliente;

// procedimento que realiza o cadastro do cliente
void cadastraCliente(Cliente *cliente)
{
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", cliente->nome);

    printf("Digite o telefone do cliente: ");
    scanf("%d", &cliente->telefone);

    printf("Digite o endereco do cliente: ");
    scanf(" %[^\n]", cliente->endereco);
}

// procedimento que exibe os dados do cliente
void exibeCliente(Cliente *cliente)
{
    printf("DADOS:\nNome: %s\n", cliente->nome);
    printf("Telefone: %d\n", cliente->telefone);
    printf("Endereco: %s\n", cliente->endereco);
    printf("\n----------------------\n\n");
}

int main(void)
{
    Cliente cliente[TAMANHO];
    // preencher dados do cliente
    for (int i = 0; i < TAMANHO; i++)
    {
        cadastraCliente(&cliente[i]);
        printf("\n----------------------\n\n");
    }
    // imprimir dados do cliente
    for (int i = 0; i < TAMANHO; i++)
    {
        exibeCliente(&cliente[i]);
    }
    return 0;
}