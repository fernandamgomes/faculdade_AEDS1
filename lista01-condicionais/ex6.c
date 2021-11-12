#include <stdio.h>
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
Faça um programa para ler os coeficientes de uma equação do primeiro grau (ax + b = 0), calcular e escrever a raiz daequação.
*/
int main(void) 
{
    float a = 0.0;
    float b = 0.0;
    
    // pedir input: valor de a e b 
    printf ("(ax + b = 0)\nQual o valor de a? "); 
    scanf ("%f", &a);   

    printf ("Qual o valor de b? "); 
    scanf ("%f", &b);   
    
    // calcular e imprimir o valor de x 
    float x = -b / a;
    printf("O valor de X e: %2.f", x);
    return 0; 
}