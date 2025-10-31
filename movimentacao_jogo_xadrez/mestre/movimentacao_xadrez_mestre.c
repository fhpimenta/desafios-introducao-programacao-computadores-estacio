/*
 * Programa: Movimentação de Peças de Xadrez - Nível Mestre
 * Descrição: Simula o movimento de quatro peças de xadrez (Torre, Bispo, Rainha e Cavalo)
 *            utilizando técnicas avançadas: recursividade e loops complexos aninhados.
 * Autor: Sistema de Exercícios
 * Data: 2024
 */

#include <stdio.h>

// ============================================================
// PROTÓTIPOS DAS FUNÇÕES RECURSIVAS
// ============================================================

/*
 * Função recursiva para simular o movimento da Torre
 * Parâmetros:
 *   - casas_restantes: número de casas que ainda faltam para mover
 * Retorna: void
 */
void mover_torre(int casas_restantes);

/*
 * Função recursiva para simular o movimento do Bispo
 * Parâmetros:
 *   - casas_restantes: número de casas diagonais que ainda faltam para mover
 * Retorna: void
 */
void mover_bispo(int casas_restantes);

/*
 * Função recursiva para simular o movimento da Rainha
 * Parâmetros:
 *   - casas_restantes: número de casas que ainda faltam para mover
 * Retorna: void
 */
void mover_rainha(int casas_restantes);

// ============================================================
// FUNÇÃO PRINCIPAL
// ============================================================

int main() {
    // Variáveis para controlar o número de casas a serem movidas
    int casas_torre;
    int casas_bispo;
    int casas_rainha;
    int casas_cavalo_cima;      // Casas que o Cavalo move para cima (2 casas)
    int casas_cavalo_direita;    // Casas que o Cavalo move para a direita (1 casa)
    
    // Variáveis de controle para loops complexos do Cavalo
    int contador_externo;
    int contador_interno;
    int etapa_movimento;
    
    // Definindo o número de casas para cada peça diretamente no código
    casas_torre = 5;              // Torre move 5 casas para a direita
    casas_bispo = 5;              // Bispo move 5 casas na diagonal (cima e direita)
    casas_rainha = 8;             // Rainha move 8 casas para a esquerda
    casas_cavalo_cima = 2;        // Cavalo move 2 casas para cima
    casas_cavalo_direita = 1;     // Cavalo move 1 casa para a direita
    
    printf("=== SIMULAÇÃO DE MOVIMENTOS DE XADREZ - NÍVEL MESTRE ===\n\n");
    
    // ============================================================
    // MOVIMENTO DA TORRE (RECURSIVO)
    // A Torre move-se em linha reta horizontalmente ou verticalmente
    // Neste caso: 5 casas para a direita
    // Utilizando FUNÇÃO RECURSIVA
    // ============================================================
    printf("--- Movimento da TORRE (5 casas para a direita) [RECURSIVO] ---\n");
    
    mover_torre(casas_torre);
    
    printf("\n");
    
    // ============================================================
    // MOVIMENTO DO BISPO (RECURSIVO + LOOPS ANINHADOS)
    // O Bispo move-se na diagonal
    // Neste caso: 5 casas na diagonal para cima e à direita
    // Utilizando FUNÇÃO RECURSIVA com LOOPS ANINHADOS
    // Loop externo: movimento vertical (cima)
    // Loop interno: movimento horizontal (direita)
    // ============================================================
    printf("--- Movimento do BISPO (5 casas na diagonal: cima e direita) [RECURSIVO + LOOPS ANINHADOS] ---\n");
    
    mover_bispo(casas_bispo);
    
    printf("\n");
    
    // ============================================================
    // MOVIMENTO DA RAINHA (RECURSIVO)
    // A Rainha move-se em todas as direções
    // Neste caso: 8 casas para a esquerda
    // Utilizando FUNÇÃO RECURSIVA
    // ============================================================
    printf("--- Movimento da RAINHA (8 casas para a esquerda) [RECURSIVO] ---\n");
    
    mover_rainha(casas_rainha);
    
    printf("\n");
    
    // ============================================================
    // MOVIMENTO DO CAVALO (LOOPS COMPLEXOS ANINHADOS)
    // O Cavalo move-se em "L": duas casas em uma direção e uma casa
    // perpendicularmente. Neste caso: 2 casas para cima e 1 casa
    // para a direita.
    // Utilizando LOOPS ANINHADOS COMPLEXOS com múltiplas variáveis,
    // condições e controle de fluxo (continue e break)
    // ============================================================
    printf("--- Movimento do CAVALO (movimento em L: 2 casas para cima, 1 para a direita) [LOOPS COMPLEXOS] ---\n");
    
    // Loops aninhados complexos com múltiplas variáveis e condições
    // Loop externo: controla as etapas do movimento em "L"
    // Loop interno: controla detalhes adicionais do movimento
    // Uso de continue e break para controle preciso do fluxo
    
    etapa_movimento = 0;  // Controla qual etapa do movimento estamos (0 = cima, 1 = direita)
    
    // Loop externo: itera sobre as duas etapas do movimento em "L"
    for (contador_externo = 1; contador_externo <= 2; contador_externo++) {
        // Determina qual etapa do movimento estamos
        if (contador_externo == 1) {
            etapa_movimento = 0;  // Etapa vertical (cima)
        } else {
            etapa_movimento = 1;  // Etapa horizontal (direita)
        }
        
        // Loop interno: controla o movimento específico de cada etapa
        contador_interno = 1;
        while (contador_interno <= 3) {  // Limite superior para permitir uso de break
            // Se estamos na primeira etapa (movimento vertical para cima)
            if (etapa_movimento == 0) {
                // Verifica se já movemos todas as casas para cima
                if (contador_interno > casas_cavalo_cima) {
                    break;  // Sai do loop interno quando completa o movimento para cima
                }
                printf("Cima\n");
                contador_interno++;
                continue;  // Continua para a próxima iteração
            }
            
            // Se estamos na segunda etapa (movimento horizontal para direita)
            if (etapa_movimento == 1) {
                // Verifica se já movemos todas as casas para direita
                if (contador_interno > casas_cavalo_direita) {
                    break;  // Sai do loop interno quando completa o movimento para direita
                }
                printf("Direita\n");
                contador_interno++;
                continue;  // Continua para a próxima iteração
            }
            
            contador_interno++;
        }
    }
    
    printf("\n=== Fim da simulação ===\n");
    
    return 0;
}

// ============================================================
// IMPLEMENTAÇÃO DAS FUNÇÕES RECURSIVAS
// ============================================================

/*
 * Função recursiva para mover a Torre
 * 
 * Lógica recursiva:
 * - Caso base: se casas_restantes <= 0, não há mais casas para mover (retorna)
 * - Caso recursivo: imprime "Direita" e chama a função novamente com casas_restantes - 1
 * 
 * A recursão simula o movimento uma casa por vez, até completar todas as casas.
 */
void mover_torre(int casas_restantes) {
    // Caso base: se não há mais casas para mover, encerra a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Caso recursivo: imprime a direção e chama a função novamente
    printf("Direita\n");
    mover_torre(casas_restantes - 1);
}

/*
 * Função recursiva para mover o Bispo
 * 
 * Lógica recursiva:
 * - Caso base: se casas_restantes <= 0, não há mais casas para mover (retorna)
 * - Caso recursivo: 
 *   1. Utiliza loops aninhados para detalhar o movimento diagonal
 *      - Loop externo: movimento vertical (cima)
 *      - Loop interno: movimento horizontal (direita)
 *   2. Imprime "Cima, Direita" para representar o movimento diagonal
 *   3. Chama a função recursivamente com casas_restantes - 1
 * 
 * A recursão controla quantas casas diagonais mover, enquanto os loops
 * aninhados detalham o movimento vertical e horizontal que compõem a diagonal.
 */
void mover_bispo(int casas_restantes) {
    int contador_vertical;   // Contador para o loop externo (movimento vertical)
    int contador_horizontal;  // Contador para o loop interno (movimento horizontal)
    
    // Caso base: se não há mais casas para mover, encerra a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Loops aninhados para detalhar o movimento diagonal
    // Loop externo: movimento vertical (cima) - uma iteração por casa diagonal
    // Loop interno: movimento horizontal (direita) - uma iteração por casa diagonal
    // Cada casa diagonal combina movimento vertical E horizontal simultaneamente
    
    // Loop externo: controla o movimento vertical (cima)
    for (contador_vertical = 1; contador_vertical <= 1; contador_vertical++) {
        // Loop interno: controla o movimento horizontal (direita)
        // Dentro de cada iteração do loop externo, o loop interno executa
        // simulando o movimento simultâneo vertical e horizontal da diagonal
        contador_horizontal = 1;
        while (contador_horizontal <= 1) {
            // Imprime a combinação de direções que representa o movimento diagonal
            // O movimento diagonal é composto por movimento vertical (cima) E
            // movimento horizontal (direita) ao mesmo tempo
            printf("Cima, Direita\n");
            contador_horizontal++;
        }
    }
    
    // Chamada recursiva: move para a próxima casa diagonal
    mover_bispo(casas_restantes - 1);
}

/*
 * Função recursiva para mover a Rainha
 * 
 * Lógica recursiva:
 * - Caso base: se casas_restantes <= 0, não há mais casas para mover (retorna)
 * - Caso recursivo: imprime "Esquerda" e chama a função novamente com casas_restantes - 1
 * 
 * A recursão simula o movimento uma casa por vez, até completar todas as casas.
 */
void mover_rainha(int casas_restantes) {
    // Caso base: se não há mais casas para mover, encerra a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Caso recursivo: imprime a direção e chama a função novamente
    printf("Esquerda\n");
    mover_rainha(casas_restantes - 1);
}

