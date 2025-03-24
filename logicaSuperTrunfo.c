#include <stdio.h>

int main() {
    //carta
    char estado1 = "A";
    char carta1[3];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
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

    //carta2
    char estado2 = "B";
    char carta2[3];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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

    printf("\n---Exibindo os dados da carta1---\n");
    printf("\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea (em km²): %.2f\nPIB (em bilhões): %.2f\nNúmero de Pontos Turisticos: %d\n", 
        carta1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    printf("\n---Exibindo os dados da carta2---\n");
    printf("\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea (em km²): %.2f\nPIB (em bilhões): %.2f\nNúmero de Pontos Turisticos: %d\n", 
        carta2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
