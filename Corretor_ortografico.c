#include <stdio.h>
#include <string.h>

typedef struct {
    char palavra[50];
    char significado[200];
} Palavra;

typedef struct {
    char palavra[50];
    char significado[200];
    int distancia;
} Resultado;

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

int levenshtein(char *p1, char *p2, int tam1, int tam2){
    // Se alguma tiver vazia, o custo de inserção vai ser o tamanho da outra.
    if(tam1 == 0) return tam2;
    if(tam2 == 0) return tam1;

    // Comparar ultimo caractere de cada string, para definição do custo
    int custo;
    if(p1[tam1 - 1] == p2[tam2 - 1]){
        custo = 0;
    }else{
        custo = 1;    
    }

    // Regras de custo juntamente com recursividade
    int remocao = levenshtein(p1, p2, tam1 - 1, tam2) + 1;
    int insercao = levenshtein(p1, p2, tam1, tam2 - 1) + 1;
    int substituicao = levenshtein(p1, p2, tam1 - 1, tam2 - 1) + custo;

    // Retornar menor custo
    return minimo(remocao, insercao, substituicao);
}

int main() {

    printf("Try clicking the Run button.");


    
    return 0;
}
