#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Dados da primeira carta
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1, pib1, densidade1, pibpercapita1, superPoder1;

    // Dados da segunda Carta
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superPoder2;
    
    printf("== Super Trunfo - Países - Cadastro das Cartas! ==\n\n");

    // Cadastro da primeira carta
    printf("===Cadastro da Carta 1===\n");
    printf("Digite o codigo da carta (ex: A01)\n");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao1);

    printf("Digite a area (em km2):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);

    // Cadastro da segunda carta
    printf("\n===Cadastro da Carta 2===\n");
    printf("Digite o codigo da carta (ex: B02)\n");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km2):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);

    // Cálculos da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0f / densidade2);

    // Exibição dos dados
    printf("\n===Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n===Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // Comparação de Cartas
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2 ? 1 : 2), (pontosturisticos1 > pontosturisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapita1 > pibpercapita2 ? 1 : 2), (pibpercapita1 > pibpercapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2));

    return 0;
}