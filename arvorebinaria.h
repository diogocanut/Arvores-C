#include <stdio.h>

struct no {
    int info;
    struct no *sae;
    struct no *sad;
}; typedef struct no *Arv;

Arv cria_vazia();
Arv cria_arvore(int elem, Arv esq, Arv dir);
int arvore_vazia(Arv A);
void libera_arvore(Arv *A);
int busca(Arv A, int elem);
int remove_folha(Arv* A, int elem);
void localiza_pai(Arv A, int elem, Arv *pt, Arv *pai);
