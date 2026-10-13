# Corretor Ortográfico em C

Programa em linguagem C que recebe uma palavra digitada pelo usuário,
compara com um dicionário em português e apresenta as 5 palavras mais
semelhantes, com o significado e a distância de Levenshtein.

Trabalho da disciplina de **Programação Estruturada e Estrutura de Dados**.

## Como funciona

1. O usuário digita uma palavra (possivelmente com erro).
2. O programa calcula a distância de Levenshtein entre ela e cada palavra do dicionário.
3. Os resultados são ordenados pela menor distância.
4. As 5 palavras mais parecidas são exibidas com o significado.

## Conceitos utilizados

- Funções e funções recursivas (distância de Levenshtein)
- Ponteiros
- Manipulação de strings
- Estruturas (`struct`)
- Vetores e matrizes

## Estrutura do projeto

- `main.c`: fluxo principal e interface no terminal
- `levenshtein.c / .h`: função recursiva da distância
- `dicionario.c / .h`: base de palavras e significados

## Como compilar e executar

    gcc -Wall -o corretor main.c levenshtein.c dicionario.c
    ./corretor

## Equipe

- Alysson Teofilo
- Carlos Manoel Batista dos Santos
- Ezequiel Alves da Silva
- Francisco Henrique Oliveira Bezerra
- Gustavo Siqueira de Lima
- Leticia Ribeiro dos Santos
