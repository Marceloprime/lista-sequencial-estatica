/*                                       LISTA SEQUENCIAL ESTATICA                                                 
Autor: Marcelo Augusto dos Reis 08/NOV/2018   Local: Universidade de Sao Paulo/ Sao Carlos/ SP                                                                         */
#include "ListaSeqEst.h"


//Abaixo esta um exemplo de uso de lista sequencial estatica;
int main(){
    LISTA *l;
    int i;
    
    l = cria_lista();
    ELEM x;
    
    // O tipo de dado ELEM receber um numero ate MAX e um caracter da tabela ASCII(por isso a soma de +33); 
    for(i=0;i<MAX;i++){
        x.a = i;
        x.b = i+33;
        //Isercao da lista
        if(insere(l,x) == 0){
            printf("ERRO\n");
        }
    }
    
    impressao(l);
    
    //Verifica se o elemento existe na lista
    x.a = 10;
    x.b = 'J';
    if(busca(l,x) == 1){
        printf("Elemento foi encontrado\n");
    }
    
    //Remocao de Elemento
    if(remover(l,x) == 1){
        printf("Removido com sucesso!\n");
    }
    
    //Destruicao da lista
    destroi_lista(l);
    return 0;
}
