#include <stdio.h>

struct no {
    char info;
    struct no *sae;
    struct no *sad;
}; typedef struct no *Arv;

Arv cria_vazia();
Arv cria_arvore(char elem, Arv esq, Arv dir);
int arvore_vazia(Arv A);
void libera_arvore(Arv A);
int busca(Arv A, char elem);
int remove_folha(Arv* A, char elem);
void localiza_pai(Arv A, char elem, Arv *pt, Arv *pai);
void print_preorder(Arv A);
void print_inordem(Arv A);
void print_postorder(Arv A);
int altura_arv(Arv A);
int altura_no(Arv A, char elem, int altura);

