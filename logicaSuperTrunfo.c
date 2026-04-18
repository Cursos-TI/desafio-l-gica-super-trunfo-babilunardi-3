#include <stdio.h>

int main(){

// Desafio Super Trunfo - Países


    int numturisticos, numturisticos2; 
    unsigned long int populacao, populacao2;
    float area, pib, area2, pib2;
    char estado, estado2;
    char cidade[30], cidade2[30];
    char codcarta[20], codcarta2[20];
    float densipop, densipop2, pibc, pibc2;
    float superpodera, superpoderb;

 // Área para entrada de dados

    printf("Código da sua carta: ");
    scanf("%s", codcarta);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade);

    printf("Digite o Estado: ");
    scanf(" %c", &estado);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &numturisticos);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Próxima Carta... \n");

    printf("Código da sua carta: ");
    scanf("%s", codcarta2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &numturisticos2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    densipop = populacao / area;
    densipop2 = populacao2 / area2;

    pibc = pib / populacao;
    pibc2 = pib2 / populacao2;

    superpodera = (float) pib + populacao + area + pibc + numturisticos + (area / populacao); 
    superpoderb = (float) pib2 + populacao2 + area2 + pibc2 + numturisticos2 + (area2 / populacao2);

    // Área para exibição dos dados da cidade

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %c%s \n", estado, codcarta);
    printf("Nome da cidade: %s \n", cidade);
    printf("Área: %f e Pib %f \n", area, pib);
    printf("Possui populacao: %d \n", populacao);
    printf("Densidade Populacional: %.2f \n", densipop);
    printf("Pib per capita: %.2f \n", pibc);
    printf("Superpoder total: %.2f \n", superpodera);
    printf("E Possui: %d pontos turísticos \n", numturisticos);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codcarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Área: %f e Pib %f \n", area2, pib2);
    printf("Possui populacao: %d \n", populacao2);
    printf("Densidade Populacional: %.2f \n", densipop2);
    printf("Pib per capita: %.2f \n", pibc2);
    printf("Superpoder total: %.2f \n", superpoderb);
    printf("E Possui: %d pontos turísticos \n", numturisticos2);

    printf("Segue resultado da batalha: \n");

    if (populacao > populacao2) {
        printf("Em populacao a Carta 1 venceu!! \n");
    } else {
        printf("Em populacao a Carta 2 venceu!! \n");
    }

    if (area > area2) { 
        printf("Em area a Carta 1 venceu!! \n");
    } else {
        printf("Em area a Carta 2 venceu!! \n");
    }

    if (pibc > pibc2) {
        printf("No Pib Per capita a Carta 1 venceu!! \n");
    } else {
        printf("No Pib Per capita a Carta 2 venceu!! \n");
    }

    if (numturisticos > numturisticos2) {
        printf("Em pontos turísticos a Carta 1 venceu!! \n");
    } else {
        printf("Em pontos turísticos a Carta 2 venceu!! \n");
    }

    if (pib > pib2) {
        printf("Em Pib a Carta 1 venceu!! \n");
    } else {
        printf("Em Pib a Carta 2 venceu!! \n");
    }

    if ((float) (area / populacao) < (area2 / populacao2)) {
        printf("Em Densidade populacional a Carta 1 venceu!! \n");
    } else {
        printf("Em Densidade populacional a Carta 2 venceu!! \n");
    }

    if (superpodera > superpoderb) {
        printf("O Super Poder da Carta 1 venceu!! \n");
    } else {
        printf("O Super poder da Carta 2 venceu!! \n");
    }


    return 0;

    }
