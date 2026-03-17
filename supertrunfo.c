#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    int populacao1, ptur1;
    char estado1, codigo1[4], cidade1[50];
    float area1, pib1;
    int populacao2, ptur2;
    char estado2, codigo2[4], cidade2[50];
    float area2, pib2;

    // Área para entrada de dados
    printf("INSIRA AS IMFORMAÇÕES DA PRIMEIRA CARTA. \nInforme a letra que representa o Estado: \n");
    scanf(" %c", &estado1);

    printf("Informe o código da carta: \n");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Informe o número da população: \n");
    scanf("%d", &populacao1);

    printf("Informe a área territorial do Estado: \n");
    scanf("%f", &area1);
    
    printf("Informe o PIB do Estado: \n");
    scanf("%f", &pib1);
    
    printf("Informe quantos pontos turísticos o Estado possui: \n");
    scanf("%d", &ptur1);

    printf("INSIRA AS INFORMAÇÕES DA SEGUNDA CARTA. \nInforme a letra que representa o Estado: \n");
    scanf(" %c", &estado2);
    
    printf("Informe o código da carta: \n");
    scanf("%s", codigo2);
    
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade2);
    
    printf("Informe o número da população: \n");
    scanf("%d", &populacao2);
    
    printf("Informe a área territorial do Estado: \n");
    scanf("%f", &area2);
    
    printf("Informe o PIB do Estado: \n");
    scanf("%f", &pib2);
    
    printf("Informe quantos pontos turísticos o Estado possui: \n");
    scanf("%d", &ptur2);
    
    // Área para exibição dos dados da cidade
    printf("\nINFORMAÇÕES DAS CARTAS:");
    printf("\n\nCarta 1: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s"
           "\nPopulação: %d \nÁrea: %.2f Km² \nPIB: R$ %.2f"
           "\nNúmero de pontos turísticos: %d",estado1,codigo1,cidade1,populacao1,area1,pib1,ptur1);
    
    printf("\n\nCarta 2: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s"
           "\nPopulação: %d \nÁrea: %.2f Km² \nPIB: R$ %.2f"
           "\nNúmero de pontos turísticos: %d",estado2,codigo2,cidade2,populacao2,area2,pib2,ptur2);


return 0;
} 