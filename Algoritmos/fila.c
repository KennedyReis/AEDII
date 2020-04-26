#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct fila Fila;
typedef struct no No;

struct fila { No *inicio; No *fim;};
struct no { int tempo; No *prox;};

Fila *cria_fila()
{
	Fila *fi = malloc(sizeof *fi);
	assert(fi != NULL);
	fi->inicio = NULL;
	fi->fim = NULL;
}
void entra_na_fila(Fila *fi, int t)
{
	No *novo = malloc(sizeof *novo);
	assert(novo != NULL);
	novo->tempo = t;
	novo->prox = NULL;
	if(fi->inicio == NULL) fi->inicio = novo;
	else fi->fim->prox = novo;
	fi->fim = novo;
}
int fila_vazia(Fila *fi)
{
	return (fi->inicio == NULL);
}
int sai_da_fila(Fila *fi)
{
	if(fila_vazia(fi)) return -1;
	int aux = fi->inicio->tempo;
	No *p = fi->inicio;
	fi->inicio = p->prox;
	free(p);
	return aux;
}