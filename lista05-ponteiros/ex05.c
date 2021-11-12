/* 
Fernanda Mendes Gomes (15/10/2021) // (18/10/2021)

Escreva um programa em C que declare variáveis para armazenar um valor inteiro, um valor real  e  um caracter.  
Deve  existir  no  programa  ponteiros  associados  a  cada  um  deles.  
O programa deve solicitar novos dados para as variáveis e elas devem ser modificadas usando os respectivos ponteiros. 
Exiba os endereços e os conteúdos de todas as variáveis e ponteirosantes e após a alteração
*/

#include <stdio.h>
int main()
{
    // VARIAVEIS
    int num = 0;
    float real = 0; 
    char caractere = '0';
    // declarar e associar ponteiros as variaveis
    int *p_num = &num;
    float *p_real = &real;
    char *p_caractere = &caractere;

    // imprimir valores antes da alteracao (input do usuario) 
    printf("\nVALORES DOS PONTEIROS ANTES da alteracao:\n  - Inteiro: %d\n  - Real: %.3f\n  - Caractere: %c\n", *p_num, *p_real, *p_caractere);
    printf("ENDERECOS DOS PONTEIROS ANTES da alteracao:\n  - Inteiro: %x\n  - Real: %x\n  - Caractere: %x\n", &p_num, &p_real, &p_caractere);
    printf("\nVALORES DAS VARIAVEIS ANTES da alteracao:\n  - Inteiro: %d\n  - Real: %.3f\n  - Caractere: %c\n", num, real, caractere);
    printf("ENDERECOS DAS VARIAVEIS ANTES da alteracao:\n  - Inteiro: %x\n  - Real: %x\n  - Caractere: %x\n", &num, &real, &caractere);

    // input do usuario: novos dados para as variaveis
    printf("\nDeclare um numero inteiro, um numero real e um caractere separados por espaco: ");
    scanf("%d %f %c", p_num, p_real, p_caractere);

    // imprimir valores apos a alteracao (input do usuario)
    printf("\nVALORES DOS PONTEIROS APOS a alteracao:\n  - Inteiro: %d\n  - Real: %.3f\n  - Caractere: %c\n", *p_num, *p_real, *p_caractere);
    printf("ENDERECOS DOS PONTEIROS APOS a alteracao:\n  - Inteiro: %x\n  - Real: %x\n  - Caractere: %x\n", &p_num, &p_real, &p_caractere);
    printf("\nVALORES DAS VARIAVEIS APOS a alteracao:\n  - Inteiro: %d\n  - Real: %.3f\n  - Caractere: %c\n", num, real, caractere);
    printf("ENDERECOS DAS VARIAVEIS APOS a alteracao:\n  - Inteiro: %x\n  - Real: %x\n  - Caractere: %x\n", &num, &real, &caractere);

    return 0; 
}