#include "../Headers/globais.h"
#include <stdio.h>
#include <stdlib.h>
float* vetor_relacao_valor_peso(ITEM *itens){
    float *vetor_relacao_valor_peso;
    vetor_relacao_valor_peso = malloc(sizeof(int)*tamanho_struct);
    for (int i = 0; i < tamanho_struct; ++i) {
        vetor_relacao_valor_peso[i] = (float) itens[i].valor/itens[i].peso;
        //printf("V[%d] = %f\n", i, vetor_relacao_valor_peso[i]);
    }
    return vetor_relacao_valor_peso;
}
void guloso_solution(ITEM *itens){
    float *v, aux;
    v = vetor_relacao_valor_peso(itens);
    for(int i = 0; i < tamanho_struct; i++){
         for(int j = i+1; j < tamanho_struct; j++) {
             if (v[j] > v[i]){
                 aux = v[i];
                 v[i] = v[j];
                 v[j] = aux;
             }
         }
    }

}
