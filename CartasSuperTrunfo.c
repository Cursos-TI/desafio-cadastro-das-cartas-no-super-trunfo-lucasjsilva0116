#include <stdio.h>

int main(){
    // Declaração das váriaveis para a primeira carta.
    char estado1;
    char codigocarta1[10];
    char nomecidade1[100];
    int populacao1; 
    int pontosturisticos1;
    float areakm1;
    float pib1;

    // Letura dos dados da primeira carta.
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);
    printf("Código da carta (Ex: A01): ");
    scanf("%s", &codigocarta1);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &areakm1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Números de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Declaração das variáveis para a segunda carta.
    char estado2;
    char codigocarta2[10];
    char nomecidade2[100];
    int populacao2; 
    int pontosturisticos2;
    float areakm2;
    float pib2;

    // Leitura dos dados da segunda carta.
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (Ex: A01): ");
    scanf("%s", &codigocarta2);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &areakm2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Números de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados da primeira carta.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da cidade: %s", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", areakm1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Números de pontos turísticos: %d\n", pontosturisticos1);

    // Exibição dos dados da segunda carta.
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", areakm2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Números de pontos turísticos: %d\n", pontosturisticos2);

    return 0;
}