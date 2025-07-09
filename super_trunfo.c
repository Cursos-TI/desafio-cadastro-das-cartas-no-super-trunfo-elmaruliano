#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    char entrada[100];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // === Cadastro da Carta 1 ===
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar(); // limpa o '\n'

    printf("Informe o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // remove o '\n'

    // População
    printf("Informe a população (somente números): ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%d", &populacao1);

    // Área
    printf("Informe a área em km² (ex: 1251.11): ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%f", &area1);

    // PIB
    printf("Informe o PIB em bilhões de reais (ex: 699.28): ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%f", &pib1);

    // Pontos turísticos
    printf("Informe o número de pontos turísticos (somente números): ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%d", &pontosTuristicos1);


    // === Cadastro da Carta 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B03): ");
    scanf("%s", codigo2);

    getchar(); // limpa o '\n'

    printf("Informe o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; // remove o '\n'

    // População
    printf("Informe a população (somente números): ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%d", &populacao2);

    // Área
    printf("Informe a área em km² (ex: 1200.50): ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%f", &area2);

    // PIB
    printf("Informe o PIB em bilhões de reais (ex: 300.50): ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%f", &pib2);

    // Pontos turísticos
    printf("Informe o número de pontos turísticos (somente números): ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%d", &pontosTuristicos2);

    // === Exibição das Cartas ===
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

