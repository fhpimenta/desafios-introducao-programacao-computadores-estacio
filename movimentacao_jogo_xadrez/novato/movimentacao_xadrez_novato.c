/*
 * Programa: Movimentação de Peças de Xadrez - Nível Novato
 * Descrição: Simula o movimento de três peças de xadrez (Torre, Bispo e Rainha)
 *            utilizando diferentes estruturas de repetição em C.
 * Autor: Sistema de Exercícios
 * Data: 2024
 */

#include <stdio.h>

int main() {
    // Variáveis para controlar o número de casas a serem movidas
    int casas_torre;
    int casas_bispo;
    int casas_rainha;
    
    // Variável de controle para loops
    int contador;
    
    // Definindo o número de casas para cada peça diretamente no código
    casas_torre = 5;   // Torre move 5 casas para a direita
    casas_bispo = 5;   // Bispo move 5 casas na diagonal (cima e direita)
    casas_rainha = 8;  // Rainha move 8 casas para a esquerda
    
    printf("=== SIMULAÇÃO DE MOVIMENTOS DE XADREZ ===\n\n");
    
    // ============================================================
    // MOVIMENTO DA TORRE
    // A Torre move-se em linha reta horizontalmente ou verticalmente
    // Neste caso: 5 casas para a direita
    // Utilizando estrutura de repetição FOR
    // ============================================================
    printf("--- Movimento da TORRE (5 casas para a direita) ---\n");
    
    for (contador = 1; contador <= casas_torre; contador++) {
        printf("Direita\n");
    }
    
    printf("\n");
    
    // ============================================================
    // MOVIMENTO DO BISPO
    // O Bispo move-se na diagonal
    // Neste caso: 5 casas na diagonal para cima e à direita
    // Utilizando estrutura de repetição WHILE
    // ============================================================
    printf("--- Movimento do BISPO (5 casas na diagonal: cima e direita) ---\n");
    
    contador = 1;  // Reinicializando o contador para o próximo loop
    
    while (contador <= casas_bispo) {
        printf("Cima, Direita\n");
        contador++;
    }
    
    printf("\n");
    
    // ============================================================
    // MOVIMENTO DA RAINHA
    // A Rainha move-se em todas as direções
    // Neste caso: 8 casas para a esquerda
    // Utilizando estrutura de repetição DO-WHILE
    // ============================================================
    printf("--- Movimento da RAINHA (8 casas para a esquerda) ---\n");
    
    contador = 1;  // Reinicializando o contador para o próximo loop
    
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casas_rainha);
    
    printf("\n=== Fim da simulação ===\n");
    
    return 0;
}

