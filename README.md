# Super Trunfo - Introdução à Programação de Computadores

Este repositório contém três versões do jogo **Super Trunfo** implementadas em linguagem C, cada uma com diferentes níveis de complexidade e funcionalidades.

## Estrutura dos Arquivos

- **`super_trunfo_novato.c`**  
  Versão básica do jogo. Permite cadastrar duas cartas com informações de cidades/estados e exibe os dados inseridos. Não realiza cálculos adicionais nem compara as cartas.

- **`super_trunfo_aventureiro.c`**  
  Versão intermediária. Além dos dados básicos, calcula e exibe a densidade populacional e o PIB per capita de cada carta.

- **`super_trunfo_mestre.c`**  
  Versão avançada. Calcula todos os dados da versão aventureiro e adiciona o cálculo de um "Super Poder" para cada carta. Compara as cartas em vários critérios e informa qual carta vence em cada um deles.

- **super_trunfo**, **super_trunfo_aventureiro**, **super_trunfo_mestre**  
  Arquivos binários gerados após a compilação dos respectivos códigos-fonte `.c`.

- **`.vscode/settings.json`**  
  Arquivo de configuração do Visual Studio Code (vazio por padrão).

---

## Como Compilar

Para compilar qualquer uma das versões, utilize o compilador `gcc` no terminal.  
Exemplo para cada arquivo:

### Novato

```sh
gcc super_trunfo_novato.c -o super_trunfo
```

### Aventureiro

```sh
gcc super_trunfo_aventureiro.c -o super_trunfo_aventureiro
```

### Mestre

```sh
gcc super_trunfo_mestre.c -o super_trunfo_mestre
```

---

## Como Executar

Após compilar, execute o programa desejado:

```sh
./super_trunfo
# ou
./super_trunfo_aventureiro
# ou
./super_trunfo_mestre
```

---

## Observações

- Os arquivos `.c` contêm comentários explicativos sobre as funções e variáveis.
- Os arquivos binários podem ser removidos e recompilados a qualquer momento.
- O código foi desenvolvido para fins didáticos, como parte da disciplina de Introdução à Programação de Computadores.

---

Se precisar de mais detalhes sobre cada versão, é só pedir!
