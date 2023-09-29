# Pilhas (Stacks - last in, first out)

## Tópicos
- [Introdução](#introdução)
- [Como Baixar, Compilar e Executar Código de Repositório via Terminal](#baixar-compilar-e-executar-código-de-repositório-via-terminal)
- [Porque Utilizar TADS?](#porque-utilizar-uma-tad)
- [Pilha Com Vetor](#pilha-com-vetor)
  - [Descrição](#descrição-pilha-com-vetor)
  - [Estrutura](#estrutura-pilha-com-vetor)
  - [Vantagens](#vantagens-pilha-com-vetor)
  - [Desvantagens](#desvantagens-pilha-com-vetor)
  - [Algumas Funções da TAD Pilha Com Vetor](#algumas-funções-da-tad-pilhavet)
- [Pilha Com Lista](#pilha-com-lista)
  - [Descrição](#descrição-pilha-com-lista)
  - [Estrutura](#estrutura-pilha-com-lista)
  - [Vantagens](#vantagens-pilha-com-lista)
  - [Desvantagens](#desvantagens-pilha-com-lista)
  - [Algumas Funções da TAD Pilha Com Lista](#algumas-funções-da-tad-pilhalist)

## Introdução

Uma pilha é uma estrutura de dados linear que segue uma abordagem de "último a entrar, primeiro a sair" (LIFO - Last-In, First-Out). Em outras palavras, o último elemento adicionado à pilha é o primeiro a ser removido. Isso faz com que a pilha seja uma estrutura de dados muito útil em muitos contextos, especialmente quando você precisa manter o controle da ordem de elementos.

A estrutura de dados de pilha pode ser visualizada como uma pilha de pratos, onde você adiciona ou remove pratos apenas no topo da pilha. Para adicionar um novo elemento, você o coloca no topo da pilha, e para remover um elemento, você retira o elemento que está no topo.
## Baixar, Compilar e Executar Código de Repositório via Terminal

### Pré-requisitos

Antes de prosseguir, certifique-se de que você tenha o seguinte instalado no seu sistema:

- **Git**: Para baixar o repositório.
- **Compilador C**: Como o GCC, para compilar o código.
- **Terminal**: Para executar comandos.

### Passo 1: Clone o Repositório

Abra seu terminal e execute o seguinte comando para clonar o repositório do GitHub:

```bash
git clone "https://github.com/classroom-ufersa/StacksLIFO.git"
```

### Passo 2: Navegue para o Diretório do Repositório em que está a TAD que quer compilar

Use o comando `cd` para navegar para o diretório do repositório que acabou de ser clonado ou simplesmente abra com terminal integrado na pasta.

```bash
cd PilhaLista
```

### Passo 3: Compile o Código

Compile-o usando o compilador C. Por exemplo:

```powershell
gcc -o main main.c
```

### Passo 4: Execute o Programa

Agora, você pode executar o programa compilado usando o comando `./` no terminal:

```bash
./main
```

## Porque utilizar uma TAD?

- **Reutilização de Código:** Uma vez que as operações da pilha estão encapsuladas no TAD Pilha, elas podem ser reutilizadas em diferentes partes do código ou em projetos diferentes sem a necessidade de reimplementação. Isso economiza tempo e esforço.

- **Encapsulamento:** O TAD Pilha permite encapsular a implementação da pilha. Isso significa que você pode mudar a implementação interna da pilha sem afetar o código que a utiliza.

- **Ocultação de Complexidade:** A implementação de estruturas de dados como pilhas pode ser complexa, envolvendo alocação de memória, gerenciamento de ponteiros e manipulação de elementos. O TAD Pilha oculta essa complexidade, tornando mais fácil para outros desenvolvedores usar a pilha sem se preocupar com os detalhes complicados.

- **Padronização:** O TAD Pilha estabelece um conjunto padrão de operações e nomes para trabalhar com pilhas. Isso torna o código mais consistente e fácil de entender para qualquer desenvolvedor.

- **Facilita a Depuração:** Se ocorrer um erro em uma operação da pilha, é mais fácil depurar (encontrar o erro) quando você tem uma interface clara e bem definida para a pilha. Você pode isolar o problema mais facilmente.

- **Documentação:** O TAD Pilha serve como documentação clara das operações suportadas pela pilha. Isso ajuda os desenvolvedores a entender como usar a pilha corretamente.

## Pilha Com Vetor

### Descrição Pilha Com Vetor

- Uma pilha com vetores em C é uma estrutura de dados que pode ser descrita da seguinte forma:

  - Uma pilha é uma estrutura de dados que segue o princípio "last-in, first-out" (LIFO), o que significa que o último elemento adicionado à pilha é o primeiro a ser removido.

  - Para implementar uma pilha com vetores em C, você utiliza um vetor (array) para armazenar os elementos da pilha. Você também precisa de um índice que aponta para o topo da pilha, ou seja, a posição do último elemento adicionado.

  ![Pilha vet](https://github.com/classroom-ufersa/StacksLIFO/Img/pilhavet.png)

**imagem tirada do site:** [UFRJ](https://www.cos.ufrj.br/~rfarias/cos121/pilhas.html)
### Estrutura Pilha Com Vetor

Estrutura `struct pilha` 

```c
struct pilha
{
    float *data; 
    int size;  
    int capacity; 
};
```

- `float *data`:Este é um ponteiro para um vetor de elementos da pilha. Ele aponta para a área de memória onde os elementos da pilha são armazenados. Os elementos da pilha são do tipo float, porém você pode adaptá-lo para qualquer tipo, inclusive para armazenar structs como alunos.

- `int size`: Este membro representa o tamanho atual da pilha, ou seja, o número de elementos atualmente armazenados na pilha. Inicialmente, quando a pilha é criada, `size` é geralmente definido como 0, indicando que a pilha está vazia.

- `int capacity`: O membro `capacity` representa a capacidade máxima do vetor que armazena os elementos da pilha. Ele define o número máximo de elementos que a pilha pode conter antes de ficar cheia. É importante gerenciar esse valor para evitar estouro de vetor.

### Vantagens de uma Pilha com Vetor:

1. **Simplicidade**: Pilhas com vetores são fáceis de implementar e entender. A lógica de inserção (push) e remoção (pop) é direta.

2. **Eficiência de Acesso**: O acesso aos elementos de uma pilha com vetor é rápido, já que os elementos são armazenados em uma estrutura de dados contígua na memória.

3. **Espaço de Memória Fixo**: A pilha com vetor tem um tamanho máximo fixo definido pela capacidade do vetor. Isso pode ser benéfico quando se deseja limitar o consumo de memória.

4. **Apropriado para Uso Limitado**: Para casos em que o número máximo de elementos na pilha é conhecido antecipadamente, uma pilha com vetor pode ser a escolha certa.

### Desvantagens de uma Pilha com Vetor:

1. **Tamanho Fixo**: O tamanho da pilha é fixo, o que significa que, se você atingir a capacidade máxima, não poderá adicionar mais elementos, a menos que aloque um vetor maior e copie os elementos existentes.

2. **Desperdício de Memória**: Se a capacidade do vetor for definida muito grande, pode ocorrer desperdício de memória, especialmente se a pilha não estiver sendo totalmente utilizada.

3. **Overflows**: É crucial gerenciar corretamente a pilha para evitar estouro (overflow). Essa responsabilidade recai sobre o programador de ter que reallocar.

4. **Ineficiente para Tamanhos Variáveis**: Se a pilha precisa acomodar um número variável de elementos, uma estrutura de dados dinâmica, como uma lista encadeada, pode ser mais eficiente, pois pode crescer ou diminuir conforme necessário.

### **Algumas funções da TAD pilhavet**

### pilha_cria

**Descrição:** Esta função cria uma nova pilha alocando memória para a estrutura da pilha e o vetor de dados associado. Ela define a capacidade inicial da pilha.

**Código:**

```c
Pilha *pilha_cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->data = (float *)malloc(d * sizeof(float));
    p->size = 0;
    p->capacity = d;
    return p;
}
```

**Exemplo de Uso:**

```c
Pilha *minhaPilha = pilha_cria();
```

### pilha_push

**Descrição:** Esta função insere um elemento no topo da pilha. Se a capacidade da pilha for excedida, o vetor de dados é redimensionado para acomodar mais elementos.

**Código:**

```c
void pilha_push(Pilha *p, float v)
{
    if (p->size == p->capacity)
    {
        p->capacity++;
        p->data = (float *)realloc(p->data, p->capacity * sizeof(float));
    }
    p->data[p->size] = v;
    p->size++;
}
```

**Exemplo de Uso:**

```c
pilha_push(minhaPilha, 42.5);
```

### pilha_pop

**Descrição:** Esta função remove e retorna o elemento do topo da pilha. Ela também verifica se a pilha está vazia ou nula antes de tentar desempilhar.

**Código:**

```c
float pilha_pop(Pilha *p)
{
    if (p == NULL || pilha_vazia(p))
    {
        printf("Erro: Pilha vazia ou nula!\n");
        exit(1);
    }
    return p->data[--p->size];
}
```

**Exemplo de Uso:**

```c
float elemento = pilha_pop(minhaPilha);
```

### Função pilha_vazia

**Descrição:** Esta função verifica se a pilha está vazia, retornando 1 se estiver vazia ou 0 caso contrário.

**Código:**

```c
int pilha_vazia(Pilha *p)
{
    return (p->size == 0);
}
```

**Exemplo de Uso:**

```c
if (pilha_vazia(minhaPilha)) {
    printf("A pilha está vazia.\n");
}
```

### pilha_libera

**Descrição:** Esta função libera a memória alocada para a pilha, incluindo o vetor de dados e a própria estrutura da pilha.

**Código:**

```c
void pilha_libera(Pilha *p)
{
    free(p->data);
    free(p);
}
```

**Exemplo de Uso:**

```c
pilha_libera(minhaPilha);
```

### pilha_imprime

**Descrição:** Esta função imprime os elementos da pilha, se houver elementos presentes.

**Código:**

```c
void pilha_imprime(Pilha *p)
{
    int i;
    if (p->size == 0)
        printf("A pilha está vazia.\n");
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
```

**Exemplo de Uso:**

```c
pilha_imprime(minhaPilha);
```
## Pilha Com Lista

### Descrição Pilha Com Lista

### Estrutura Pilha Com Lista

### Vantagens Pilha Com Lista

### Desvantagens Pilha Com Lista

### **Algumas funções da TAD pilhalist**