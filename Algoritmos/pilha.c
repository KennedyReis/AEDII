#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct pilha Pilha;
Pilha* pilha_cria();
void pilha_push(Pilha* p, int v);
int pilha_pop(Pilha* p);
int pilha_vazia(Pilha* p);
void pilha_libera(Pilha* p);

struct pilha
{
    int n;
    int dim;
    int *vet;
};

Pilha* pilha_cria()
{
    Pilha *p = malloc(sizeof p);
    assert(p != NULL);
    p -> dim = 1;
    p -> n = 0;
    
    int *v = malloc(p -> dim * sizeof v);
    assert(v != NULL);
    p -> vet = v;
    
    return p;
}

void pilha_push(Pilha* p, int v)
{
    if(p -> dim == p -> n)
    {
        p -> dim = 2 * p -> dim; 
        p -> vet = realloc(p -> vet, p -> dim * sizeof p -> vet);
        assert(p -> vet != NULL);
    }
    p -> vet[p -> n] = v;
    p -> n++;
}

int pilha_pop(Pilha* p)
{
    if(pilha_vazia(p))
    {
        return 1;
    }
    p -> n--;
    return p -> vet[p -> n];
}

int pilha_vazia(Pilha* p)
{
    if(p -> n == 0)
    {
        return 1; //pilha vazia
    }
    return 0; //pilha com elementos
}

void pilha_libera(Pilha* p)
{
    free(p -> vet);
    free(p);
}

















