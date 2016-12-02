#include <stdio.h>
#include <stdlib.h>
#include "arvorebinaria.h"

int main()
{
    Arv v666 = cria_arvore(3,NULL,NULL);
    libera_arvore(&v666);
    return 0;
}
