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
    int populacao1, pontosturisticos1;
    float area1, pib1;

    //Dados da segunda Carta
    char codigo2[4];
    char nome2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    
    printf("Super Trunfo - Países - Cadastro das Cartas!\n\n");

    //Cadastro da primeiras cartas
    printf("===Cadastro da Carta 1===\n");
    printf("Digite o código do da carta (ex: A01)\n");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km2):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);


    //Cadastro da segunda cartas
    printf("\n===Cadastro da Carta 2===\n");
    printf("Digite o código do da carta (ex: B02)\n");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km2):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);


    //Exibição dos dados
    printf("\n\n===Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %2.f km2\n", area1);
    printf("PIB: %2.f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);


    printf("\n\n===Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %2.f km2\n", area2);
    printf("PIB: %2.f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}
