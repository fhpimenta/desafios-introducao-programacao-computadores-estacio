# Desafio de Lógica Super Trunfo - Introdução à Programação de Computadores

Este repositório contém três versões do jogo **Super Trunfo**, do módulo "Desenvolvendo a Lógica" implementadas em linguagem C, cada uma com diferentes níveis de complexidade e funcionalidades.

## Estrutura dos Arquivos

- **`super_trunfo_novato.c`**  
  Permite cadastrar duas cartas com informações de cidades/estados e exibe os dados inseridos. Faz a comparação de 1 atributo, determinado no código, das 2 cartas, e exibe qual carta venceu.

- **`super_trunfo_aventureiro.c`**  
  O usuário escolhe, através de um menu interativo, qual atributo deseja comparar as 2 cartas, e exibe o resultado da comparação ao final.

- **`super_trunfo_mestre.c`**  
  O usuário escolhe, através de um menu interativo, 2 atributos distintos que deseja comparar as 2 cartas, e exibe o resultado da comparação de cada atributo. Ao final, soma-se os valores dos 2 atributos de cada carta, faz e exibe a comparação dos valores, determinando qual carta venceu.

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
