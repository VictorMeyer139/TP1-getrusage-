#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int peso, valor;
}ITEM;

int myPow(int n1, int n2){//Faz n1 elvado a n2
    int resultado = 1;
    while(n2 > 0){
        resultado = resultado*n1;
        n2--;
    }
    return resultado;
}

int quantidade_de_caracteres(const char *string){
    int i = 0;
    while(string[i] != '\0'){
        i++;
    }
    return i;
}

FILE *abre_arquivo(char *nome_arquivo){
    //Essa função só serve para abrir o arquivo solicitado
    FILE *f;
    f = fopen(nome_arquivo, "r");
    if(f == NULL){
        printf("Impossível abrir o arquivo solicitado");
        exit(0);
    }
    return f;
}

char *pega_linha(FILE *f, int linha_interesse) {
    char *linha;
    int cont = 1;
    linha = malloc(100*sizeof(char));
    while(fgets(linha, 100, f) != NULL){
        if(cont == linha_interesse){
            linha[quantidade_de_caracteres(linha)-1] = '\0';//Pra tirar o \n
            return linha;
        }
        cont++;
    }
    fclose(f);
    return NULL;
}

int converte_para_int(char *string){
    int qtde_char = quantidade_de_caracteres(string);
    int numero, number = 0, cont = 0;
    for (int i = qtde_char-1; i >= 0; --i) {
        numero = string[i] - 48;
        number += numero*myPow(10, cont);
        cont++;
    }
    return number;
}

ITEM *aloca_struct(int tamanho){
    return malloc(sizeof(ITEM)*tamanho);
}

char * encontra_o_peso_string(const char *string_line){
    char *s;
    int cont = 0, i;
    for (i = 0; string_line[i] != ' ' ; ++i) {//Esse for pra saber o tanto que tenho que alocar em s
        cont++;
    }
    s = malloc(cont*sizeof(char));
    for (i = 0; string_line[i] != ' '; ++i) {
        s[i] = string_line[i];
    }
    s[i] = '\0';
    return s;
}

char * encontra_o_valor_string(const char *string_line) {
    char *s;
    int cont = 0, pode_contar = 0, pode_copiar = 0, i, j;
    for (i = 0; string_line[i] != '\0' ; ++i) {
        if(pode_contar){
            cont++;
        }
        else if(string_line[i] == ' '){
            pode_contar = 1;
        }
    }
    s = malloc(cont* sizeof(char));
    for (j = i = 0; string_line[i] != '\0'; ++i) {
        if(string_line[i] == ' '){
            pode_copiar = 1;
        }
        else if(pode_copiar){
          s[j] = string_line[i];
          j++;
        }
    }
    s[j] = '\0';
    return s;
}

void preenche_struct(ITEM *itens, int tamanho_struct, FILE *f, char *nome_arquivo){//Aqui ainda não tá pronto, tem que terminar
    char *string_line, linha_interesse = 3, *string_numero_peso, *string_numero_valor;
    int numero_valor, numero_peso;
    for (int i = 0; i < tamanho_struct; ++i) {
        f = abre_arquivo(nome_arquivo);
        string_line = pega_linha(f, linha_interesse);
        linha_interesse++;
        string_numero_peso = encontra_o_peso_string(string_line);
        string_numero_valor = encontra_o_valor_string(string_line);
        numero_peso = converte_para_int(string_numero_peso);
        numero_valor = converte_para_int(string_numero_valor);
        itens[i].peso = numero_peso;
        itens[i].valor = numero_valor;
    }
}

void printa_struct(ITEM *itens, int tamanho){
    for (int i = 0; i <tamanho ; ++i) {
        printf("\n------------------\nPos = %d\nPeso = %d\nValor = %d\n------------------\n", i, itens[i].peso, itens[i].valor);
    }
}

int main() {
    ITEM *itens;
    FILE *file;
    char nome_arquivo[100];
    printf("Informe o nome do arquivo: ");
    scanf(" %[^\n]s", nome_arquivo);
    file = abre_arquivo(nome_arquivo);
    int tamanho_struct, capacidade_mochila;
    tamanho_struct = converte_para_int(pega_linha(file, 2));
    file = abre_arquivo(nome_arquivo);
    capacidade_mochila = converte_para_int(pega_linha(file, 1));
    printf("Tamanho da struct: %d\nCapacidade da mochila: %d\n", tamanho_struct, capacidade_mochila);
    itens = aloca_struct(tamanho_struct);//Alocando um array de ítens
    preenche_struct(itens, tamanho_struct, file, nome_arquivo);//Preenchendo o array de ítens
    printa_struct(itens, tamanho_struct);
    return 0;
}