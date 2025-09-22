#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada de forma segura
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    printf("Super Trunfo Novato\n");

    // Variaveis Carta 01
    char carta01Estado;
    char carta01Codigo[150];
    char carta01Cidade[150];
    int carta01Populacao = 0;
    float carta01Area = 0.0;
    float carta01PIB = 0.0;
    int carta01QuantidadePontosTuristicos = 0;

    // Variaveis Carta 02
    char carta02Estado;
    char carta02Codigo[150];
    char carta02Cidade[150];
    int carta02Populacao = 0;
    float carta02Area = 0.0;
    float carta02PIB = 0.0;
    int carta02QuantidadePontosTuristicos = 0;

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

    limparBuffer(); // Limpa o buffer antes de ler a próxima carta

    printf("\nInsira os dados da Carta 2\n");

    printf("Estado: ");
    scanf(" %c", &carta02Estado);

    printf("Codigo: ");
    scanf("%s", carta02Codigo);
    limparBuffer();

    printf("Cidade (A-H): ");
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

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta01Estado);
    printf("Codigo: %s\n", carta01Codigo);
    printf("Cidade: %s\n", carta01Cidade);
    printf("Populacao: %d\n", carta01Populacao);
    printf("Area: %.2f km²\n", carta01Area);
    printf("PIB: %.2f bilhões de reais\n", carta01PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", carta01QuantidadePontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta02Estado);
    printf("Codigo: %s\n", carta02Codigo);
    printf("Cidade: %s\n", carta02Cidade);
    printf("Populacao: %d\n", carta02Populacao);
    printf("Area: %.2f km²\n", carta02Area);
    printf("PIB: %.2f bilhões de reais\n", carta02PIB);
    printf("Quantidade de Pontos Turisticos: %d\n", carta02QuantidadePontosTuristicos);

    printf("\nFim do jogo\n");

    return 0;
}