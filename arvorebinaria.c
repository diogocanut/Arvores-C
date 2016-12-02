#include "arvorebinaria.h"

Arv cria_vazia(){
    return NULL;

}


Arv cria_arvore(int elem, Arv esq, Arv dir){

    Arv novo = (Arv) malloc(sizeof(Arv));
    if(novo==NULL){
        return NULL;
    }

    novo->info = elem;
    novo->sae = esq;
    novo->sad = dir;

    return novo;

}


int arvore_vazia(Arv A){
    if(A==NULL){
        return 1;
    }
    else return 0;

}

void libera_arvore(Arv *A){
    if(*A!=NULL){
        free((*A)->sae);
        free((*A)->sad);
        free(*A);
    }
    *A = NULL;


}

int busca(Arv A, int elem){
    if(A==NULL){
        return 0;
    }

    if(A->info==elem){
        return 1;
    }

    busca(A->sae,elem);
    busca(A->sad,elem);
}

int remove_folha(Arv *A, int elem){
    if(*A==NULL){
        return 0;
    }

    if((*A)->info=elem){
        if((*A)->sad ==NULL && (*A)->sae

    }

}


void print_pre_ordem(Arv A){
    if(A){
        printf("%d\n",A->info);
        print_preorder(A->sae);
        print_preorder(A->sad);
    }

}

void print_inordem(Arv A){
    if(A){
        print_inorder(A->sae);
        printf("%d\n",A->info);
        print_inorder(A->sad);
    }
}

void print_post_ordem(Arv A){
    if(A){
        print_postorder(A->sae);
        print_postorder(A->sad);
        printf("%d\n",A->info);
    }
}

