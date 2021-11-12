#include <stdio.h>
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
Fazer um programa para:
- ler um símbolo do teclado;
- identificar  com a  estrutura SWITCH  e mostrar  as  seguintes  mensagens,  segundo  o caso:
    - "SINAL DE MENOR" 
    - "SINAL DE MAIOR"
    - "SINAL DE IGUAL"
    - "OUTRO SINAL"
*/
int main(void) 
{
    char simbolo; 
    
    // pedir input: simbulo
    printf ("Digite um simbolo do teclado: "); 
    scanf (" %c", &simbolo);  

    // checar se o simbolo e de maior, menor ou igual. Se nao for nenhum desses - default
    switch (simbolo)
    {
    case '<':
        printf("SINAL DE MENOR"); 
        break;
    case '>':
        printf("SINAL DE MAIOR"); 
        break;
    case '=':
        printf("SINAL DE IGUAL"); 
        break;
    default:
        printf("OUTRO SINAL");
        break;
    }
    return 0;    
}