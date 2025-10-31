# Desafio: Movimentação de Peças de Xadrez - Nível Mestre

Este programa é a versão avançada do programa do nível [aventureiro](../aventureiro/README.md), aprimorando todas as funcionalidades com técnicas avançadas de programação: **recursividade** e **loops complexos aninhados**, como parte do módulo de Introdução à Programação de Computadores.

## Descrição do Programa

O programa `movimentacao_xadrez_mestre.c` demonstra técnicas avançadas de programação em C através da simulação de movimentos das peças de xadrez. Este nível explora conceitos fundamentais de algoritmos e estruturas de dados.

### Peças Implementadas

O programa simula o movimento de quatro peças utilizando técnicas avançadas:

- **Torre** 🔄 (Recursivo)  
  Move-se em linha reta horizontalmente ou verticalmente.  
  **Simulação**: 5 casas para a direita  
  **Técnica utilizada**: **Função recursiva** substituindo loops simples

- **Bispo** 🔄⚙️ (Recursivo + Loops Aninhados)  
  Move-se na diagonal.  
  **Simulação**: 5 casas na diagonal para cima e à direita  
  **Técnica utilizada**: **Função recursiva** combinada com **loops aninhados**  
  - Loop externo: movimento vertical (cima)  
  - Loop interno: movimento horizontal (direita)

- **Rainha** 🔄 (Recursivo)  
  Move-se em todas as direções (horizontal, vertical e diagonal).  
  **Simulação**: 8 casas para a esquerda  
  **Técnica utilizada**: **Função recursiva** substituindo loops simples

- **Cavalo** ⚙️ (Loops Complexos)  
  Move-se em "L": duas casas em uma direção e uma casa perpendicularmente.  
  **Simulação**: 2 casas para cima e 1 casa para a direita  
  **Técnica utilizada**: **Loops aninhados complexos** com múltiplas variáveis, condições e controle de fluxo (`continue` e `break`)

### Destaque: Técnicas Avançadas

#### Recursividade

As peças Torre, Bispo e Rainha utilizam **funções recursivas** para simular seus movimentos:

- **Caso base**: Quando não há mais casas para mover (`casas_restantes <= 0`), a recursão é encerrada
- **Caso recursivo**: A função imprime a direção e chama a si mesma com `casas_restantes - 1`
- **Vantagem**: Código mais elegante e demonstração prática de recursão

**Exemplo de lógica recursiva:**
```c
void mover_torre(int casas_restantes) {
    if (casas_restantes <= 0) return;  // Caso base
    printf("Direita\n");
    mover_torre(casas_restantes - 1);  // Chamada recursiva
}
```

#### Loops Aninhados Complexos (Bispo)

O Bispo combina recursividade com **loops aninhados**:

- **Recursão**: Controla quantas casas diagonais mover
- **Loops aninhados**: Detalham o movimento vertical e horizontal que compõem a diagonal
  - Loop externo (`for`): movimento vertical (cima)
  - Loop interno (`while`): movimento horizontal (direita)

#### Loops Complexos com Controle de Fluxo (Cavalo)

O Cavalo utiliza **loops aninhados complexos** com:

- **Múltiplas variáveis**: `contador_externo`, `contador_interno`, `etapa_movimento`
- **Múltiplas condições**: Controle preciso de qual etapa do movimento está sendo executada
- **Controle de fluxo**: Uso de `continue` e `break` para controle preciso da execução
- **Movimento atualizado**: Agora move para cima e direita (diferente do nível aventureiro)

## Estrutura dos Arquivos

- **`movimentacao_xadrez_mestre.c`**  
  Código-fonte do programa principal que implementa a simulação dos movimentos das quatro peças utilizando recursividade e loops complexos.

- **`descricao.md`**  
  Arquivo com a descrição completa dos requisitos e especificações do desafio do nível mestre.

---

## Como Compilar

Para compilar o programa, utilize o compilador `gcc` no terminal:

```sh
gcc movimentacao_xadrez_mestre.c -o movimentacao_xadrez_mestre
```

Ou, se preferir outro nome para o executável:

```sh
gcc movimentacao_xadrez_mestre.c -o xadrez_mestre
```

---

## Como Executar

Após compilar, execute o programa:

```sh
./movimentacao_xadrez_mestre
```

Ou, se você compilou com outro nome:

```sh
./xadrez_mestre
```

### Saída Esperada

O programa exibirá no console:

```
=== SIMULAÇÃO DE MOVIMENTOS DE XADREZ - NÍVEL MESTRE ===

--- Movimento da TORRE (5 casas para a direita) [RECURSIVO] ---
Direita
Direita
Direita
Direita
Direita

--- Movimento do BISPO (5 casas na diagonal: cima e direita) [RECURSIVO + LOOPS ANINHADOS] ---
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

--- Movimento da RAINHA (8 casas para a esquerda) [RECURSIVO] ---
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

--- Movimento do CAVALO (movimento em L: 2 casas para cima, 1 para a direita) [LOOPS COMPLEXOS] ---
Cima
Cima
Direita

=== Fim da simulação ===
```

---

## Características do Código

- **Recursividade**: Implementação de funções recursivas com casos base bem definidos para evitar stack overflow
- **Loops aninhados complexos**: Uso avançado de loops com múltiplas variáveis e condições
- **Controle de fluxo**: Utilização de `continue` e `break` para controle preciso da execução
- **Documentação detalhada**: Comentários explicativos sobre recursividade, loops complexos e propósito de cada variável
- **Legibilidade**: Código organizado com nomes de variáveis descritivos e indentação adequada
- **Tipos de dados**: Utiliza apenas variáveis do tipo inteiro, conforme especificado nos requisitos
- **Proteção contra erros**: Casos base nas funções recursivas previnem chamadas infinitas

---

## Conceitos de Programação Demonstrados

### Recursividade
- **Definição**: Técnica onde uma função chama a si mesma
- **Componentes**: Caso base (condição de parada) e caso recursivo (chamada à função)
- **Aplicação**: Simplifica a lógica de movimentos repetitivos das peças

### Loops Aninhados Complexos
- **Definição**: Estruturas de repetição dentro de outras estruturas de repetição
- **Aplicação**: Permite modelar movimentos complexos como diagonais e movimentos em "L"
- **Controle avançado**: Uso de `continue` e `break` para controle preciso do fluxo

### Boas Práticas
- **Documentação**: Comentários explicativos sobre cada técnica utilizada
- **Organização**: Separação clara entre protótipos, função principal e implementações
- **Legibilidade**: Código fácil de entender e manter

---

## Diferenças em Relação aos Níveis Anteriores

### Em Relação ao Nível Novato
- Substituição de loops simples por funções recursivas (Torre, Bispo, Rainha)
- Adição de loops aninhados para o Bispo
- Implementação de loops complexos para o Cavalo

### Em Relação ao Nível Aventureiro
- **Torre, Bispo e Rainha**: Agora utilizam recursividade em vez de loops
- **Bispo**: Combina recursividade com loops aninhados
- **Cavalo**: Loops mais complexos com múltiplas variáveis e controle de fluxo (`continue`/`break`)
- **Cavalo**: Movimento atualizado (agora para cima e direita, não mais para baixo e esquerda)

---

## Requisitos

- Compilador GCC (GNU Compiler Collection) instalado no sistema
- Sistema operacional Linux/Unix ou ambiente compatível com GCC
- Conhecimento básico de recursividade e loops aninhados (recomendado para compreensão do código)

---

## Observações

- Este programa é uma simulação didática e não implementa a lógica completa do jogo de xadrez
- O programa não solicita entrada do usuário; todos os valores são definidos diretamente no código
- O código foi desenvolvido para fins educacionais, como parte da disciplina de Introdução à Programação de Computadores
- As funções recursivas têm casos base bem definidos para evitar stack overflow
- O código demonstra técnicas avançadas de programação que são fundamentais para o desenvolvimento de algoritmos mais complexos

---

## Relação com Outros Níveis

- **Nível Novato**: Implementa Torre, Bispo e Rainha com estruturas de repetição simples (`for`, `while`, `do-while`)
- **Nível Aventureiro**: Estende o programa do novato adicionando o Cavalo com loops aninhados
- **Nível Mestre**: Aprimora todas as peças com recursividade e loops complexos (nível atual)

Para mais informações sobre os outros níveis:
- [`../novato/README.md`](../novato/README.md)
- [`../aventureiro/README.md`](../aventureiro/README.md)

---

## Dicas de Estudo

- **Recursividade**: Estude como o caso base funciona e como cada chamada recursiva reduz o problema
- **Loops Aninhados**: Observe como o loop interno executa completamente para cada iteração do loop externo
- **Controle de Fluxo**: Analise como `continue` e `break` alteram o comportamento normal dos loops
- **Depuração**: Use `printf` ou um debugger para acompanhar o fluxo de execução das funções recursivas

---

Se precisar de mais detalhes sobre o funcionamento do programa, consulte o arquivo `descricao.md` ou os comentários detalhados no código-fonte.

