# Desafio: Movimentação de Peças de Xadrez - Nível Aventureiro

Este programa é uma extensão do programa do nível [novato](../novato/README.md), adicionando a simulação do movimento do Cavalo utilizando loops aninhados em linguagem C, como parte do módulo de Introdução à Programação de Computadores.

## Descrição do Programa

O programa `movimentacao_xadrez_aventureiro.c` demonstra a aplicação prática das estruturas de repetição (`for`, `while` e `do-while`) e especialmente o uso de **loops aninhados** através da simulação de movimentos das peças de xadrez no tabuleiro.

### Peças Implementadas

O programa simula o movimento de quatro peças diferentes:

- **Torre**  
  Move-se em linha reta horizontalmente ou verticalmente.  
  **Simulação**: 5 casas para a direita  
  **Estrutura utilizada**: `for`

- **Bispo**  
  Move-se na diagonal.  
  **Simulação**: 5 casas na diagonal para cima e à direita  
  **Estrutura utilizada**: `while`

- **Rainha**  
  Move-se em todas as direções (horizontal, vertical e diagonal).  
  **Simulação**: 8 casas para a esquerda  
  **Estrutura utilizada**: `do-while`

- **Cavalo** ⭐ (Novo no nível aventureiro)  
  Move-se em "L": duas casas em uma direção e uma casa perpendicularmente.  
  **Simulação**: 2 casas para baixo e 1 casa para a esquerda  
  **Estrutura utilizada**: **Loops aninhados** (`for` externo e `while` interno)

### Destaque: Loops Aninhados

O movimento do Cavalo é implementado utilizando **loops aninhados**, demonstrando uma técnica avançada de programação:

- **Loop externo (`for`)**: Controla as etapas do movimento em "L" (movimento vertical e horizontal)
- **Loop interno (`while`)**: Dentro de cada etapa, controla quantas casas mover nessa direção específica

Esta implementação ilustra como combinar diferentes estruturas de repetição para resolver problemas mais complexos.

## Estrutura dos Arquivos

- **`movimentacao_xadrez_aventureiro.c`**  
  Código-fonte do programa principal que implementa a simulação dos movimentos das quatro peças, incluindo o movimento do Cavalo com loops aninhados.

- **`descricao.md`**  
  Arquivo com a descrição completa dos requisitos e especificações do desafio do nível aventureiro.

---

## Como Compilar

Para compilar o programa, utilize o compilador `gcc` no terminal:

```sh
gcc movimentacao_xadrez_aventureiro.c -o movimentacao_xadrez_aventureiro
```

Ou, se preferir outro nome para o executável:

```sh
gcc movimentacao_xadrez_aventureiro.c -o xadrez_aventureiro
```

---

## Como Executar

Após compilar, execute o programa:

```sh
./movimentacao_xadrez_aventureiro
```

Ou, se você compilou com outro nome:

```sh
./xadrez_aventureiro
```

### Saída Esperada

O programa exibirá no console:

```
=== SIMULAÇÃO DE MOVIMENTOS DE XADREZ ===

--- Movimento da TORRE (5 casas para a direita) ---
Direita
Direita
Direita
Direita
Direita

--- Movimento do BISPO (5 casas na diagonal: cima e direita) ---
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

--- Movimento da RAINHA (8 casas para a esquerda) ---
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

--- Movimento do CAVALO (movimento em L: 2 casas para baixo, 1 para a esquerda) ---
Baixo
Baixo
Esquerda

=== Fim da simulação ===
```

---

## Características do Código

- **Valores fixos**: Os números de casas a serem movidas são definidos diretamente no código através de variáveis.
- **Documentação**: O código contém comentários explicativos sobre cada seção, especialmente sobre a lógica dos loops aninhados.
- **Legibilidade**: Código organizado com nomes de variáveis descritivos e indentação adequada.
- **Tipos de dados**: Utiliza apenas variáveis do tipo inteiro, conforme especificado nos requisitos.
- **Loops aninhados**: Demonstra o uso avançado de loops aninhados para implementar o movimento complexo do Cavalo.

---

## Diferenças em Relação ao Nível Novato

Este nível aventureiro inclui todas as funcionalidades do nível novato, mais:

1. **Movimento do Cavalo**: Nova peça implementada com movimento em "L"
2. **Loops aninhados**: Uso de estruturas de repetição aninhadas (`for` externo e `while` interno)
3. **Complexidade aumentada**: Demonstração de técnicas mais avançadas de programação

---

## Requisitos

- Compilador GCC (GNU Compiler Collection) instalado no sistema.
- Sistema operacional Linux/Unix ou ambiente compatível com GCC.

---

## Observações

- Este programa é uma simulação didática e não implementa a lógica completa do jogo de xadrez.
- O programa não solicita entrada do usuário; todos os valores são definidos diretamente no código.
- O código foi desenvolvido para fins educacionais, como parte da disciplina de Introdução à Programação de Computadores.
- A implementação do Cavalo utiliza loops aninhados para demonstrar conceitos avançados de programação em C.

---

## Relação com Outros Níveis

- **Nível Novato**: Implementa Torre, Bispo e Rainha com estruturas de repetição simples
- **Nível Aventureiro**: Estende o programa do novato adicionando o Cavalo com loops aninhados

Para mais informações sobre o nível novato, consulte: [`../novato/README.md`](../novato/README.md)

---

Se precisar de mais detalhes sobre o funcionamento do programa, consulte o arquivo `descricao.md` ou os comentários no código-fonte.

