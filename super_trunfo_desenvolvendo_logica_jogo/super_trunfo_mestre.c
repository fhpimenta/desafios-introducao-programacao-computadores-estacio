#include <stdio.h>
#include <string.h>

float calcularDensidadePopulacional(int populacao, float area) {
    if (area == 0) return 0; // Evita divisão por zero
    return populacao / area;
}

void imprimirMenu(int opcaoSelecionada) {
    if (opcaoSelecionada != 1) {
        printf("1. População\n");
    } 
    
    if (opcaoSelecionada != 2) {
        printf("2. Quantidade de Pontos Turisticos\n");
    }
    
    if (opcaoSelecionada != 3) {
        printf("3. Área\n");
    }
    if (opcaoSelecionada != 4) {
        printf("4. PIB\n");
    }
    
    if (opcaoSelecionada != 5) {
        printf("5. Densidade Populacional\n");
    }
}

int main() {
    printf("Super Trunfo Mestre\n");

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

    int opcao1;
    while(1) {
        printf("Escolha o primeiro atributo para comparação das cartas:\n");
        imprimirMenu(0);
        printf("Escolha uma opção: ");
        scanf("%d", &opcao1);
        if (opcao1 >= 1 && opcao1 <= 5) {
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    int opcao2;
    while(1) {
        printf("Escolha o segundo atributo para comparação das cartas:\n");
        imprimirMenu(opcao1);
        printf("Escolha uma opção: ");
        scanf("%d", &opcao2);
        if (opcao2 >= 1 && opcao2 <= 5) {
            if (opcao1 == opcao2) {
                printf("Os atributos não podem ser iguais. Tente novamente.\n");
            } else {
                break;
            }
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    float somaCarta1 = 0, somaCarta2 = 0;

    switch (opcao1) {
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
            somaCarta1 += carta01Populacao;
            somaCarta2 += carta02Populacao;
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
            somaCarta1 += carta01QuantidadePontosTuristicos;
            somaCarta2 += carta02QuantidadePontosTuristicos;
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
            somaCarta1 += carta01Area;
            somaCarta2 += carta02Area;
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
            somaCarta1 += carta01PIB;
            somaCarta2 += carta02PIB;
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
            somaCarta1 += carta01DensidadePopulacional;
            somaCarta2 += carta02DensidadePopulacional;
            break;
        default:
            printf("\nOpção inválida. Tente novamente.\n");
            break;
    }

    switch (opcao2) {
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
            somaCarta1 += carta01Populacao;
            somaCarta2 += carta02Populacao;
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
            somaCarta1 += carta01QuantidadePontosTuristicos;
            somaCarta2 += carta02QuantidadePontosTuristicos;
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
            somaCarta1 += carta01Area;
            somaCarta2 += carta02Area;
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
            somaCarta1 += carta01PIB;
            somaCarta2 += carta02PIB;
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
            somaCarta1 += carta01DensidadePopulacional;
            somaCarta2 += carta02DensidadePopulacional;
            break;
        default:
            printf("\nOpção inválida. Tente novamente.\n");
            break;
    }
    
    printf("\nSoma dos atributos da Carta 1 (%s): %.2f\n", carta01Pais, somaCarta1);
    printf("Soma dos atributos da Carta 2 (%s): %.2f\n", carta02Pais, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("A Carta 1 (%s) venceu!\n", carta01Pais);
    } else if (somaCarta1 == somaCarta2) {
        printf("Empate!\n");
    } else {
        printf("A Carta 2 (%s) venceu!\n", carta02Pais);
    }

    return 0;
}