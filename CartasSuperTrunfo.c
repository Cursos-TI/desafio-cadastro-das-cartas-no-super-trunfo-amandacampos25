#include <stdio.h>

int main() {
    //carta 1
    char estado1;
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //carta2
    char estado2;
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Iniciando o jogo colocando as informações da primeira carta

    printf("Primeira carta \n");

    printf("Digite uma letra de 'A' a 'H':\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (A letra do estado e um número de 1 a 4):\n");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite qual é a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite qual é a área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Insira quantos pontos turisticos essa cidade possui:\n");
    scanf("%d", &pontos_turisticos1);

    //Densidade Populacional da Carta 1 
    //dividir a população pela área

    densidade_populacional1 = populacao1/area1;

    //PIB Per Capita da Carta 1
    //Dividir o PIB pela população

    pib_percapita1 = pib1 / populacao1;


    //inserindo informações sobre a segunda carta

    printf("Segunda carta \n");

    printf("Digite uma letra de 'A' a 'H':\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (A letra do estado e um número de 1 a 4):\n");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite qual é a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite qual é a área da cidade (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Insira quantos pontos turisticos essa cidade possui:\n");
    scanf("%d", &pontos_turisticos2);

    //Densidade Populacional da Carta 2
    //dividir a população pela área

    densidade_populacional2 = populacao2/area2;

    //PIB Per Capita da Carta 2
    //Dividir o PIB pela população

    pib_percapita2 = pib2/populacao2;


    //Resultado do jogo - mostrando informações das cartas

    printf("CARTA 1\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
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
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.3f \n", densidade_populacional2);
    printf("PIB Per Capita: %.3f \n", pib_percapita2);

    //Desafio novato - OK 29/08/2025
    //Desafio aventureiro - OK 01/09/2025
    return 0;
}