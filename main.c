#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "dicionario.h"
#include "levenshtein.h"

// Converte a string para minusculas, andando com um ponteiro
void paraMinusculas(char *s) {
    while (*s != '\0') {
        *s = tolower((unsigned char)*s);
        s++;
    }
}

// Calcula a distancia da entrada para cada palavra do dicionario
void buscar(char *entrada, Palavra *dic, int qtd, Resultado *res) {
    for (int i = 0; i < qtd; i++) {
        strcpy(res[i].palavra, dic[i].palavra);
        strcpy(res[i].significado, dic[i].significado);
        res[i].distancia = levenshtein(entrada, dic[i].palavra,
                                       strlen(entrada), strlen(dic[i].palavra));
    }
}

void ordenarResultados(Resultado resultados[], int quantidade) {
    int i, j, menor;
    Resultado temp;
    for (i = 0; i < quantidade - 1; i++) {
        menor = i;
        for (j = i + 1; j < quantidade; j++) {
            if (resultados[j].distancia < resultados[menor].distancia) {
                menor = j;
            }
        }
        if (menor != i) {
            temp = resultados[i];
            resultados[i] = resultados[menor];
            resultados[menor] = temp;
        }
    }
}

int main() {

    Palavra dic[100];
    int qtd = carregarDicionario(dic);

    char entrada[50];

    printf("========================================\n");
    printf("         CORRETOR ORTOGRAFICO\n");
    printf("========================================\n\n");

    // Repete a pergunta ate o usuario digitar alguma coisa
    do {
        printf("Digite uma palavra: ");
        fgets(entrada, 50, stdin);

        // Remove o \n que o fgets deixa no final
        entrada[strcspn(entrada, "\n")] = '\0';

        if (strlen(entrada) == 0) {
            printf("Entrada vazia. Tente de novo.\n");
        }
    } while (strlen(entrada) == 0);

    printf("Processando...\n\n");

    paraMinusculas(entrada);

    Resultado resultados[100];
    buscar(entrada, dic, qtd, resultados);

    ordenarResultados(resultados, qtd);

    int mostrar = 5;
    if (qtd < mostrar) mostrar = qtd;

    printf("As %d palavras mais semelhantes:\n", mostrar);
    printf("--------------------------------------------------\n");
    printf("%-12s %-10s %s\n", "Palavra", "Distancia", "Significado");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < mostrar; i++) {
        printf("%-12s %-10d %s\n", resultados[i].palavra,
               resultados[i].distancia, resultados[i].significado);
    }
    printf("--------------------------------------------------\n");

    return 0;
}
