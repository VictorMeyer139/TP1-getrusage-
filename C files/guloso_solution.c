#include "../Headers/globais.h"
#include <stdio.h>
#include <stdlib.h>

void ordenar(ITEM *itens){
    ITEM aux;
    for (int i = 0; i < tamanho_struct; ++i) {
        for (int j = i+1; j < tamanho_struct; ++j) {
            if(itens[j].valor/itens[j].peso > itens[i].valor/itens[i].peso){
                aux = itens[j];
                itens[j] = itens[i];
                itens[i] = aux;
            }
        }
    }
}

void guloso_solution(ITEM *itens){
    FILE *sol;
    sol = fopen("guloso_solution.txt","r+");
    if(sol == NULL){
        printf("Não foi possível abrir o arquivo texto da guloso_solution!!!\n");
        exit(2);
    }
    int soma_p = 0, soma_aux;
    ordenar(itens);
    for(int i = 0; soma_aux <= capacidade_mochila || i < tamanho_struct; i++) {
        soma_aux = soma_p + itens[i].peso;
        if(soma_aux <= capacidade_mochila) {
            soma_p += itens[i].peso;
            fprintf(sol,"Número do item: %d - Peso: %d Valor: %d\n", itens[i].id, itens[i].peso, itens[i].valor);
        }
    }
    printf("%d\n", soma_p);
    fclose(sol);
}
