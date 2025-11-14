#include <stdio.h>

/*
  Super Trunfo - Nível Aventureiro
  Autor: Rafael Marmello
  Versão: 1.0
  Observações:
  - Lê duas cartas e calcula densidade populacional e PIB per capita.
  - Entradas: PIB em bilhões de reais (use ponto para decimais).
*/

int main() {

    // --- Definição de variáveis para a Carta 1 ---
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1; // PIB em bilhões de reais (entrada)
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;

    // --- Definição de variáveis para a Carta 2 ---
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2; // PIB em bilhões de reais (entrada)
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;

    // --- Entrada de Dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%49s", nome1);

    printf("Populacao (inteiro): ");
    scanf("%d", &populacao1);

    printf("Area (em km², use ponto): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais, use ponto): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos (inteiro): ");
    scanf("%d", &pontosturisticos1);

    // Calculos - Carta 1
    // Atenção: não inserir 0 para area ou populacao (divisao por zero)
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1e9f) / (float)populacao1;

    // --- Entrada de Dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%49s", nome2);

    printf("Populacao (inteiro): ");
    scanf("%d", &populacao2);

    printf("Area (em km², use ponto): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais, use ponto): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos (inteiro): ");
    scanf("%d", &pontosturisticos2);

    // Calculo - Carta 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1e9f) / (float)populacao2;

    // --- Exibição formatada das Cartas ---
    printf("\n\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}
