#include "levenshtein.h"

int minimo(int a, int b, int c){
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int levenshteinMemo(char *p1, char *p2, int tam1, int tam2, int memo[][50]){
    // Se alguma tiver vazia, o custo de insercao vai ser o tamanho da outra.
    if(tam1 == 0) return tam2;
    if(tam2 == 0) return tam1;

    // Se ja calculamos esse par de tamanhos, reaproveita o resultado
    if(memo[tam1][tam2] != -1) return memo[tam1][tam2];

    // Comparar ultimo caractere de cada string, para definicao do custo
    int custo;
    if(p1[tam1 - 1] == p2[tam2 - 1]){
        custo = 0;
    }else{
        custo = 1;
    }

    // Regras de custo juntamente com recursividade
    int remocao = levenshteinMemo(p1, p2, tam1 - 1, tam2, memo) + 1;
    int insercao = levenshteinMemo(p1, p2, tam1, tam2 - 1, memo) + 1;
    int substituicao = levenshteinMemo(p1, p2, tam1 - 1, tam2 - 1, memo) + custo;

    // Guarda na matriz e retorna o menor custo
    memo[tam1][tam2] = minimo(remocao, insercao, substituicao);
    return memo[tam1][tam2];
}

// Mantem a assinatura pedida no enunciado; prepara a matriz e chama a recursiva
int levenshtein(char *p1, char *p2, int tam1, int tam2){
    int memo[50][50];
    for(int i = 0; i < 50; i++){
        for(int j = 0; j < 50; j++){
            memo[i][j] = -1;
        }
    }
    return levenshteinMemo(p1, p2, tam1, tam2, memo);
}
