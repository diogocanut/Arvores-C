#include <stdio.h>
#include <stdlib.h>
#include "arvorebinaria.h"

int main()
{
    int escolha,escolha1,escolha2,i=0,*altura=0;
    char c;
    Arv *V; /*Vetor de arvores */

    V = malloc(20*sizeof(Arv));

 do{

    printf("\n\n1 - Criar arvore raiz vazia (maximo total de 20 arvores)\n");
    printf("2 - Adicionar novo nó\n");
    printf("3 - Lista elementos das raizes das arvores criadas\n");
    printf("4 - Liberar todas as arvores\n");
    printf("5 - Print postorder\n");
    printf("6 - Print inorder\n");
    printf("7 - Print preorder\n");
    printf("8 - Checa vazia\n");
    printf("9 - Busca por elemento\n");
    printf("10 - Remove folha\n");
    printf("11 - Determinar altura\n");
    printf("12 - Altura de um dado no\n");
    printf("13 - Checar se duas arvores são iguais\n");
    printf("15 - Sair\n");
    scanf("%d",&escolha);

    switch(escolha){
    case 1:
        printf("Digite o caracter que deseja adicionar na raiz\n");

        scanf(" %c",&c);
        if(i<20){
            V[i] = cria_arvore(c,NULL,NULL);
            printf("Nova arvore criada, seu numero sequencial para acesso é %d\n",i);
            i++;
        }
        else printf("limite de arvores raizes estorado\n");
        break;

    case 2:
        printf("Digite o caracter que deseja adicionar ao novo nó\n");
        scanf(" %c",&c);
        printf("Digite o numero da arvore em que deseja inserir o novo nó\n");
        scanf("%d",&escolha1);
        if(V[escolha1]!=NULL){
            inserir(&(V[escolha1]),c);
        }else printf("Arvore nula, checar o numero digitado\n");
        break;


    case 3:
        for(i=0;i<20;i++){

            if(V[i]!=NULL) printf("\nArvore numero: %d raiz: %c",i,V[i]->info);

            }
            break;

    case 4:
        escolha1 = 0;
        while(V[escolha1]!=NULL){
            libera_arvore(V[escolha1]);
            V[escolha1] = NULL;
            escolha1++;
        }
    case 5:
        printf("Digite o numero da arvore em que deseja printar\n");
        scanf("%d",&escolha1);
        if(V[escolha1]!=NULL){
            print_postorder(V[escolha1]);

        }
        break;

    case 6:
        printf("Digite o numero da arvore em que deseja printar\n");
        scanf("%d",&escolha1);
        if(V[escolha1]!=NULL){
            print_inordem(V[escolha1]);

        }
        break;

    case 7:
        printf("Digite o numero da arvore em que deseja printar\n");
        scanf("%d",&escolha1);
        if(V[escolha1]!=NULL){
            print_preorder(V[escolha1]);

        }
        break;

    case 8:
        printf("Digite o numero da arvore em que deseja verificar\n");
        scanf("%d",&escolha1);
        if(arvore_vazia(V[escolha1])){
           printf("Vazia\n");

        }else printf("Nao vazia\n");
        break;

    case 9:
        printf("Digite o numero da arvore em que deseja realizar a busca\n");
        scanf("%d",&escolha1);
        printf("digite o caracter pelo qual deseja buscar\n");
        scanf(" %c",&c);
        if(!arvore_vazia(V[escolha1])){
           if(busca(V[escolha1],c)){
            printf("Encontrou!\n");
           }else printf("Nao encontrou!\n");

        }else printf("Vazia\n");
        break;

    case 10:
        printf("Digite o numero da arvore em que deseja remover a folha\n");
        scanf("%d",&escolha1);
        printf("digite o caracter da folha que deseja remover\n");
        scanf(" %c",&c);
        if(!arvore_vazia(V[escolha1])){
           if(remove_folha(&(V[escolha1]),c)){
                printf("Removida!\n");
           }else printf("Nao removida!\n");

        }else printf("Vazia\n");
        break;

    case 11:
        printf("Digite o numero da arvore em que deseja verificar altura\n");
        scanf("%d",&escolha1);
        if(!arvore_vazia(V[escolha1])){
            printf("A arvore possui altura %d\n", altura_arv(V[escolha1]));
        }else printf("Arvore vazia\n");
        break;

    case 12:
        printf("Digite o numero da arvore em que deseja verificar altura\n");
        scanf("%d",&escolha1);
        printf("digite o caracter do nó em que deseja verificar altura\n");
        scanf(" %c",&c);
        if(!arvore_vazia(V[escolha1])){

            printf("A arvore possui altura %d\n", altura_no(V[escolha1],c,0));
        }else printf("Arvore vazia\n");
        break;

    case 13:
        printf("Digite o numero das arvores que deseja comparar\n");
        scanf("%d %d",&escolha1,&escolha2);

        if(!((arvore_vazia(V[escolha1])) || (arvore_vazia(V[escolha2])))){

            if(iguais(V[escolha1],V[escolha2])==0) printf("Iguais\n");
            else printf("Diferentes\n");

        }else printf("Uma ou as duas arvores estão vazias\n");
        break;
    }

  }while(escolha!=15);











    return 0;
}
