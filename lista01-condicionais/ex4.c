#include <stdio.h>
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
Faça um algoritmo que segundo uma nota informada pelo usuário, verifique em qual faixa a  mesma  se  encaixa  e  imprima  para  o  usuário  a  mensagem  correspondente  conforme  a tabela abaixo: 
- Nota > = 8 e Nota < = 10 -> Ótimo
- Nota > = 7 e Nota < 8 -> Bom
- Nota > = 5 e Nota < 7 -> Regular
- Nota < 5 -> Insatisfatório
*/
int main(void) 
{
    //VARIAVEIS
    float nota = 0.0; 
    int i = 0; 
    
    // pedir input: nota do usuario
    do 
    {
        // se o input for invalido, o loop vai rodar novamente, logo i vai ser igual a 1; Informar ao usuario o motivo do erro 
        if (i==1) 
        {
            printf("Input inválido: a nota tem de estar entre 0 e 10, inclusive\n"); 
        } 
        printf ("Digite sua nota: "); 
        scanf ("%f", &nota); 
        i = 1; 
    }
    // repetir se input for invalido
    while ((nota > 10) || (nota < 0));
    
    
    // classificar nota de acordo com categorias fornecidas
    if (nota >=8)
    {
        printf("otimo");
    }
    else if ((nota < 8) && (nota >= 7))
    {
        printf("bom");
    }
    else if ((nota < 7) && (nota >= 5))
    {
        printf("regular");
    }
    else
    {
        printf("insatisfatorio");
    }
    return 0; 
}