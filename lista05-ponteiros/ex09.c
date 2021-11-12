/* 
Fernanda Mendes Gomes (17/10/2021) // (18/10/2021)

Implemente um procedimento que calcule o comprimento e a área de uma circunferência de raio R. 
Esse procedimento deve obedecer ao cabeçalho a seguir: 
    void calcCircunferencia (float R, float *compr, float *area)
A área da superfície e o comprimento são calculados pelas equações: C=2*PI*R e A=PI*R²
No programa principal faça a leitura do raio, acione o procedimento e exiba os resultados do comprimento e área calculados por ele.
*/

#include <stdio.h>
#include <math.h>
void calcCircunferencia (float R, float *compr, float *area);
int main(void) 
{
    // VARIAVEIS
    float raio = 0; 
    float compr = 0; 
    float area = 0; 

    // input do usuario: valor do raio
    printf("Declare o valor do raio: ");
    scanf("%f", &raio);

    calcCircunferencia (raio, &compr, &area); // chamar procedimento quer calcula o comprimento e a area

    printf("Comprimento: %.2f\nArea: %.2f", compr, area); // imprimir resultados
}

void calcCircunferencia (float R, float *compr, float *area) // procedimento que calcula a area e o comprimento da circunferencia
{
    *area = M_PI * R * R; 
    *compr = 2 * M_PI * R; 
}