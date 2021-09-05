#include <stdio.h>
#include <math.h> 
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
Faça um programa para calcular e imprimir o valor de Y, dado um valor de X:
y = f(x) = 
    - 1, se x <= 1
    - 2, se 1 < x <= 2
    - x**2, se 2 < x <= 3
    - x**3, se x > 3
*/
int main(void) 
{
    float x = 0.0;
    float y = 0.0;
    
    // pedir input: valor de a e b 
    printf ("y = f(x)\nQual o valor de x? "); 
    scanf ("%f", &x);   

    // checar condicoes para determinar o valor de y 
    if (x <= 1)
    {
        y = 1; 
    }
    else if ((x > 1) && (x <= 2))
    {
        y = 2; 
    }
    else if ((x > 2) && (x <= 3))
    {
        y = pow(x, 2.0); 
    }
    else if (x > 3) 
    {
        y = pow(x, 3.0); 
    }

    // imprimir o valor de y 
    printf("O valor de y e: %.2f", y);
    return 0; 
}