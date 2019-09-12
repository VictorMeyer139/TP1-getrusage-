#include <stdio.h>
#include <stdlib.h>
#include "Headers/pegar_do_arquivo.h"

int main() {
    ITEM *itens;
    itens = trata_as_parada_do_arquivo();//ítens é uma struct já alocada com os dados do arquivo
    printa_struct(itens);
    return 0;
}