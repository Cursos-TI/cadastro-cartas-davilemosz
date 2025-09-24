#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[5];
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1, superPoder1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);

    getchar(); // Limpar o buffer do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // Limpar o buffer do teclado antes de fgets

    // Cálculos para a Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;
    // Ajuste no cálculo do Super Poder para garantir a conversão correta de tipos
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);

    getchar(); // Limpar o buffer do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    getchar(); // Limpar o buffer do teclado antes de fgets

    // Cálculos para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // Comparação das cartas com mensagens corrigidas
    printf("\nComparação de Cartas:\n");
    printf("População: %s\n", populacao1 > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Área: %s\n", area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %s\n", pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Pontos Turísticos: %s\n", pontosTuristicos1 > pontosTuristicos2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade Populacional: %s\n", densidadePopulacional1 < densidadePopulacional2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB per Capita: %s\n", pibPerCapita1 > pibPerCapita2 ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super Poder: %s\n", superPoder1 > superPoder2 ? "Carta 1 venceu" : "Carta 2 venceu");

    // Debugging: Exibir valores calculados para verificar consistência
    printf("\nValores Calculados:\n");
    printf("Carta 1 - Densidade: %.2f, PIB per Capita: %.2f, Super Poder: %.2f\n", densidadePopulacional1, pibPerCapita1, superPoder1);
    printf("Carta 2 - Densidade: %.2f, PIB per Capita: %.2f, Super Poder: %.2f\n", densidadePopulacional2, pibPerCapita2, superPoder2);

    return 0;
}
