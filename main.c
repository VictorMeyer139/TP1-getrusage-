#include <stdio.h>
#include "Headers/pegar_do_arquivo.h"
#include "Headers/guloso_solution.h"
#include "Headers/bruto_solution.h"

#include <sys/time.h>

/* Teste da medicao do tempo*/
int main(int argc, char *argv[]) {
// Variaveis relacionadas com a medicao do tempo:
    struct timeval inicio, fim;
/*estrutura que armazena o tempo total que o programa gasta, relaciona-se com
a funcao gettimeofday()*/
    long totalmicroseg, totalseg;
//tempo total do programa
/* armazenam a diferenca entre o tempo inicial e o final, ou seja, o tempo
total gasto pelo programa todo. */
//obtendo o tempo em que o programa comeca.
    ITEM *itens;
    itens = trata_as_parada_do_arquivo();//ítens é uma struct já alocada com os dados do arquivo
    printf("\n============= SOLUÇÃO GULOSA =============\n");
    gettimeofday(&inicio, NULL);
    guloso_solution(itens);
    gettimeofday(&fim, NULL);
//obtem tempo final do programa
    totalseg = fim.tv_sec - inicio.tv_sec;
//diferenca em segundos
    totalmicroseg = fim.tv_usec - inicio.tv_usec; //diferenca em microsegundos
/*se a diferenca em microssegundos for negativa, os segundos terao que
emprestar uma unidade; 1 microseg = 10E-6 s. */
    if (totalmicroseg < 0) {
        totalmicroseg += 1000000;
        totalseg -= 1;
    };
    printf("\n");//ai
    printf("***************************************************************\n");
    printf("Tempo total: %ld segundos e %ld microssegundos.\n", totalseg, totalmicroseg);
    printf("***************************************************************\n");
    printf("\n");
    printf("============= SOLUÇÃO FORÇA BRUTA =============\n");//vendo que merda tá rolando
    gettimeofday(&inicio, NULL);
    bruto_solution(itens);
    gettimeofday(&fim, NULL);
//obtem tempo final do programa
    totalseg = fim.tv_sec - inicio.tv_sec;
//diferenca em segundos
    totalmicroseg = fim.tv_usec - inicio.tv_usec; //diferenca em microsegundos
/*se a diferenca em microssegundos for negativa, os segundos terao que
emprestar uma unidade; 1 microseg = 10E-6 s. */
    if (totalmicroseg < 0) {
        totalmicroseg += 1000000;
        totalseg -= 1;
    }
    printf("\n");
    printf("***************************************************************\n");
    printf("Tempo total: %ld segundos e %ld microssegundos.\n", totalseg, totalmicroseg);
    printf("***************************************************************\n");
    printf("\n");
    return (0);
}
