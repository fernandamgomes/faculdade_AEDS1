/*
Fernanda Mendes Gomes (26/10/2021) // (27/10/2021)
Crie um programa que leia a quantidade de veículos que uma locadora de veículos possui e o valor que ela cobra por cada aluguel, mostrando as informações pedidas a seguir:
    • Sabendo-se que um terço dos veículos são alugados por mês, exiba o faturamento anual da locadora
    • Quando o cliente atrasa a entrega, é cobrada uma multa de 20% sobre o valor do aluguel. Sabendo que um décimo dos veículos alugados no mês é devolvido com atraso, calcule o valor ganho com multas no mês
    • Sabe-se ainda que 2% dos veículos precisam de manutenção ao longo do ano. Calcule o valor  gasto  com  a  manutenção  anual,  sabendo que o  valor  gasto  em  média  com  a manutenção é de R$ 600,00.
Além de mostrar os resultados na tela, grave em  um arquivo.
Cada valor deverá ser armazenado em uma linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // VARIAVEIS
    int num_carros = 0;
    int valor_aluguel = 0;
    FILE *saida = fopen("ex08.txt", "w");

    // input do usuario: numero de carros
    printf("Digite o numero de carros: ");
    scanf("%d", &num_carros);
    // input do usuario: valor do aluguel
    printf("Digite o valor do aluguel: ");
    scanf("%d", &valor_aluguel);

    // calculo do faturamento anual, ganho com multas por mes e gasto com manutencao anual
    float faturamento_anual = (num_carros / 3.0) * valor_aluguel * 12.0;
    float multa_mes = (valor_aluguel * 0.2) * ((num_carros / 3.0) / 10.0);
    float gasto_manutencao = 600.0 * (num_carros * 0.02) * 12.0;

    // imprimir resultados na tela
    printf("Faturamento anual: %.2f\n", faturamento_anual);
    printf("Valor ganho com multas no mes: %.2f\n", multa_mes);
    printf("Valor  gasto  com  a  manutencao  anual: %.2f\n", gasto_manutencao);

    // imprimir resultados no arquivo, fechar arquivo e encerra programa
    fprintf(saida, "Faturamento anual: %.2f\n", faturamento_anual);
    fprintf(saida, "Valor ganho com multas no mes: %.2f\n", multa_mes);
    fprintf(saida, "Valor  gasto  com  a  manutencao  anual: %.2f\n", gasto_manutencao);
    fclose(saida);
    return 0;
}