#include "../Headers/globais.h"
#include <stdio.h>
#include <stdlib.h>
void vetor_relacao_valor_peso(ITEM *itens){
    float *vetor_relacao_valor_peso;
    vetor_relacao_valor_peso = malloc(sizeof(int)*tamanho_struct);
    for (int i = 0; i < tamanho_struct; ++i) {
        vetor_relacao_valor_peso[i] = (float) itens[i].valor/itens[i].peso;
        printf("V[%d] = %f\n", i, vetor_relacao_valor_peso[i]);
    }
}
