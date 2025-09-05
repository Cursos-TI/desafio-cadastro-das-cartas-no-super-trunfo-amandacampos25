#include <stdio.h>

int main() {
    //carta 1
    char estado1;
    char codigo1[5];
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_percapita1;
    float superPoder1;

    //carta2
    char estado2;
    char codigo2[5];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_percapita2;
    float superPoder2;

    //Iniciando o jogo colocando as informações da primeira carta

    printf("Primeira carta \n");

    printf("Digite uma letra de 'A' a 'H':\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (A letra do estado e um número de 1 a 4):\n");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite qual é a população da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Digite qual é a área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Insira quantos pontos turisticos essa cidade possui:\n");
    scanf("%d", &pontos_turisticos1);

    //Densidade Populacional da Carta 1 
    //dividir a população pela área

    densidade_populacional1 = (populacao1/area1);

    //PIB Per Capita da Carta 1
    //Dividir o PIB pela população

    pib_percapita1 = (pib1 / populacao1);

    //Calculando o super poder da carta 1 (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

    superPoder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + (1 / densidade_populacional1);


    //inserindo informações sobre a segunda carta

    printf("Segunda carta \n");

    printf("Digite uma letra de 'A' a 'H':\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (A letra do estado e um número de 1 a 4):\n");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite qual é a população da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Digite qual é a área da cidade (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Insira quantos pontos turisticos essa cidade possui:\n");
    scanf("%d", &pontos_turisticos2);

    //Densidade Populacional da Carta 2
    //dividir a população pela área

    densidade_populacional2 = (populacao2/area2);

    //PIB Per Capita da Carta 2
    //Dividir o PIB pela população

    pib_percapita2 = (pib2 / populacao2);

    //Calculando o super poder da carta 2 (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

    superPoder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapita2 + (1 / densidade_populacional2);

    //Resultado do jogo - mostrando informações das cartas

    printf("CARTA 1\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos Turisticos: %d \n", pontos_turisticos1);
    printf("Densidade Populacional: %f \n", densidade_populacional1);
    printf("PIB Per Capita: %f \n", pib_percapita1);

    printf("\n");

    printf("CARTA 2\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.3f \n", densidade_populacional2);
    printf("PIB Per Capita: %.3f \n", pib_percapita2);

    //Comparando as cartas

    printf("COMPARANDO AS CARTAS\n");

    printf("População: Carta 1 venceu (%d) \n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d) \n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d) \n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d) \n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d) \n", pib_percapita1 > pib_percapita2);
    printf("Super Poder: Carta 1 venceu (%d) \n", superPoder1 > superPoder2);


    return 0;
}