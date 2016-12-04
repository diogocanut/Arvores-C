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
        libera_arvore((*A)->sae);
        libera_arvore((*A)->sad);
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

int remove_folha(Arv* A, int elem) {

    Arv* pai, *ptnodo;

    if(*A == NULL)
        return 0;

    if((*A)->info == elem) {

        if((*A)->sae == NULL && (*A)->sad == NULL) {

            free(*A);
            *A = NULL;
            return 1;

        }

    }else {

        ptnodo = NULL;
        pai = NULL;
        Localiza_Pai(*A, elem, &ptnodo, &pai);

        if(ptnodo == NULL)
            return 0;
        if(ptnodo->sae == NULL && ptnodo->sad == NULL) {

            if(pai->sae == ptnodo) {

                free(pai->sae);
                pai->sae = NULL;

                return 1;
            }else {

                free(pai->sad);
                pai->sad = NULL;

                return 1;
            }

        }else {
            return 0;
        }

    }

}

void localiza_pai(Arv A, int elem, Arv *pt, Arv *pai) {

    if(A != NULL) {

        if(A->sae != NULL && A->sae->info == elem) {

            *pt  = A->sae;
            *pai = A;

             return;
        }

        if(A->sad != NULL && A->sad->info == elem) {

            *pt  = A->sad;
            *pai = A;

             return;
        }

        localiza_pai(A->sae, elem, pt, pai);
        if(*pt == NULL)
            localiza_pai(A->sad, elem, pt, pai);

    }else {
        return;
    }

}

int altura_arv(Arv A) {

    int max(int Esq, int Dir){
        if (Esq > Dir)
            return Esq;
        else return Dir;
    }


    if (Ptab == NULL)
        return 0;

    return(max(altura_arv(A->sae),altura_arv(A->sad))+1);
}

int altura_no(Arv A, int elem, int *altura){

    if(A->info == elem){
        return altura;
    }
    altura_no(A->sae,elem,altura++);

    altura=0;
    altura_no(A->sad,elem,altura++);

    return -1;

}

int iguais(Arv A1, Arv A2) {
    if(A1->info != A2->info){
        return -1;
    }
    iguais(A1->sae,A2->sae);
    iguais(A2->sad,A2->sad);

    return 0;


}





