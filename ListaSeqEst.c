#include "ListaSeqEst.h"

/*Funcao cria_lista,retorna um ponteiro, para isso eh criado um ponteiro dentro da funcao, em seguida ele 
 eh alocado na memoria e receber quantidade de elementos receber 0;*/
LISTA *cria_lista(){
    LISTA *l;
    l = (LISTA*) malloc (sizeof(LISTA));
    l->qtd = 0;
    
    return l;
}

/*Na funcao destroi_lista a l->qtd receber 0, reniciado a lista*/
void destroi_lista(LISTA *l){
    l->qtd = 0;
    return;
}

/*Funcao verificar se a funcao esta cheia, para isso ele verificar se a 
 quantidade de elementos da lista eh igual a MAX,  caso seja verdade retorna 1, do contrario
 retorna 0*/

int lista_cheia(LISTA *l){
    if(l->qtd == MAX){
        return 1;//erro
    }
    else{
        return 0;
    }
}

/*Funcao verificar se a funcao esta vazia, para isso ele verificar se a 
 quantidade de elementos da lista eh igual a 0,  caso seja verdade retorna 1, do contrario
 retorna 0*/
int lista_vazia(LISTA *l){
    if(l->qtd == 0){
        return 1;//erro
    }
    else{
        return 0;
    }
}

/*Na funcao insere  e primeiro verificado se a funcao esta cheia, caso esteja a funcao retorna 0, 
caso contrario o vetor receber a variavel, na posicao que eh dado pelo valor da da quantidade atual de elementos
 sem o novo elemento, ea  quantidade de elementos eh incrementado*/
int insere(LISTA *l, ELEM x){
    if(lista_cheia == 1){
        return 0;
    }
    l->vector[l->qtd] = x;
    l->qtd++;
    
    return 1;
}
/*Na funcao remover, primeiro eh verificado se a lista esta vazia caso esteja ela retorna 0 , como erro,
caso contrario a funcao inicia a busca pelo elemento na lista, para remove-lo;*/
int remover(LISTA *l, ELEM x){
    if(lista_vazia == 1){
        return 0;
    }
    int i;
    //busca do elemento a ser removido
    for(i=0;i<l->qtd;i++){
        if(l->vector[i].a == x.a){
           int k;
           //shift da remocao
           for(k=i;k<l->qtd-i;k++){
               l->vector[k] = l->vector[k+1];
           }
           l->qtd--;
           return 1;//a remocao foi realizada com sucesso
        }
    }
    return 0;//erro caso o elemento nao seja encontrado
}


/*Na funcao de busca , primeiro eh verificado se a funcao esta vazia caso esteja ele retorna 0,caso
contrario ele inicia a busca se o elemento for encontrado a funcao retorna 1, caso contrario ela retorna0;
*/
int busca(LISTA *l, ELEM x){
     if(lista_vazia == 1){
        return 0;//erro
    }
    int i;
    for(i=0;i<l->qtd;i++){
        if(l->vector[i].a == x.a){
           return 1;//elemento foi encontrado
           /*Obs: caso voce queria que retorne a posicao do elemento, retorne i em vez de 1*/
        }
    }
    return 0;//elemento nao encontrado
}

/*Funcao de impressao, eh utilizado um estrutura de laco(for) para
impressao de posicao por posicao*/
void impressao(LISTA *l){
    int i;
    for(i=0;i<l->qtd;i++){
        printf("%d %c\n",l->vector[i].a,l->vector[i].b);
    }
    return;
}
