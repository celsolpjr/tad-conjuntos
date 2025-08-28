#include <stdio.h>
#include "tad_conjuntos.h"

int main() {

    Conjunto *c1 = criar_conjunto();

    insere_elemento(c1, 5);
    insere_elemento(c1, 25);
    insere_elemento(c1, 45);

    imprimir_elementos(c1);

    liberar_conjunto(c1);
    

    return 0;
}
