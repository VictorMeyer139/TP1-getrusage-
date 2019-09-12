#include "../Headers/globais.h"
#include <stdio.h>
#include <stdlib.h>

FILE* abre_arquivo_escrita_bruto(){
    FILE *sol;
    sol = fopen("bruto_solution.txt","r+");
    if(sol == NULL){
        printf("Não foi possível abrir o arquivo texto da bruto_solution!!!\n");
        exit(2);
    }
    return sol;
}

int resposta_recursiva(ITEM *itens, int t_struct, int t_mochila) {
    int resposta1, resposta2, i = t_struct;
    if(t_struct == 0){
        return 0;
    }
    else{
        resposta1 = resposta_recursiva(itens, t_struct-1, t_mochila);
        if(itens[i].peso > t_mochila){
            return resposta1;
        }
        else{
            resposta2 = resposta_recursiva(itens, t_struct-1, t_mochila - itens[i].peso);
            if(resposta1 > resposta2){
                return resposta1;
            }
            return resposta2;
        }
    }
}

void bruto_solution(ITEM *itens){
    FILE *file;
    file = abre_arquivo_escrita_bruto();
    int resposta;
    resposta = resposta_recursiva(itens, tamanho_struct, capacidade_mochila);
    printf("%d\n", resposta);
    fclose(file);
}
