#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main(){

//Informações carta 1
    char estado1;
    char codigo1[5];
    char cidade1;
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

//Informações da carta 2
    char estado2;
    char codigo2[5];
    char cidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

//Iniciando o jogo colocando as informações da primeira carta

    printf("Primeira carta \n");

    printf("Digite uma letra de 'A' a 'H':");
    scanf("%c", &estado1);

    printf("Digite o código da carta (1 até 4):");
    scanf("%s", &codigo1);

    printf("Insira o nome da cidade:");
    scanf("%s", &cidade1);

    printf("Digite qual é a população da cidade:");
    scanf("%d", &populacao1);

    printf("Digite qual é a área da cidade (em km²):");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("Insira quantos pontos turisticos essa cidade possui:");
    scanf("%d", &pontos_turisticos1);

//inserindo informações sobre a segunda carta

    printf("Segunda carta\n");

    printf("Digite uma letra de 'A' a 'H':");
    scanf("%c", &estado2);

    printf("Digite o código da carta (1 até 4):");
    scanf("%s", &codigo2);

    printf("Insira o nome da cidade:");
    scanf("%s", &cidade2);

    printf("Digite qual é a população da cidade:");
    scanf("%d", &populacao2);

    printf("Digite qual é a área da cidade (em km²):");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Insira quantos pontos turisticos essa cidade possui:");
    scanf("%d", &pontos_turisticos2);






    return 0;
}
