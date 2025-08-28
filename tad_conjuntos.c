#include <stdlib.h>
#include <stdio.h>
#include "tad_conjuntos.h"

// Função para criar um conjunto
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

// Função para liberar a memória de um conjunto criado
void liberar_conjunto(Conjunto *c) {
    if (c != NULL) {
        free(c);
    }
}

// Função para inserir um elemento em um conjunto
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

// Função para imprimir os elementos de um conjunto
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
    printf("\n");
}

// Função para unir dois conjuntos em um novo
Conjunto *uniao(Conjunto *c1, Conjunto*c2) {
    if (c1 == NULL || c2 == NULL) {
        return NULL;
    }   

    Conjunto *uniao = (Conjunto*) malloc(sizeof(Conjunto));

    if (uniao == NULL) {
        return NULL;
    }

    for (int i = 0; i < TAMANHO_UNIVERSO; i++) {
        if (c1->elementos[i] || c2->elementos[i]) {
            uniao->elementos[i] = i;
        }
    }

    return uniao;

}




