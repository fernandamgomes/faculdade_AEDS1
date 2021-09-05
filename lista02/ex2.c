#include <stdio.h>
#include <stdlib.h>
/*
Fernanda Mendes Gomes (04/09/21) // (04/09/21)
Fazer um programa que leia uma sequencia de valores inteiros fornecida pelo usuario em uma linha de entrada e conte o numero de valores positivos, negativos e zeros.
Adaptar  o  programa  acima  para  que  ele  calcule  o  percentual  dos  valores  positivos, negativos ezeros em relação ao total de valores fornecidos.
*/
float percentual(float numero, float total); 
int main(void)
{
    int i = 0;
    int positivos = 0; 
    int negativos = 0;
    int zeros = 0;  
    int numeros = 0;
    char temp;
    // pedir input do usuario 
    printf("Digite uma sequencia de inteiros separados por um espaco, quando acabar digite enter: "); 
    // ler cada numero digitado + espaco(char), quando for detectada uma nova linha, encerrar o loop e o scanf
    do
    {
        scanf("%d%c", &numeros, &temp);
        // atualizar contador
        i++; 
        // checar se numero e positivo, negativo ou zero e atualizar valores se condicao for verdadeira
        if (numeros > 0)
        {
            positivos++; 
        }
        else if (numeros < 0)
        {
            negativos++; 
        }
        else
        {
            zeros++; 
        }
    } 
    while (temp != '\n');

    // calcular e imprimir  percentuais 
    printf("O percentual de zeros e: %.2f\n", percentual(zeros, i));
    printf("O percentual de positivos e: %.2f\n", percentual(positivos, i));
    printf("O percentual de negativos e: %.2f\n", percentual(negativos, i));
    return 0;
}
// calculo percentuais
float percentual(float parcial, float total)
{
    float percentual = parcial * 100 / total;
    return percentual;  
}