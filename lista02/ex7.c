#include <stdio.h>
/*
Fernanda Mendes Gomes (04/09/21) // (04/09/21)
Faça  um  programa  que  imprima  os  L  primeiros  elementos  da  série  de  Fibonacci.Por exemplo,  se  o  usuário  digitou  o  número  40,  deverão  ser  apresentados  os  40  números  da sequência na tela
*/
int main (void) 
{
    int numero; 
    // input de usuario: valor de L
    do
    {
        printf("Digite um numero inteiro positivo: "); 
        scanf("%d", &numero);
    } 
    while (numero <= 0);

    int fib [numero]; 

    // definir fibonacci de 0 e 1, ja que fib[2] = fib[0] + fib[1], para poder rodar o loop
    int fib0 = 0;
    int fib1 = 1;
    int fib_resultado = 0; 
    printf("O fibonacci de 0 e: %d\n", fib0);
    // se numero for igual a 1 somente o fib de 0 e impresso
    if (numero > 1)
    {
        printf("O fibonacci de 1 e: %d\n", fib1);
    }
    // loop de 2 (valor de fib de 0 e 1 ja foram definidos e impressos) ate numero (nao incluso, ja que a sequencia comeca do 0)
    for (int i = 2; i < numero; i++)
    {
        // calcular o valor de fib[i]
        fib_resultado = fib1 + fib0; 
        // atualizar valores para a proxima iteracao
        fib0 = fib1;
        fib1 = fib_resultado;
        printf("O fibonacci de %d e: %d\n", i, fib_resultado);
    }
    return 0; 
}
