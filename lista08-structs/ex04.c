/*
Fernanda Mendes Gomes (22/11/2021) // (22/11/2021)
Uma   determinada   biblioteca   possui   obras   de   ciências   exatas,   humanas   e   biológicas,
totalizando      1500  volumes,  distribuídos  em  cada  uma  das  áreas.  O  proprietário  resolveu
agrupar as informações de cada livro no seguinte registro:
• Código de catalogação
• Doação (S/N)
• Nome da obra
• Nome do autor
• Editora
• Área
Construir um algoritmo que:
a) cadastre todos os volumes de cada uma das áreas em três vetores distintos
b) permita  ao  usuário  fazer  consulta  às  informações  cadastradas  fornecendo  o  código  de
catalogação e a área.
Existindo tal livro as informações são exibidas, caso contrário enviar mensagem de aviso. A
consulta se repete até que o usuário digite código finalizador   -1.
*/

#include <stdio.h>
#include <string.h>

typedef struct Livros
{
    char codigo[100];
    char doacao[2];
    char nomeObra[100];
    char nomeAutor[100];
    char editora[100];
    char area[20]; // exatas, humanas, biologicas
} Livros;

// procedimento que realiza o cadastro de livro
void cadastraLivro(Livros *livro)
{
    printf("Codigo do livro: ");
    scanf(" %[^\n]", livro->codigo);
    printf("Doacao: ");
    scanf(" %[^\n]", livro->doacao);
    printf("Nome da Obra: ");
    scanf(" %[^\n]", livro->nomeObra);
    printf("Nome do Autor: ");
    scanf(" %[^\n]", livro->nomeAutor);
    printf("Nome da editora: ");
    scanf(" %[^\n]", livro->editora);
    printf("\n\n");
}

// funcao que procura um livro baseado no codigo fornecido e imprime o resultado
int buscaLivros(char codigo[100], Livros livro[], int num)
{
    for (int i = 0; i < num; i++)
    {
        // se o livro for encontrado imprimir e encerrar funcao
        if (strcasecmp(codigo, livro[i].codigo) == 0)
        {
            printf("Codigo do livro: %s\n", livro[i].codigo);
            printf("Doacao: %s\n", livro[i].doacao);
            printf("Nome da Obra: %s\n", livro[i].nomeObra);
            printf("Nome do Autor: %s\n", livro[i].nomeAutor);
            printf("Nome da editora: %s\n", livro[i].editora);
            printf("Area: %s\n\n----------------------------------------------\n\n", livro[i].area);
            return 0;
        }
    }
    // se o livro nao tiver sido encontrado avisar o usuario e encerrar a funcao
    printf("Livro nao encontrado\n\n----------------------------------------------\n\n");
    return 1;
}

int main(void)
{
    // VARIAVEIS
    int numExatas = 0;
    int numBiologicas = 0;
    int numHumanas = 0;
    char area[20];
    char codigo[100];
    // input do usuario: quantos livros em cada area
    printf("Quantos livros de exatas deseja ler? ");
    scanf("%d", &numExatas);
    printf("Quantos livros de biologicas deseja ler? ");
    scanf("%d", &numBiologicas);
    printf("Quantos livros de humanas deseja ler? ");
    scanf("%d", &numHumanas);
    // VETORES POR AREA
    Livros livrosExatas[numExatas];
    Livros livrosBiologicas[numBiologicas];
    Livros livrosHumanas[numHumanas];

    // PREENCHER VETORES POR AREA
    for (int i = 0; i < numExatas; i++)
    {
        printf("\n----------Cadastro de Livros de Exatas----------\n");
        cadastraLivro(&livrosExatas[i]);
        strcpy(livrosExatas[i].area, "Exatas");
    }
    for (int i = 0; i < numBiologicas; i++)
    {
        printf("----------Cadastro de Livros de Biologicas----------\n");
        cadastraLivro(&livrosBiologicas[i]);
        strcpy(livrosBiologicas[i].area, "Biologicas");
    }
    for (int i = 0; i < numHumanas; i++)
    {
        printf("\n----------Cadastro de Livros de Humanas----------\n");
        cadastraLivro(&livrosHumanas[i]);
        strcpy(livrosHumanas[i].area, "Humanas");
    }

    // INPUT DO USUARIO: LIVRO QUE ESTA BUSCANDO (CODIGO)
    printf("----------------------------------------------\n\nDigite o codigo de catalogacao: ");
    scanf(" %[^\n]", codigo);

    // quando o usuario fornecer o codigo -1, o programa encerra
    while (strcmp(codigo, "-1") != 0)
    {
        // INPUT DO USUARIO: LIVRO QUE ESTA BUSCANDO (AREA)
        printf("Digite a area (exatas, humanas ou biologicas): ");
        scanf(" %[^\n]", area);
        // baseado no input do usuario, filtrar qual vetor (exatas, humanas ou biologicas) deve ser passado como parametro para a funcao que busca e imprime o livro
        if (strcasecmp(area, "Biologicas") == 0)
        {
            buscaLivros(codigo, livrosBiologicas, numBiologicas);
        }
        else if (strcasecmp(area, "Humanas") == 0)
        {
            buscaLivros(codigo, livrosHumanas, numHumanas);
        }
        else if (strcasecmp(area, "Exatas") == 0)
        {
            buscaLivros(codigo, livrosExatas, numExatas);
        }
        else
        {
            printf("Area inexistente\n");
        }
        // INPUT DO USUARIO: LIVRO QUE ESTA BUSCANDO (CODIGO)
        printf("Digite o codigo de catalogacao (se desejar encerrar digite -1): ");
        scanf(" %[^\n]", codigo);
    }
    return 0;
}