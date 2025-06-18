#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Entrada de dados da carta 1
    scanf("%s", codigo1);
    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    // Entrada de dados da carta 2
    scanf("%s", codigo2);
    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    // Cálculo de atributos derivados
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    float super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1 / densidade2);

    // Impressão dos dados - Carta 1
    printf("Carta 1: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Impressão dos dados - Carta 2
    printf("Carta 2: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações (1 = carta1 vence, 0 = carta2 vence)
    printf("Comparacoes:\n");
    printf("Populacao: %d\n", (populacao1 > populacao2));
    printf("Area: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos Turisticos: %d\n", (pontos1 > pontos2));
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2)); // menor vence
    printf("PIB per capita: %d\n", (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: %d\n", (super_poder1 > super_poder2));

    return 0;
}
