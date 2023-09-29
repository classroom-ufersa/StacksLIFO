#include "pilhavet.c"

int main()
{
    Pilha *p = pilha_cria();

    // Testando pilha_push para adicionar elementos à pilha
    pilha_push(p, 10.5);
    pilha_push(p, 20.3);
    pilha_push(p, 30.7);

    printf("Elementos na pilha após a inserção:\n");
    pilha_imprime(p);

    // Testando pilha_pop para remover elementos da pilha
    float valor = pilha_pop(p);
    printf("Elemento removido da pilha: %.1f\n", valor);

    printf("Elementos na pilha após a remoção:\n");
    pilha_imprime(p);

    // Testando pilha_vazia
    if (pilha_vazia(p))
        printf("A pilha está vazia.\n");
    else
        printf("A pilha não está vazia.\n");

    // Testando pilha_libera para liberar a memória alocada
    pilha_libera(p);

    return 0;
}
