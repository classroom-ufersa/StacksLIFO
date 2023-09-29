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
  - [Algumas Funções da TAD Lista Com Vetor](#algumas-funções-da-tad-pilhavet)
- [Pilha Com Lista](#pilha-com-lista)
  - [Descrição](#descrição-pilha-com-lista)
  - [Estrutura](#estrutura-pilha-com-lista)
  - [Vantagens](#vantagens-pilha-com-lista)
  - [Desvantagens](#desvantagens-pilha-com-lista)
  - [Algumas Funções da TAD Lista Dupla](#algumas-funções-da-tad-pilhalist)

## Introdução

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