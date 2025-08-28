#ifndef CONJUNTO_H
#define CONJUNTO_H

#define TAMANHO_UNIVERSO 100

typedef struct {
    int elementos[TAMANHO_UNIVERSO];
    int n_elementos;
} Conjunto;

Conjunto *criar_conjunto();

void liberar_conjunto(Conjunto *c);

int insere_elemento(Conjunto *c, int elemento);

void imprimir_elementos(Conjunto *c);


#endif
