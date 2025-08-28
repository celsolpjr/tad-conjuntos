#include <stdlib.h>
#include <stdio.h>
#include "tad_conjuntos.h"

Conjunto *criar_conjunto() {
    Conjunto *c = (Conjunto*) malloc(sizeof(Conjunto));   

    if (c == NULL) {
        return NULL;
    }

    for (int i = 0; i < TAMANHO_UNIVERSO; i++) {
        c->elementos[i] = 0;
    }
    
    c->n_elementos = 0;

    return c;

}

void liberar_conjunto(Conjunto *c) {
    if (c != NULL) {
        free(c);
    }
}

int insere_elemento(Conjunto *c, int elemento) {
    if (c == NULL) {
        return 0;
    }

    if (c->elementos[elemento] == 1) {
        return 1;
    }

    c->elementos[elemento] = 1;
    c->n_elementos++;
    return 1;
}

void imprimir_elementos(Conjunto *c) {
    if (c == NULL) {
        printf("Conjunto invalido!\n");
        return;
    }

    for (int i = 0; i < TAMANHO_UNIVERSO; i++) {
        if (c->elementos[i]) {
            printf("%d ", i);
        }
    }
}


