#include <stdio.h>
/*
Fernanda Mendes Gomes (04/09/21) // (05/09/21)
Em uma eleição presidencial existem quatro candidatos. 
Os votos são informados através de códigos. 
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação: 
    1,2,3,4 = voto para os respectivos candidatos;
    5 = voto nulo; 
    6 = voto em branco;
Elabore um algoritmo que leia o código do candidado em um voto. 
Calcule e escreva:
    -total de votos para cada candidato; 
    -total de votos nulos; 
    -total de votos em branco.
Como finalizador do conjunto de votos, tem-se o valor 0.
*/
int main (void) 
{
    // VARIAVEIS
    int voto = 1;
    int branco = 0;
    int nulo = 0;
    int cand_um = 0;
    int cand_dois = 0;
    int cand_tres = 0;
    int cand_quatro = 0;
    
    while (voto != 0)
    {
        // pedir input:voto
        printf("Digite seu voto: "); 
        scanf("%d", &voto); 

        // testar casos e computar votos
        if (voto == 1)
        {
            cand_um++; 
        }
        else if (voto == 2)
        {
            cand_dois++; 
        }
        else if (voto == 3)
        {
            cand_tres++;
        }
        else if (voto == 4)
        {
            cand_quatro++; 
        }
        else if (voto == 5)
        {
            nulo++; 
        }
        else if (voto == 6)
        {
            branco++; 
        }
    } 
    // imprimir total de votos de cada caso 
    printf("O total de votos para o candidato 1 foi: %d\n", cand_um);
    printf("O total de votos para o candidato 2 foi: %d\n", cand_dois);
    printf("O total de votos para o candidato 3 foi: %d\n", cand_tres);
    printf("O total de votos para o candidato 4 foi: %d\n", cand_quatro);
    printf("O total de votos nulos foi: %d\n", nulo);
    printf("O total de votos brancos foi: %d\n", branco);
    return 0;    
}