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

float calcularInversoNumero(float numero) {
    if (numero == 0) return 0; // Evita divisão por zero
    return 1.0 / numero;
}

float calcularSuperPoder(int populacao, float area, float PIB, int pontosTuristicos, float densidadePopulacional, float PIBPerCapita) {
    // Exemplo simples de cálculo de super poder
    float inversoDensidade = calcularInversoNumero(densidadePopulacional);
    return populacao + area + (PIB * 1e9) + pontosTuristicos + inversoDensidade + PIBPerCapita;
}

void imprimirResultado(int resultado) {
    if (resultado == 0) {
        printf("Carta 2 venceu (0)\n");
    } else {
        printf("Carta 1 venceu (1)\n");
    }
}

int main() {
    printf("Super Trunfo Novato\n");

    // Variaveis Carta 01
    char carta01Estado, carta01Codigo[150], carta01Cidade[150];
    int carta01Populacao = 0, carta01QuantidadePontosTuristicos = 0;
    float carta01Area = 0.0, carta01PIB = 0.0, carta01DensidadePopulacional = 0.0, carta01PIBPerCapita = 0.0, carta01SuperPoder = 0.0;

    // Variaveis Carta 02
    char carta02Estado, carta02Codigo[150], carta02Cidade[150];
    int carta02Populacao = 0, carta02QuantidadePontosTuristicos = 0;
    float carta02Area = 0.0, carta02PIB = 0.0, carta02DensidadePopulacional = 0.0, carta02PIBPerCapita = 0.0, carta02SuperPoder = 0.0;

    printf("Insira os dados da Carta 1\n");

    printf("Estado (A-H): ");
    scanf("%c", &carta01Estado);
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
    carta01SuperPoder = calcularSuperPoder(carta01Populacao, carta01Area, carta01PIB, carta01QuantidadePontosTuristicos, carta01DensidadePopulacional, carta01PIBPerCapita);

    limparBuffer(); // Limpa o buffer antes de ler a próxima carta

    printf("\nInsira os dados da Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta02Estado);

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
    carta02SuperPoder = calcularSuperPoder(carta02Populacao, carta02Area, carta02PIB, carta02QuantidadePontosTuristicos, carta02DensidadePopulacional, carta02PIBPerCapita);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta01Estado);
    printf("Codigo: %s\n", carta01Codigo);
    printf("Cidade: %s\n", carta01Cidade);
    printf("Populacao: %d\n", carta01Populacao);
    printf("Area: %.2f km²\n", carta01Area);
    printf("PIB: %.2f bilhões de reais\n", carta01PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", carta01QuantidadePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta01DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta01PIBPerCapita);
    printf("Super Poder: %.2f\n", carta01SuperPoder);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta02Estado);
    printf("Codigo: %s\n", carta02Codigo);
    printf("Cidade: %s\n", carta02Cidade);
    printf("Populacao: %d\n", carta02Populacao);
    printf("Area: %.2f km²\n", carta02Area);
    printf("PIB: %.2f bilhões de reais\n", carta02PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", carta02QuantidadePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta02DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta02PIBPerCapita);
    printf("Super Poder: %.2f\n", carta02SuperPoder);


    printf("\nComparação das Cartas\n");
    int comparacaoPopulacao = carta01Populacao > carta02Populacao;
    printf("Populacao: ");
    imprimirResultado(comparacaoPopulacao);

    int comparacaoArea = carta01Area > carta02Area;
    printf("Area: ");
    imprimirResultado(comparacaoArea);

    int comparacaoPIB = carta01PIB > carta02PIB;
    printf("PIB: ");
    imprimirResultado(comparacaoPIB);

    int comparacaoPontosTuristicos = carta01QuantidadePontosTuristicos > carta02QuantidadePontosTuristicos;
    printf("Quantidade de Pontos Turisticos: ");
    imprimirResultado(comparacaoPontosTuristicos);

    int comparacaoDensidadePopulacional = carta01DensidadePopulacional < carta02DensidadePopulacional; // Menor densidade é melhor
    printf("Densidade Populacional: ");
    imprimirResultado(comparacaoDensidadePopulacional);

    int comparacaoPIBPerCapita = carta01PIBPerCapita > carta02PIBPerCapita;
    printf("PIB per Capita: ");
    imprimirResultado(comparacaoPIBPerCapita);

    int comparacaoSuperPoder = carta01SuperPoder > carta02SuperPoder;
    printf("Super Poder: ");
    imprimirResultado(comparacaoSuperPoder);

    printf("\nFim do jogo\n");

    return 0;
}