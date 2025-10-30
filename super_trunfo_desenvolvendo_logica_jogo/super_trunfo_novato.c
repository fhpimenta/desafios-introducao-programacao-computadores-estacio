#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada de forma segura
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

float calcularDensidadePopulacional(int populacao, float area) {
    if (area == 0) return 0; // Evita divisão por zero
    return populacao / area;
}

float calcularPIBPerCapita(float PIB, int populacao) {
    if (populacao == 0) return 0; // Evita divisão por zero
    return (PIB * 1e9) / populacao; // Converte PIB de bilhões para reais
}

int main() {
    printf("Super Trunfo Novato\n");

    // Variaveis Carta 01
    char carta01Estado[150], carta01Codigo[150], carta01Cidade[150];
    int carta01Populacao = 0, carta01QuantidadePontosTuristicos = 0;
    float carta01Area = 0.0, carta01PIB = 0.0, carta01DensidadePopulacional = 0.0, carta01PIBPerCapita = 0.0;

    // Variaveis Carta 02
    char carta02Estado[150], carta02Codigo[150], carta02Cidade[150];
    int carta02Populacao = 0, carta02QuantidadePontosTuristicos = 0;
    float carta02Area = 0.0, carta02PIB = 0.0, carta02DensidadePopulacional = 0.0, carta02PIBPerCapita = 0.0;

    printf("Insira os dados da Carta 1\n");

    printf("Estado: ");
    fgets(carta01Estado, sizeof(carta01Estado), stdin);
    // Remove o caractere de nova linha do final da string, se existir
    carta01Estado[strcspn(carta01Estado, "\n")] = '\0';
    // limparBuffer();

    printf("Codigo: ");
    scanf("%s", carta01Codigo);
    limparBuffer();

    printf("Cidade: ");
    fgets(carta01Cidade, sizeof(carta01Cidade), stdin);
    // Remove o caractere de nova linha do final da string, se existir
    carta01Cidade[strcspn(carta01Cidade, "\n")] = '\0';

    printf("Populacao: ");
    scanf(" %d", &carta01Populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta01Area);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &carta01PIB);

    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &carta01QuantidadePontosTuristicos);

    carta01DensidadePopulacional = calcularDensidadePopulacional(carta01Populacao, carta01Area);
    carta01PIBPerCapita = calcularPIBPerCapita(carta01PIB, carta01Populacao);

    limparBuffer(); // Limpa o buffer antes de ler a próxima carta

    printf("\nInsira os dados da Carta 2\n");

    printf("Estado: ");
    fgets(carta02Estado, sizeof(carta02Estado), stdin);
    // Remove o caractere de nova linha do final da string, se existir
    carta02Estado[strcspn(carta02Estado, "\n")] = '\0';

    printf("Codigo: ");
    scanf("%s", carta02Codigo);
    limparBuffer();

    printf("Cidade: ");
    fgets(carta02Cidade, sizeof(carta02Cidade), stdin);
    // Remove o caractere de nova linha do final da string, se existir
    carta02Cidade[strcspn(carta02Cidade, "\n")] = '\0';

    printf("Populacao: ");
    scanf(" %d", &carta02Populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta02Area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta02PIB);

    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &carta02QuantidadePontosTuristicos);

    carta02DensidadePopulacional = calcularDensidadePopulacional(carta02Populacao, carta02Area);
    carta02PIBPerCapita = calcularPIBPerCapita(carta02PIB, carta02Populacao);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta01Estado);
    printf("Codigo: %s\n", carta01Codigo);
    printf("Cidade: %s\n", carta01Cidade);
    printf("Populacao: %d\n", carta01Populacao);
    printf("Area: %.2f km²\n", carta01Area);
    printf("PIB: %.2f bilhões de reais\n", carta01PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", carta01QuantidadePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta01DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta01PIBPerCapita);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta02Estado);
    printf("Codigo: %s\n", carta02Codigo);
    printf("Cidade: %s\n", carta02Cidade);
    printf("Populacao: %d\n", carta02Populacao);
    printf("Area: %.2f km²\n", carta02Area);
    printf("PIB: %.2f bilhões de reais\n", carta02PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", carta02QuantidadePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta02DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta02PIBPerCapita);

    // comparar o atributo Populacao
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", carta01Estado, carta01Populacao);
    printf("Carta 2 - %s: %d\n", carta02Estado, carta02Populacao);
    if (carta01Populacao > carta02Populacao) {
        printf("Carta 1 (%s) venceu!\n", carta01Estado);
    } else {
        printf("Carta 2 (%s) venceu!\n", carta02Estado);
    }

    printf("\nFim do jogo\n");

    return 0;
}