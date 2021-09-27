/* 
Fernanda Mendes Gomes (27/09/2021) // (27/09/2021)
Faça uma função em C para contar os dígitos de um determinado número usando recursão. 
Faça um programa principal que leia um número, acione a função e exiba o resultado gerado.
*/

#include <stdio.h>
int num_dig (int num, int dig);
int main(void)
{
    // VARIAVEIS
    int digitos = 0; 
    int numero = 0; 

    // input do usuario: valor de numero
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); 
    
    // imprimir o numero de digitos retornado pelo acionamento da funcao num_dig
    printf("O numero de digitos e %d\n", num_dig(numero, digitos)); 
    return 0;
}

// funcao que conta o numero de digitos 
int num_dig (int num, int dig) 
{
    // base case
    if (num == 0)
    {
        // retornar o numero de digitos para a main
        return dig; 
    }
    // esgotar funcao
    else 
    {
        // atualizar o numero de digitos
        dig = dig + 1;
        // chamar a funcao novamente descartando o ultimo digito
        return (num_dig(num/10, dig));
    }
}