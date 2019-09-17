#include "../Headers/globais.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {//Essa struct contém uma solução
    ITEM *itens;
}SOLUCAO;

FILE* abre_arquivo_escrita_bruto(){
    FILE *sol;
    sol = fopen("bruto_solution.txt","r+");
    if(sol == NULL){
        printf("Não foi possível abrir o arquivo texto da bruto_solution!!!\n");
        exit(2);
    }
    return sol;
}

int tem(ITEM item, ITEM *itens, int tamanho_itens){
    for (int i = 0; i < tamanho_itens; ++i) {
        if(item.id == itens[i].id){
            return 1;//return true
        }
    }
    return 0;//return false
}

void guarda_valores_em_aux(ITEM *aux, ITEM *itens_possiveis, int t){
    for (int i = 0; i < t; ++i) {
        aux[i] = itens_possiveis[i];
    }
}

SOLUCAO possibilidades_de_solucao_com_o_item_em_especifico(ITEM item, ITEM *itens){
    ITEM *itens_possiveis, *aux;
    int t = 1;//t contém o tamanho do ponteiro de itens_possiveis
    itens_possiveis = malloc(t*sizeof(ITEM));
    aux = malloc(t*sizeof(ITEM));
    itens_possiveis[0] = item;
    for (int i = 0; i < tamanho_struct_item; ++i) {
        if(!tem(item, itens_possiveis, t)){//se não tem um item dentro do meu vetor de ítens possíveis de tamanho t...
            guarda_valores_em_aux(aux, itens_possiveis, t);
        }
    }
}

int bruto(ITEM *itens){
    SOLUCAO *solucoes; //O ponteiro de soluções irá alocar todas as soluções possíveis
    solucoes = malloc(1* sizeof(solucoes));
    solucoes[0].itens = possibilidades_de_solucao_com_o_item_em_especifico(itens[0], itens);
//    int realocada = 0;
//    for (int i = 1; i < tamanho_struct_item; ++i) {
//        realocada++;
//    }
}

void bruto_solution(ITEM *itens){
    FILE *file;
    file = abre_arquivo_escrita_bruto();
    int resposta;
    resposta = bruto(itens);
    printf("%d\n", resposta);
    fclose(file);
}
