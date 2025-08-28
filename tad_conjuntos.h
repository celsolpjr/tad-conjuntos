#ifndef CONJUNTO_H
#define CONJUNTO_H

#define TAMANHO_UNIVERSO 100

typedef struct {
    int elementos[TAMANHO_UNIVERSO];
    int n_elementos;
} Conjunto;

// Cria um novo conjunto
Conjunto *criar_conjunto();

// Destroi um conjunto criado liberando a memória
void liberar_conjunto(Conjunto *c);

// Insere um novo elemento em um conjunto
int insere_elemento(Conjunto *c, int elemento);

// Imprime todos os elementos de um conjunto
void imprimir_elementos(Conjunto *c);

// Faz a união de dois conjuntos e retorna um novo conjunto
Conjunto *uniao(Conjunto *c1, Conjunto*c2);


#endif
