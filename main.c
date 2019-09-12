#include <stdio.h>
#include <stdlib.h>
#include "Headers/pegar_do_arquivo.h"
#include "Headers/guloso_solution.h"

int main() {
    ITEM *itens;
    itens = trata_as_parada_do_arquivo();//ítens é uma struct já alocada com os dados do arquivo
    printa_struct(itens);
    printf("\n============= SOLUÇÃO GULOSA =============\n");
    vetor_relacao_valor_peso(itens);
    return 0;
}