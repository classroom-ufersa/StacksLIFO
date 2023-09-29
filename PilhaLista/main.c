#include "pilhalist.c"

int main()
{
    Pilha *p = pilha_cria();

    // Testando pilha_push para adicionar elementos à pilha
    pilha_push(p, 7.5);
    pilha_push(p, 27.3);
    pilha_push(p, 37.7);

    printf("Elementos na pilha apos a insercao:\n");
    pilha_imprime(p);

    // Testando pilha_pop para remover elementos da pilha
    float valor = pilha_pop(p);
    printf("Elemento removido da pilha: %.1f\n", valor);

    printf("Elementos na pilha apos a remocao:\n");
    pilha_imprime(p);

    // Testando pilha_vazia
    if (pilha_vazia(p))
        printf("A pilha esta vazia.\n");
    else
        printf("A pilha nao esta vazia.\n");

    // Testando pilha_libera para liberar a memória alocada
    pilha_libera(p);

    return 0;
}