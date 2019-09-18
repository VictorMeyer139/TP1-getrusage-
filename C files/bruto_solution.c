#include "../Headers/globais.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {//Essa struct contém uma solução
    ITEM *itens;
    int soma_peso;
    int qtde_itens;
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

SOLUCAO encontra_melhor_solucao_do_numero_de_itens(ITEM *itens, int numero_de_itens){
    SOLUCAO solucao;
    solucao.qtde_itens = numero_de_itens;
    solucao.itens = malloc(numero_de_itens*sizeof(ITEM));
    solucao.itens[0] = itens[0];
    if(numero_de_itens == 1){
        for (int i = 0; i < tamanho_struct_item; ++i) {
            if(solucao.itens[0].valor/solucao.itens[0].peso < itens[i].valor/itens[i].peso){
                solucao.itens[0] = itens[i];
            }
        }
    }
    return solucao;
}

int soma_os_pesos(SOLUCAO s){
    int soma = 0;
    for (int i = 0; i < s.qtde_itens; ++i) {
        soma += s.itens[i].peso;
    }
    return soma;
}

int bruto(ITEM *itens){
    SOLUCAO melhor_solucao, melhor_solucao_do_numero_de_itens;
    melhor_solucao.soma_peso = 0;
    int numero_de_itens = 1;
    for (int i = 0; i < tamanho_struct_item; ++i) {
        melhor_solucao_do_numero_de_itens = encontra_melhor_solucao_do_numero_de_itens(itens, numero_de_itens);
        if(melhor_solucao.soma_peso < melhor_solucao_do_numero_de_itens.soma_peso){
            melhor_solucao = melhor_solucao_do_numero_de_itens;
        }
        numero_de_itens++;
    }
    melhor_solucao.soma_peso = soma_os_pesos(melhor_solucao);
    return melhor_solucao.soma_peso;
}

void bruto_solution(ITEM *itens){
    FILE *file;
    file = abre_arquivo_escrita_bruto();
    int resposta;
    resposta = bruto(itens);
    printf("%d\n", resposta);
    fclose(file);
}
