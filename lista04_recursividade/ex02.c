/* 
Fernanda Mendes Gomes (27/09/2021) // (27/09/2021)
Faça uma função para encontrar a soma dos dígitos de um número usando recursão. 
Faça um programa principal que leia um número, acione a função e exiba o resultado gerado
*/

#include <stdio.h>
int soma_dig (int num, int soma);
int main(void)
{
    // VARIAVEIS
    int soma = 0; 
    int numero = 0; 

    // input do usuario: valor de numero
    printf("Digite um numero inteiro (-2147483648 <= numero <= +2147483647) : ");
    scanf("%d", &numero); 
    

    // imprimir o valor da soma retornado pelo acionamento da funcao soma_dig
    printf("A soma dos digitos e %d\n", soma_dig(numero, soma)); 
    return 0;
}

// funcao que calcula a soma de digitos de um numero
int soma_dig (int num, int soma)
{
    // base case
    if (num == 0)
    {
        // retornar o valor da soma para a main
        return soma; 
    }
    // esgotar funcao
    else 
    {
        // atualizar o valor da soma (resto da divisao por 10)
        soma = soma + (num % 10); 
        // chamar a funcao novamente descartando o ultimo digito
        return (soma_dig(num/10, soma));
    }
}