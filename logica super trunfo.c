#include <stdio.h>

int main(){
    //carta 1
    char estado1[50] = "Ceará";
    char carta1[4] = "A01";
    char cidade1[50] = "Fortaleza";
    int populacao1 = 2500;
    float area1 = 31.40;
    float pib1 = 20.45;
    int pontosTuristicos1 = 16;
    float densidade_populacional1;
    float PIB_per_capta1;
    float valor1;

    densidade_populacional1 = (float)(populacao1 / area1);
    PIB_per_capta1 = (float)(pib1 / populacao1);

    valor1 = populacao1 + area1 + pib1 + pontosTuristicos1 - densidade_populacional1 + PIB_per_capta1;

    printf("\n---Dados Carta 1---\n");
    printf("O nome do estado é: %s\n", estado1);
    printf("O código da carta é: %s\n", carta1);
    printf("O nome da cidade é: %s\n", cidade1);
    printf("A População de Fortaleza é: %d\n", populacao1);
    printf("A Área (em km²) é: %.2f\n", area1);
    printf("PIB (em bilhões): %.2f\n", pib1);
    printf("Densidade populacional: %.2f\n", densidade_populacional1);
    printf("Pib per capta: %.2f\n", PIB_per_capta1);

    //carta 2
        char estado2[50] = "Amazonas";
        char carta2[4] = "B02";
        char cidade2[50] = "Manaus";
        int populacao2 = 4300;
        float area2 = 41.401;
        float pib2 = 6.45;
        int pontosTuristicos2 = 7;
        float densidade_populacional2;
        float PIB_per_capta2;
        float valor2;

        densidade_populacional2 = (float)(populacao2 / area2);
        PIB_per_capta2 = (float)(pib2 / populacao2);

        valor2 = populacao2 + area2 + pib2 + pontosTuristicos2 - densidade_populacional2 + PIB_per_capta2;
        
        printf("\n---Dados Carta 2---\n");
        printf("O nome do estado é: %s\n", estado2);
        printf("O código da carta é: %s\n", carta2);
        printf("O nome da cidade é: %s\n", cidade2);
        printf("A População de Manaus é: %d\n", populacao2);
        printf("A Área (em km²) é: %.2f\n", area2);
        printf("PIB (em bilhões): %.2f\n", pib2);
        printf("Densidade populacional: %.2f\n", densidade_populacional2);
        printf("Pib per capta: %.2f\n", PIB_per_capta2);
        
        printf("\n---Comparando os valores---\n");

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

        if (densidade_populacional1 < densidade_populacional2) {
            printf("%s tem a menor densidade populacional.\n", cidade1);
        } else {
            printf("%s tem a menor densidade populacional.\n", cidade2);
        }
        
        //Determinando a carta vencedora
        printf("\n   Descobrindo a carta vencedora   \n");
        if (valor1 > valor2) {
            printf("%s Venceu!\n", carta1);
        } else {
            printf("%s Venceu!.\n", carta2);
        }




    return 0;
}