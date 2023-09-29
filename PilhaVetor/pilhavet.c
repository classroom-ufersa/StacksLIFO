// Arquivo "pilha.c"
#include "pilhavet.h"

#define d 10 // Capacidade inicial do vetor

struct pilha
{
    float *data; 
    int size;  
    int capacity; 
};

Pilha *pilha_cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->data = (float *)malloc(d * sizeof(float));
    p->size = 0;
    p->capacity = d;
    return p;
}

void pilha_push(Pilha *p, float v)
{
    if (p->size == p->capacity)
    {
        p->capacity++; // adicionando mais espaço no vetor
        p->data = (float *)realloc(p->data, p->capacity * sizeof(float));
    }
    p->data[p->size] = v;
    p->size++;
}

float pilha_pop(Pilha *p)
{
    if (p == NULL)
    {
        printf("Pilha vazia!");
        exit(1);
    }
    return p->data[--p->size]; // retornando o ultimo item e ja atualizando o tamanho atual da pilha
}

int pilha_vazia(Pilha *p)
{
    return (p->size == 0);
}

void pilha_libera(Pilha *p)
{
    free(p->data);
    free(p);
}

void pilha_imprime(Pilha *p)
{
    int i;
    if (p->size == 0)
        printf("A pilha esta vazia.\n");
    else
    {
        printf("Pilha: \" ");
        for (i = 0; i < p->size; i++)
        {
            printf("%.1f ", p->data[i]);
        }
        printf("\"\n");
    }
}
