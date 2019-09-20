#include <stdio.h>
#include "Headers/pegar_do_arquivo.h"
#include "Headers/guloso_solution.h"
#include "Headers/bruto_solution.h"

#include <sys/time.h>
#include <sys/resource.h>
/* Teste da medicao do tempo*/
int main(int argc, char *argv[])
{
    ITEM *itens;
    itens = trata_as_parada_do_arquivo();//ítens é uma struct já alocada com os dados do arquivo
    printf("\n============= SOLUÇÃO GULOSA =============\n");
// Variaveis relacionadas com a medicao do tempo:
    int who = RUSAGE_SELF; //man: information shall be returned about resources used by thecurrent process
    struct rusage usage;
    long utotalmicroseg, utotalseg; //tempo usuario: tempo que a CPU gasta executando o programa
    long stotalmicroseg, stotalseg; //tempo sistema: tempo que a CPU gasta executando chamadas
//de sistemas para o programa
    guloso_solution(itens);
    getrusage(who, &usage);
//tempo de usuário na CPU
    utotalseg = usage.ru_utime.tv_sec; //segundos
    utotalmicroseg = usage.ru_utime.tv_usec; //microsegundos
//tempo de sistema na CPU
    stotalseg = usage.ru_stime.tv_sec; //segundos
    stotalmicroseg = usage.ru_stime.tv_usec; //microsegundos
    printf ("\n");
    printf ("***************************************************************\n");
    printf ("Tempo de usuario: %ld segundos e %ld microssegundos.\n", utotalseg, utotalmicroseg);
    printf ("Tempo de sistema: %ld segundos e %ld microssegundos.\n", stotalseg, stotalmicroseg);
    printf ("***************************************************************\n");
    printf ("\n");

    utotalseg = utotalmicroseg = stotalmicroseg = stotalseg = 0;
    printf("\n============= SOLUÇÃO BRUTA =============\n");
    bruto_solution(itens);
    getrusage(who, &usage);
//tempo de usuário na CPU
    utotalseg = usage.ru_utime.tv_sec; //segundos
    utotalmicroseg = usage.ru_utime.tv_usec; //microsegundos
//tempo de sistema na CPU
    stotalseg = usage.ru_stime.tv_sec; //segundos
    stotalmicroseg = usage.ru_stime.tv_usec; //microsegundos
    printf ("\n");
    printf ("***************************************************************\n");
    printf ("Tempo de usuario: %ld segundos e %ld microssegundos.\n", utotalseg, utotalmicroseg);
    printf ("Tempo de sistema: %ld segundos e %ld microssegundos.\n", stotalseg, stotalmicroseg);
    printf ("***************************************************************\n");
    printf ("\n");
    return(0);
}