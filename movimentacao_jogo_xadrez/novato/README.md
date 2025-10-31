# Desafio: Movimentação de Peças de Xadrez - Nível Novato

Este programa simula o movimento de três peças de xadrez utilizando diferentes estruturas de repetição em linguagem C, como parte do módulo de Introdução à Programação de Computadores.

## Descrição do Programa

O programa `movimentacao_xadrez_novato.c` demonstra a aplicação prática das estruturas de repetição (`for`, `while` e `do-while`) através da simulação de movimentos das peças de xadrez no tabuleiro.

### Peças Implementadas

O programa simula o movimento de três peças diferentes, cada uma utilizando uma estrutura de repetição específica:

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

## Estrutura dos Arquivos

- **`movimentacao_xadrez_novato.c`**  
  Código-fonte do programa principal que implementa a simulação dos movimentos das três peças.

- **`descricao.md`**  
  Arquivo com a descrição completa dos requisitos e especificações do desafio.

- **`xadrez`**  
  Arquivo binário gerado após a compilação do código-fonte (pode ser removido e recompilado a qualquer momento).

---

## Como Compilar

Para compilar o programa, utilize o compilador `gcc` no terminal:

```sh
gcc movimentacao_xadrez_novato.c -o movimentacao_xadrez_novato
```

Ou, se preferir outro nome para o executável:

```sh
gcc movimentacao_xadrez_novato.c -o xadrez
```

---

## Como Executar

Após compilar, execute o programa:

```sh
./movimentacao_xadrez_novato
```

Ou, se você compilou com o nome `xadrez`:

```sh
./xadrez
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

=== Fim da simulação ===
```

---

## Características do Código

- **Valores fixos**: Os números de casas a serem movidas são definidos diretamente no código através de variáveis.
- **Documentação**: O código contém comentários explicativos sobre cada seção e a lógica implementada.
- **Legibilidade**: Código organizado com nomes de variáveis descritivos e indentação adequada.
- **Tipos de dados**: Utiliza apenas variáveis do tipo inteiro, conforme especificado nos requisitos.

---

## Requisitos

- Compilador GCC (GNU Compiler Collection) instalado no sistema.
- Sistema operacional Linux/Unix ou ambiente compatível com GCC.

---

## Observações

- Este programa é uma simulação didática e não implementa a lógica completa do jogo de xadrez.
- O programa não solicita entrada do usuário; todos os valores são definidos diretamente no código.
- O código foi desenvolvido para fins educacionais, como parte da disciplina de Introdução à Programação de Computadores.

---

Se precisar de mais detalhes sobre o funcionamento do programa, consulte o arquivo `descricao.md` ou os comentários no código-fonte.

