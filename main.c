#include <stdio.h>
#include "Headers/pegar_do_arquivo.h"
#include "Headers/guloso_solution.h"
#include "Headers/bruto_solution.h"

int main(){
    ITEM *itens;
    itens = trata_as_parada_do_arquivo();//ítens é uma struct já alocada com os dados do arquivo
    printf("\n============= SOLUÇÃO GULOSA =============\n");
    guloso_solution(itens);
    printf("============= SOLUÇÃO FORÇA BRUTA =============\n");//vendo que merda tá rolando
    bruto_solution(itens);
    return 0;
}