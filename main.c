#include <stdio.h>
#include <stdlib.h>
#include "Headers/pegar_do_arquivo.h"

int main() {
    ITEM *itens;
    itens = trata_as_parada_do_arquivo();
    printa_struct(itens, 4);
    return 0;
}