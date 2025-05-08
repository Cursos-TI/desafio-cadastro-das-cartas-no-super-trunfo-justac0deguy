#include <stdio.h>

struct Carta {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    printf("Cadastro da primeira carta (A01):\n");
    printf("Informe a população: ");
    scanf("%d", &carta1.populacao);
    printf("Informe a área: ");
    scanf("%f", &carta1.area);
    printf("Informe o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\nCadastro da segunda carta (B02):\n");
    printf("Informe a população: ");
    scanf("%d", &carta2.populacao);
    printf("Informe a área: ");
    scanf("%f", &carta2.area);
    printf("Informe o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    printf("\nDados da primeira carta:\n");
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nDados da segunda carta:\n");
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}

