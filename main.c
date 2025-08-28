#include <stdio.h>
#include "tad_conjuntos.h"

int main() {

    Conjunto *c1 = criar_conjunto();
    Conjunto *c2 = criar_conjunto();

    insere_elemento(c1, 5);
    insere_elemento(c1, 25);
    insere_elemento(c1, 45);

    insere_elemento(c2, 5);
    insere_elemento(c2, 44);
    insere_elemento(c2, 98);

    Conjunto *c3 = uniao(c1, c2);

    imprimir_elementos(c1);
    imprimir_elementos(c2);
    imprimir_elementos(c3);

    liberar_conjunto(c1);
    liberar_conjunto(c2);
    liberar_conjunto(c3);
    

    return 0;
}
