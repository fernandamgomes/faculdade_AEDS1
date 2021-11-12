/* 
Fernanda Mendes Gomes (15/10/2021) // (18/10/2021)
Identifique o erro no programa a seguir, de modo que seja exibido o valor 10 na tela.
#include <stdio.h>
int main()
{
    int x, *p, **q;
    p = &x;
    q = &p;
    x = 10;
    printf("\n%d\n", &q);
    return(0); 
}
*/

#include <stdio.h>
int main()
{
    //VARIAVEIS
    int x, *p, **q;
    p = &x;
    q = &p;
    x = 10;
    
    printf("\n%d\n", **q); 
    // ERRO: '&q' ao invés de '**q', '&q' imprime onde a variavel 'q' foi alocada e não o conteúdo apontado pelo endereço armazenado no ponteiro
    // '**q' imprime o valor 10 na tela

    return(0); 
}