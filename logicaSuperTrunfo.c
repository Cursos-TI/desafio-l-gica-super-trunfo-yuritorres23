#include <stdio.h>

int main() {
    //carta
    char estado1[] = "A";
    char carta1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapta1;
    float vencedor1;
    
    printf("\n---Digitar dados Carta 1---\n");

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a area em km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (float)populacao1 / area1;

    pibPerCapta1 = (float)pib1 / populacao1;

    vencedor1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPerCapta1;

    //carta2
    char estado2[] = "B";
    char carta2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapta2;
    float vencedor2;

    printf("\n---Digitar dados Carta 2---\n");

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", carta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a area (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib2);
    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float)populacao2 / area2;

    pibPerCapta2 = (float)pib2 / populacao2;

    vencedor2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPerCapta2;

    printf("\n---Exibindo os dados da carta1---\n");
    printf("\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea (em km²): %.2f\nPIB (em bilhões): %.2f\nNúmero de Pontos Turisticos: %d\nDensidade populacional: %.2f\nPIB per capta: %.2f\n", 
        carta1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapta1);
    printf("\n---Exibindo os dados da carta2---\n");
    printf("\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea (em km²): %.2f\nPIB (em bilhões): %.2f\nNúmero de Pontos Turisticos: %d\nDensidade populacional: %.2f\nPIB per capta: %.2f\n", 
        carta2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapta2);

       printf("\n  Comparando os valores das cartas  \n");

        if (populacao1 > populacao2) {
            printf("%s tem a maior população.\n", cidade1);
        } else {
            printf("%s tem a maior população.\n", cidade2);
        }

        if (area1 > area2) {
            printf("%s tem a maior área(em km²).\n", cidade1);
        } else {
            printf("%s tem a maior área(em km²).\n", cidade2);
        }

        if (pib1 > pib2) {
            printf("%s tem o maior PIB.\n", cidade1);
        } else {
            printf("%s tem o maior PIB.\n", cidade2);
        }

        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("%s tem mais Pontos Turisticos.\n", cidade1);
        } else {
            printf("%s tem mais Pontos Turisticos.\n", cidade2);
        }

        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("%s tem a menor Densidade Populacional.\n", cidade1);
        } else {
            printf("%s tem a menor Densidade Populacional.\n", cidade2);
        }

        if (pibPerCapta1 > pibPerCapta2) {
            printf("%s tem o maior PIB per capta.\n", cidade1);
        } else {
            printf("%s tem o maior PIB per capta.\n", cidade2);
        }

          printf("\n  Resultado carta vencedora  \n");

          if (vencedor1 > vencedor2) {
            printf("A carta %f Venceu.\n", vencedor1);
        } else {
            printf("A carta %f Venceu.\n", vencedor2);
        }
        
    return 0;
}
