#include <stdio.h>
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
eia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava  dirigindo  nela.  
Se  o  motorista  estiver  dentro  do  limite  de  velocidade,  imprima  a mensagem  “Motorista  respeitou  a  lei”.  
Se  o  motorista  tiver  ultrapassado  a  velocidade máxima  permitida,  calcule  e  imprima  o  valor  da  multa a  ser  cobrada,  sabendo  que  os valores a serem cobrados são os seguintes:
    - 50 reais se o motorista ultrapassar  em até 10km/h a velocidade permitida (ex: se a velocidade máxima for 50km/h e o motorista estiver a 60km/h ou a 56km/h)
    - 100 reais, se o motoristaultrapassar de 11 a 30 km/h a velocidade permitida
    - 200 reais, se estiver acima de 30km/h da velocidade permitida
*/
int main(void) 
{
    int vel_max = 0;
    int vel_motorista = 0;

    // pedir input: velocidade max e velocidade do motorista
    printf ("Qual a velocidade com que o motorista estava dirigindo? "); 
    scanf ("%d", &vel_motorista);

    printf ("Qual a velocidade maxima permitida? "); 
    scanf ("%d", &vel_max);   

    // se a velocidade do motorista for menor ou igual a maxima, o motorista estava na lei
    if (vel_max >= vel_motorista)
    {
        printf("Motorista respeitou a lei"); 
    }
    
    // se for maior, checar cada caso e posteriormente imprimir o valor da multa
    else 
    {
        if (vel_motorista <= vel_max + 10)
        {
            printf("O valor da multa e de 50 reais");
        }
        else if ((vel_motorista > vel_max + 10) && (vel_motorista <= vel_max + 30))
        {
            printf("O valor da multa e de 100 reais");
        }
        else 
        {
            printf("O valor da multa e de 200 reais");
        }
    }
    return 0; 
}