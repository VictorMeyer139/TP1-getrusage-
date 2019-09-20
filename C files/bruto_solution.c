#include "../Headers/globais.h"
#include <stdio.h>
#include <stdlib.h>
#include "../Headers/pegar_do_arquivo.h"

typedef struct {//Essa struct contém uma solução
    ITEM *itens;
    int soma_peso, soma_valor;
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

char *cont(char *b){
    for(int i = 0; ; i++)
        if(b[i] == 0){
            b[i] = 1;
            for(; i >= 0; i--) b[i-1] = 0;
            break;
        }
    return b;
}

void bruto_solution(ITEM *itens){
    FILE *file;
    file = abre_arquivo_escrita_bruto();
    SOLUCAO sol;
    sol.soma_peso = 0; sol.soma_valor = 0;
    sol.itens = malloc(sizeof(ITEM)*tamanho_struct_item);
    int soma_p = 1, soma_v = 0, *id, k = 0;
    id = malloc(sizeof(int)*tamanho_struct_item);
    char *b;
    b = calloc(tamanho_struct_item, sizeof(char));
    for(unsigned long long int i = 0; i < myPow(2, tamanho_struct_item); i++){
        b = cont(b);
        k = 0;
        for(int j = 0; j < tamanho_struct_item; j++){
            if(b[j] == 1){
                sol.soma_peso += itens[j].peso;
                sol.soma_valor += itens[j].valor;
                sol.itens[k] = itens[j];
                k++;
            }
        }
        if(sol.soma_peso > capacidade_mochila) continue;
        else if(sol.soma_valor > soma_v) {
            soma_p = sol.soma_peso;
            soma_v = sol.soma_valor;
            for(int i = 0; i < tamanho_struct_item; i++)
                id[i] = sol.itens[i].id;
        }
        sol.soma_valor = 0; sol.soma_peso = 0;
        for(int i = k; i < tamanho_struct_item; i++) {
            sol.itens[i].id = 0;
            sol.itens[i].peso = 0;
            sol.itens[i].valor = 0;
        }
    }
    for(int i = 0; i < k; i++)
        fprintf(file,"Número do item: %d - Peso: %d - Valor: %d\n", sol.itens[i].id, sol.itens[i].peso, sol.itens[i].valor);

    printf("%d %d\n", soma_p, soma_v);
}
