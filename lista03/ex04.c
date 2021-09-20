/* 
Fernanda Mendes Gomes (16/09/2021) // (20/09/2021)
Escreva  um procedimento que  recebe  3  valores  reais  X,  Y  e  Z  e  que  verifique  se  esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o tipo  de  triângulo  formado.  
Para  que  X,  Y  e  Z  formem  um  triângulo  é  necessário  que  a seguinte propriedade seja satisfeita: 
    - o comprimento de cada lado de um triângulo é menor do  que  a  soma  do  comprimento  dos  outros  dois  lados.  

O  procedimento  deve  identificar  o tipo de triângulo formado observando as seguintes definições: 
    -Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
    -Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais. 
    -Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
    
Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e para cada triângulo, acione o procedimento.
*/

#include <stdio.h>
void leitura_triangulo (float lados[]); 
int main (void)
{
    // VARIAVEIS
    float lado_triangulo[3]; 
    int teste = 0; 

    // loop vai rodar N vezes ate o usuario desejar encerrar (teste == 1)
    while (teste != 1)
    {
        // input do usuario: receber valores dos lados do triangulo e armazenar 
        for (int i = 0; i < 3; i++)
        {
            printf("Digite o valor do lado: "); 
            scanf("%f", &lado_triangulo[i]); 
        }
        // chamar a funcao  para testar como o triangulo e caracterizado
        leitura_triangulo(lado_triangulo); 
        // input: usuario deseja ou nao continuar, salvar na variavel teste
        printf("Se desejar encerrar o programa digite '1', se desejar ler outro triangulo digite qualquer outro numero: "); 
        scanf("%d", &teste); 
        printf("---------------------\n");
    }
    return 0; 
}

void leitura_triangulo (float lados[])
{
    // VARIAVEIS
    int teste_lados = 0;

    // se for um triangulo continuar 
    if ((lados[0] < lados[1] + lados[2]) && (lados[1] < lados[0] + lados[2]) && (lados[2] < lados[0] + lados[1])) 
    {
        // testar valor dos lados para descobrir qual o tipo de triangulo
        for (int i = 0; i < 2; i++)
        { 
            if (lados[i] != lados[i+1])
            {
                teste_lados = teste_lados+1; 
            }
        }
        // imprimir tipo de triangulo baseado na variavel teste
        if (teste_lados == 0)
        {
            printf("Equilatero\n---------------------\n"); 
        }
        else if (teste_lados == 1)
        {
            printf("Isoceles\n---------------------\n");
        }
        else 
        {
            printf("Escaleno\n---------------------\n"); 
        }
    }
    // se não for tringulo imprimir mensagem para o usuario 
    else 
    {
        printf("Nao e um triangulo\n---------------------\n");
    }
}