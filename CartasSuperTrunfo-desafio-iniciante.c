#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[5];
    char nome1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    do {
        printf("Digite o código da carta (ex: A01): ");
        scanf(" %s", codigo1);
        if (codigo1[0] != estado1 || strlen(codigo1) != 3 || codigo1[1] < '0' || codigo1[1] > '0' || codigo1[2] < '1' || codigo1[2] > '4') {
            printf("Código inválido! O código deve começar com a letra do estado e ser seguido por um número de 01 a 04.\n");
        } else {
            break;
        }
    } while (1);

    getchar(); // Limpar o buffer do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // Limpar o buffer do teclado antes de fgets

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    do {
        printf("Digite o código da carta (ex: B02): ");
        scanf(" %s", codigo2);
        if (codigo2[0] != estado2 || strlen(codigo2) != 3 || codigo2[1] < '0' || codigo2[1] > '0' || codigo2[2] < '1' || codigo2[2] > '4') {
            printf("Código inválido! O código deve começar com a letra do estado e ser seguido por um número de 01 a 04.\n");
        } else {
            break;
        }
    } while (1);

    while (getchar() != '\n'); // Limpar o buffer do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    while (getchar() != '\n'); // Limpar o buffer do teclado antes de fgets

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}