#include <stdio.h>
/*
Fernanda Mendes Gomes (03/09/21) // (04/09/21)
Faça  um  algoritmo  que  leia  o  ano  de  nascimento  de  uma  pessoa  e  calcule  sua  idade, considerando  o  ano  atual.  
Para  verificar  se  já  fez  aniversário  no  ano  atual  pergunte  se  a pessoa  já  fez  aniversário,  sendo  que  ela  pode  entrar  com  a  informação  "S"(sim)  ou  "N" (não).  
Com  isto  é  possível  se  ter  maior  precisão  sobre  a  idade.  
Verifique  também  se  a pessoa já tem idade para conseguir Carteirade Habilitação (18 anos ou mais) e imprima a mensagem referente a esta checagem. 
Imprima a idade da pessoa
*/
int main(void) 
{
    //VARIÁVEIS
    int ano_nasc = 0;
    int ano_atual = 0;
    char resposta;
    int idade = 0; 
    
    // pedir input: ano de nascimento e ano atual
    printf ("Digite seu ano de nascimento (formato:aaaa)): "); 
    scanf ("%d/%d/%d", &ano_nasc); 
    printf ("Digite o ano atual (formato: aaaa)): "); 
    scanf ("%d", &ano_atual); 

    // pedir input para maior precisao de idade
    printf ("Voce ja fez aniversario esse ano? (Responda com S ou N): "); 
    scanf (" %c", &resposta);
    
    // calcular idade
    idade = ano_atual - ano_nasc; 
    if (resposta == 'N') 
    {
        idade = idade - 1; 
    }
    
    // imprimir idade e se o usuário pode tirar carteira
    printf("Sua idade e %d anos", idade);
    if (idade >=18)
    {
        printf(" e voce ja tem idade para conseguir Carteira de Habilitacao\n");
    }
    else
    {
        printf(" e voce nao tem idade para conseguir Carteira de Habilitacao\n");
    }
    return 0; 
}