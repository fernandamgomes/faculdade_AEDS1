#include <stdio.h>
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
Um hotel  com  75  apartamentos  deseja  fazer  uma  promoção  especial  de  final  de  semana, concedendo  um  desconto  de  25%  na  diária.  
Com  isto,  espera  aumentar  sua  taxa  de ocupação  de  50  para  80%.  
Sendo  dado  o  valor  normal  da  diária,  calcular  e  imprimir: 
a)o valor da diária promocional; 
b)o valor total arrecadado com 80% de ocupação e diária promocional; 
c)o valor total arrecadado com 50% de ocupação e diária normal; 
d)a diferença entre estes dois valores.
*/
int main(void) 
{
    float valor_diaria = 0.0;
    
    // pedir input: valor da diaria
    printf ("Qual o valor da diaria? "); 
    scanf ("%.f", &valor_diaria);   
    
    // calcular os valores pedidos
    float valor_promocional = valor_diaria * 0.75; 
    float valor_arrecadado_promocional = valor_promocional * 75 * 0.8;
    float valor_arrecadado_normal = valor_diaria * 75 * 0.5;
    float diferenca = valor_arrecadado_promocional - valor_arrecadado_normal; 

    // imprimir valores gerados
    printf ("O valor da diaria promocional e: %.2f\n", valor_promocional);
    printf ("O valor arrecadado com 80/100 de ocupacao e diaria promocional e: %.2f\n", valor_arrecadado_promocional);
    printf ("O valor arrecadado com 50/100 de ocupacao e diaria normal e: %.2f\n", valor_arrecadado_normal);
    printf("A diferenca entre os valores e: %.2f\n", diferenca);

    return 0; 
}