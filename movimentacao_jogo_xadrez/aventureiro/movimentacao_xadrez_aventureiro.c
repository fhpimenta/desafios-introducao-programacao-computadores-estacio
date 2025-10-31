#include <stdio.h>

int main() {
    // Variáveis para controlar o número de casas a serem movidas
    int casas_torre;
    int casas_bispo;
    int casas_rainha;
    int casas_cavalo_baixo;    // Casas que o Cavalo move para baixo (2 casas)
    int casas_cavalo_esquerda; // Casas que o Cavalo move para a esquerda (1 casa)
    
    // Variáveis de controle para loops
    int contador;
    int contador_interno;
    
    // Definindo o número de casas para cada peça diretamente no código
    casas_torre = 5;              // Torre move 5 casas para a direita
    casas_bispo = 5;              // Bispo move 5 casas na diagonal (cima e direita)
    casas_rainha = 8;             // Rainha move 8 casas para a esquerda
    casas_cavalo_baixo = 2;       // Cavalo move 2 casas para baixo
    casas_cavalo_esquerda = 1;    // Cavalo move 1 casa para a esquerda
    
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
    
    printf("\n");
    
    // ============================================================
    // MOVIMENTO DO CAVALO
    // O Cavalo move-se em "L": duas casas em uma direção e uma casa
    // perpendicularmente. Neste caso: 2 casas para baixo e 1 casa
    // para a esquerda.
    // Utilizando LOOPS ANINHADOS (for e while)
    // ============================================================
    printf("--- Movimento do CAVALO (movimento em L: 2 casas para baixo, 1 para a esquerda) ---\n");
    
    // LOOP EXTERNO (FOR): controla as etapas do movimento em "L"
    // Para o movimento do Cavalo, temos 2 etapas:
    //   1. Movimento vertical (para baixo) - 2 casas
    //   2. Movimento horizontal (para esquerda) - 1 casa
    // 
    // LOOP INTERNO (WHILE): dentro de cada etapa, controla quantas casas
    // mover nessa direção específica
    //
    // Saída esperada: "Baixo", "Baixo", "Esquerda"
    
    contador = 1;  // Reinicializando o contador para o loop externo
    
    // Loop externo FOR: itera sobre as etapas do movimento (baixo e esquerda)
    // Primeira iteração: movimento para baixo (casas_cavalo_baixo vezes)
    // Segunda iteração: movimento para esquerda (casas_cavalo_esquerda vezes)
    for (contador = 1; contador <= 2; contador++) {
        if (contador == 1) {
            // Primeira etapa: movimento para baixo
            // Loop interno WHILE: controla quantas casas mover para baixo
            contador_interno = 1;
            while (contador_interno <= casas_cavalo_baixo) {
                printf("Baixo\n");
                contador_interno++;
            }
        } else {
            // Segunda etapa: movimento para esquerda
            // Loop interno WHILE: controla quantas casas mover para esquerda
            contador_interno = 1;
            while (contador_interno <= casas_cavalo_esquerda) {
                printf("Esquerda\n");
                contador_interno++;
            }
        }
    }
    
    printf("\n=== Fim da simulação ===\n");
    
    return 0;
}

