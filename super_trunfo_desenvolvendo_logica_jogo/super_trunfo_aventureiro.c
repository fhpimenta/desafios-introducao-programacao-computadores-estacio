#include <stdio.h>
#include <string.h>

float calcularDensidadePopulacional(int populacao, float area) {
    if (area == 0) return 0; // Evita divisão por zero
    return populacao / area;
}

int main() {
    printf("Super Trunfo Aventureiro\n");

    // Variaveis Carta 01
    char carta01Pais[150] = "Brasil";
    int carta01Populacao = 212000000, carta01QuantidadePontosTuristicos = 1000;
    float carta01Area = 8516000, carta01PIB = 3176.7, carta01DensidadePopulacional = 0.0;

    // Variaveis Carta 02
    char carta02Pais[150] = "Argentina";
    int carta02Populacao = 45700000, carta02QuantidadePontosTuristicos = 500;
    float carta02Area = 2780000, carta02PIB = 633.3, carta02DensidadePopulacional = 0.0;

    carta01DensidadePopulacional = calcularDensidadePopulacional(carta01Populacao, carta01Area);
    carta02DensidadePopulacional = calcularDensidadePopulacional(carta02Populacao, carta02Area);

    int opcao;
    printf("Escolha o atributo para comparação das cartas:\n");
    printf("1. População\n");
    printf("2. Quantidade de Pontos Turisticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. Sair\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %d\n", carta01Pais, carta01Populacao);
            printf("Carta 2 - %s: %d\n", carta02Pais, carta02Populacao);
            if (carta01Populacao > carta02Populacao) {
                printf("Carta 1 (%s) venceu!\n", carta01Pais);
            } else if (carta01Populacao == carta02Populacao) {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", carta02Pais);
            }
            break;
        case 2:
            printf("\nComparação de cartas (Atributo: Quantidade de Pontos Turisticos):\n");
            printf("Carta 1 - %s: %d\n", carta01Pais, carta01QuantidadePontosTuristicos);
            printf("Carta 2 - %s: %d\n", carta02Pais, carta02QuantidadePontosTuristicos);
            if (carta01QuantidadePontosTuristicos > carta02QuantidadePontosTuristicos) {
                printf("Carta 1 (%s) venceu!\n", carta01Pais);
            } else if (carta01QuantidadePontosTuristicos == carta02QuantidadePontosTuristicos) {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", carta02Pais);
            }
            break;
        case 3:
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f km²\n", carta01Pais, carta01Area);
            printf("Carta 2 - %s: %.2f km²\n", carta02Pais, carta02Area);
            if (carta01Area > carta02Area) {
                printf("Carta 1 (%s) venceu!\n", carta01Pais);
            } else if (carta01Area == carta02Area) {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", carta02Pais);
            }
            break;
        case 4:
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f bilhões de dólares\n", carta01Pais, carta01PIB);
            printf("Carta 2 - %s: %.2f bilhões de dólares\n", carta02Pais, carta02PIB);
            if (carta01PIB > carta02PIB) {
                printf("Carta 1 (%s) venceu!\n", carta01Pais);
            } else if (carta01PIB == carta02PIB) {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", carta02Pais);
            }
            break;
        case 5:
            printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", carta01Pais, carta01DensidadePopulacional);
            printf("Carta 2 - %s: %.2f hab/km²\n", carta02Pais, carta02DensidadePopulacional);
            if (carta01DensidadePopulacional < carta02DensidadePopulacional) {
                printf("Carta 1 (%s) venceu!\n", carta01Pais);
            } else if (carta01DensidadePopulacional == carta02DensidadePopulacional) {
                printf("Empate!\n");
            } else {
                printf("Carta 2 (%s) venceu!\n", carta02Pais);
            }
            break;
        case 6:
            printf("\nFim do jogo\n");
            break;
        default:
            printf("\nOpção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}