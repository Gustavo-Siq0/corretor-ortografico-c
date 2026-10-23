#ifndef DICIONARIO_H
#define DICIONARIO_H

typedef struct {
    char palavra[50];
    char significado[200];
} Palavra;

typedef struct {
    char palavra[50];
    char significado[200];
    int distancia;
} Resultado;

// Preenche o vetor com as palavras e retorna quantas foram carregadas
int carregarDicionario(Palavra *dic);

#endif
