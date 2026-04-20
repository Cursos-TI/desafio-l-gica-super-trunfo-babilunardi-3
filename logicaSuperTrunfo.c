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
    int opcao, atributo1, atributo2, resultado1, resultado2;

    //Inicio do jogo

    printf("**Bem vindo ao supertrunfo da babi***\n");
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras\n");
    scanf("%d", &opcao);

    switch (opcao)

    {
    case 1: 
        printf("**** INICIANDO ****\n");
        break;

    case 2: 
        printf("Regras:\n");
        printf("Digite as informacoes solicitadas para as duas cartas\n");
        printf("Após as informacoes, compare para ver quem venceu!\n");
        break;
    
    default:
        printf("**Opcao invalida**\n");
        return 0;
        break;
    }

 // Área para entrada de dados

    printf("**** INICIANDO **** \n");

    printf("Digite o Código da sua carta: ");
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

    printf("**Carta 1** \n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %c%s \n", estado, codcarta);
    printf("Nome da cidade: %s \n", cidade);
    printf("Área: %f e Pib %f \n", area, pib);
    printf("Possui populacao: %d \n", populacao);
    printf("Densidade Populacional: %.2f \n", densipop);
    printf("Pib per capita: %.2f \n", pibc);
    printf("Superpoder total: %.2f \n", superpodera);
    printf("E Possui: %d pontos turísticos \n", numturisticos);

    printf("**Carta 2** \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codcarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Área: %f e Pib %f \n", area2, pib2);
    printf("Possui populacao: %d \n", populacao2);
    printf("Densidade Populacional: %.2f \n", densipop2);
    printf("Pib per capita: %.2f \n", pibc2);
    printf("Superpoder total: %.2f \n", superpoderb);
    printf("E Possui: %d pontos turísticos \n", numturisticos2);

    printf("**Escolha o primeiro atributo que voce quer batalhar** \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Superpoder\n");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        printf("O primeiro atributo escolhido foi Populacao :D\n");
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
        printf("O primeiro atributo escolhido foi Area :D\n");
        resultado1 = area > area2 ? 1 : 0;
        break;

    case 3:
        printf("O primeiro atributo escolhido foi Pib :D\n");
        resultado1 = pib > pib2 ? 1 : 0;
        break;

    case 4:
        printf("O primeiro atributo escolhido foi Pontos Turisticos :D\n");
        resultado1 = numturisticos > numturisticos2 ? 1 : 0;
        break;

    case 5:
        printf("O primeiro atributo escolhido foi Densidade populacional:D\n");
        resultado1 = densipop < densipop2 ? 1 : 0;
        break;

    case 6:
        printf("O primeiro atributo escolhido foi Super poder :D\n");
        resultado1 = superpodera > superpoderb ? 1 : 0;
        break;
        
    default:
        break;
    }

    printf("**Escolha o segundo atributo que voce quer batalhar** \n");
    printf("**Atencao escolha um atributo diferente para batalhar!!**\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Superpoder\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    { printf("Voce nao leu???? Porfavor, escolha OUTRO atributo!!\n");
        return 0;
    }

    switch (atributo2)
    {
    case 1:
        printf("O segundo atributo escolhido foi Populacao :D\n");
        resultado2 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
        printf("O segundo atributo escolhido foi Area :D\n");
        resultado2 = area > area2 ? 1 : 0;
        break;

    case 3:
        printf("O segundo atributo escolhido foi Pib :D\n");
        resultado2 = pib > pib2 ? 1 : 0;
        break;

    case 4:
        printf("O segundo atributo escolhido foi Pontos Turisticos :D\n");
        resultado2 = numturisticos > numturisticos2 ? 1 : 0;
        break;

    case 5:
        printf("O segundo atributo escolhido foi Densidade populacional:D\n");
        resultado2 = densipop < densipop2 ? 1 : 0;
        break;

    case 6:
        printf("O segundo atributo escolhido foi Super poder :D\n");
        resultado2 = superpodera > superpoderb ? 1 : 0;
        break;

    default:
        break;
    }

    if (resultado1 && resultado2) 
    {   printf("Oba!!! A Cidade de %s escolhida venceu!! <3\n", cidade);
        
    
    } else if (resultado1 != resultado2) {
        printf("Nossa!! A cidade de %s e a cidade de %s empataram >< que coincidencia nenhuma das cidades foi a vencedora\n", cidade, cidade2);
        
    } 
    else { 
        printf("Parece que nao foi dessa vez :/ A cidade de %s foi derrotada pela cidade de %s.\n", cidade, cidade2);
        
    
    }


return 0;

}
