#include <stdlib.h>
#include <stdio.h>

#define MAX 90//esse #define, define o tamanho da sua lista

//tipo de dado que eh armazenado na lista
typedef struct{
    int a;
    char b;
}ELEM; 

//struct da lista 
typedef struct lista{
    int qtd;
    ELEM vector[MAX];
}LISTA;

//Assinaturas das funcoes
LISTA *cria_lista();
int lista_cheia(LISTA *l);
int lista_vazia(LISTA *l);
int insere(LISTA *l, ELEM x);
int remover(LISTA *l, ELEM x);
int busca(LISTA *l, ELEM x);
void impressao(LISTA *l);
void destroi_lista(LISTA *l);