# Projeto: Movimentação de Peças de Xadrez

Este projeto contém uma série de programas educacionais em linguagem C que simulam os movimentos das peças de xadrez, desenvolvidos como parte do módulo de **Introdução à Programação de Computadores**. O projeto é organizado em três níveis progressivos de dificuldade, cada um explorando conceitos diferentes de programação.

## 📋 Visão Geral

O projeto demonstra a evolução do conhecimento em programação através da implementação progressiva de movimentos de peças de xadrez, utilizando desde estruturas básicas de repetição até técnicas avançadas como recursividade e loops complexos.

### Objetivo Educacional

Este projeto tem como objetivo:
- Demonstrar o uso prático de estruturas de repetição (`for`, `while`, `do-while`)
- Introduzir conceitos de loops aninhados
- Explorar técnicas avançadas de recursividade
- Aplicar controle de fluxo com `continue` e `break`
- Praticar boas práticas de programação em C

## 🎯 Estrutura do Projeto

O projeto está organizado em três níveis de dificuldade crescente:

```
movimentacao_jogo_xadrez/
├── novato/          # Nível 1: Estruturas básicas de repetição
├── aventureiro/      # Nível 2: Loops aninhados
├── mestre/          # Nível 3: Recursividade e loops complexos
└── README.md        # Este arquivo
```

Cada nível contém:
- **`descricao.md`**: Especificações e requisitos do desafio
- **`movimentacao_xadrez_[nível].c`**: Código-fonte do programa
- **`README.md`**: Documentação específica do nível

---

## 📚 Níveis do Projeto

### 🟢 Nível Novato

**Diretório**: [`novato/`](novato/)

**Foco**: Estruturas básicas de repetição

**Peças implementadas**:
- **Torre**: 5 casas para a direita (usando `for`)
- **Bispo**: 5 casas na diagonal cima/direita (usando `while`)
- **Rainha**: 8 casas para a esquerda (usando `do-while`)

**Conceitos abordados**:
- Estruturas de repetição básicas
- Controle de fluxo simples
- Variáveis e constantes
- Entrada e saída com `printf`

**Documentação**: Veja [`novato/README.md`](novato/README.md) para mais detalhes.

---

### 🟡 Nível Aventureiro

**Diretório**: [`aventureiro/`](aventureiro/)

**Foco**: Loops aninhados

**Peças implementadas**:
- **Torre**: 5 casas para a direita (mantido do nível novato)
- **Bispo**: 5 casas na diagonal cima/direita (mantido do nível novato)
- **Rainha**: 8 casas para a esquerda (mantido do nível novato)
- **Cavalo** ⭐: 2 casas para baixo e 1 para esquerda (movimento em "L" com loops aninhados)

**Conceitos abordados**:
- Loops aninhados (`for` e `while`)
- Combinação de estruturas de repetição
- Controle de múltiplas variáveis
- Extensão de código existente

**Documentação**: Veja [`aventureiro/README.md`](aventureiro/README.md) para mais detalhes.

---

### 🔴 Nível Mestre

**Diretório**: [`mestre/`](mestre/)

**Foco**: Recursividade e loops complexos

**Peças implementadas**:
- **Torre** 🔄: 5 casas para a direita (agora usando recursividade)
- **Bispo** 🔄⚙️: 5 casas na diagonal cima/direita (recursividade + loops aninhados)
- **Rainha** 🔄: 8 casas para a esquerda (agora usando recursividade)
- **Cavalo** ⚙️: 2 casas para cima e 1 para direita (loops complexos com `continue` e `break`)

**Conceitos abordados**:
- Funções recursivas
- Casos base e casos recursivos
- Loops aninhados complexos
- Controle de fluxo avançado (`continue`, `break`)
- Múltiplas variáveis e condições
- Proteção contra stack overflow

**Documentação**: Veja [`mestre/README.md`](mestre/README.md) para mais detalhes.

---

## 🎓 Progressão de Aprendizado

O projeto foi projetado para seguir uma progressão natural de aprendizado:

```
Nível Novato
    ↓
    ├─→ Aprende estruturas básicas de repetição
    ├─→ Entende diferentes tipos de loops
    └─→ Pratica entrada/saída básica
    
Nível Aventureiro
    ↓
    ├─→ Estende código existente
    ├─→ Aprende loops aninhados
    └─→ Combina diferentes estruturas
    
Nível Mestre
    ↓
    ├─→ Refatora código usando recursividade
    ├─→ Implementa loops complexos
    └─→ Domina controle de fluxo avançado
```

## 📁 Estrutura de Arquivos

```
movimentacao_jogo_xadrez/
│
├── README.md                    # Este arquivo (visão geral do projeto)
│
├── novato/
│   ├── descricao.md            # Especificações do nível novato
│   ├── movimentacao_xadrez_novato.c
│   └── README.md               # Documentação do nível novato
│
├── aventureiro/
│   ├── descricao.md            # Especificações do nível aventureiro
│   ├── movimentacao_xadrez_aventureiro.c
│   └── README.md               # Documentação do nível aventureiro
│
└── mestre/
    ├── descricao.md            # Especificações do nível mestre
    ├── movimentacao_xadrez_mestre.c
    └── README.md               # Documentação do nível mestre
```

## 🚀 Como Começar

### Para Iniciantes

1. **Comece pelo nível Novato**: Acesse [`novato/README.md`](novato/README.md)
2. Leia a descrição do desafio em `novato/descricao.md`
3. Estude o código-fonte `movimentacao_xadrez_novato.c`
4. Compile e execute o programa
5. Entenda cada estrutura de repetição utilizada

### Para Intermediários

1. **Avance para o nível Aventureiro**: Acesse [`aventureiro/README.md`](aventureiro/README.md)
2. Compare com o código do nível novato
3. Entenda como os loops aninhados funcionam
4. Estude a implementação do movimento do Cavalo

### Para Avançados

1. **Complete com o nível Mestre**: Acesse [`mestre/README.md`](mestre/README.md)
2. Entenda os conceitos de recursividade
3. Analise os loops complexos com controle de fluxo
4. Compare as diferentes abordagens entre os níveis

## 🛠️ Requisitos

- **Compilador**: GCC (GNU Compiler Collection)
- **Sistema Operacional**: Linux/Unix ou ambiente compatível
- **Conhecimento**: Noções básicas de programação em C (para nível novato)

## 📖 Compilação e Execução

Cada nível tem suas próprias instruções de compilação. Em geral:

```sh
# Compilar
gcc movimentacao_xadrez_[nível].c -o xadrez_[nível]

# Executar
./xadrez_[nível]
```

Para instruções detalhadas, consulte o README específico de cada nível.

## 📊 Comparação dos Níveis

| Característica | Novato | Aventureiro | Mestre |
|---------------|--------|-------------|--------|
| **Peças** | 3 (Torre, Bispo, Rainha) | 4 (+ Cavalo) | 4 (mesmas peças) |
| **Loops básicos** | ✅ | ✅ | ❌ (refatorado) |
| **Loops aninhados** | ❌ | ✅ | ✅ |
| **Recursividade** | ❌ | ❌ | ✅ |
| **Controle de fluxo** | Básico | Intermediário | Avançado (`continue`/`break`) |
| **Complexidade** | Baixa | Média | Alta |

## 🎯 Conceitos de Programação Abordados

### Estruturas de Repetição
- `for`: Loop com inicialização, condição e incremento
- `while`: Loop com condição pré-verificada
- `do-while`: Loop com condição pós-verificada
- Loops aninhados: Loops dentro de loops

### Técnicas Avançadas
- **Recursividade**: Funções que chamam a si mesmas
- **Controle de fluxo**: `continue` e `break`
- **Múltiplas variáveis**: Gerenciamento de várias variáveis em loops
- **Casos base**: Prevenção de recursão infinita

### Boas Práticas
- Documentação de código
- Nomes de variáveis descritivos
- Indentação adequada
- Comentários explicativos
- Organização de código

## 📝 Observações Importantes

- **Propósito educacional**: Este projeto foi desenvolvido para fins educacionais
- **Simulação didática**: Não implementa a lógica completa do jogo de xadrez
- **Valores fixos**: Todos os valores são definidos diretamente no código
- **Sem validação**: Não há validação de entrada do usuário
- **Progressão**: Cada nível constrói sobre o conhecimento do anterior

## 🔗 Links Úteis

- [Nível Novato - Documentação](novato/README.md)
- [Nível Aventureiro - Documentação](aventureiro/README.md)
- [Nível Mestre - Documentação](mestre/README.md)

## 📚 Recursos Adicionais

Para entender melhor os conceitos abordados:
- **Estruturas de repetição**: Fundamentos de programação em C
- **Loops aninhados**: Algoritmos e estruturas de dados
- **Recursividade**: Técnicas avançadas de programação
- **Controle de fluxo**: Programação estruturada

## 🤝 Contribuindo

Este é um projeto educacional. Sugestões e melhorias são bem-vindas!

## 📄 Licença

Este projeto foi desenvolvido como parte de atividades acadêmicas da disciplina de Introdução à Programação de Computadores.

---

**Desenvolvido para fins educacionais** | **Introdução à Programação de Computadores**

