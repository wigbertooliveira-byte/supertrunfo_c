#include <stdio.h>
#include <string.h>

int main() {

    // Declarando variaveis da carta 1
    char estado1;
    char codigocarta1 [5];
    char cidadenome1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Declarando variaveis da carta 2
    char estado2;
    char codigocarta2 [5];
    char cidadenome2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
    // Solicitando dados da carta 1
    
    printf("Ola usuario, bem vindo ao super-trunfo\n Vamos cadastrar a Carta 1\n");
    printf("Digite uma letra de A a H para representar um estado: \n");
    scanf("%c", &estado1);
    printf("Agora digite um número de 01 a 04: \n");
    scanf("%s", &codigocarta1);
    printf("Digite o nome da cidade: \n");
    getchar(); // Essa foi a solucao para evitar problemas no codigo, remove o '\n' deixado pelo scanf anterior
    fgets(cidadenome1, 50, stdin);
    printf("Qual a populacao da cidade de %s?\n", cidadenome1);
    scanf("%i", &populacao1);
    printf("Qual a area em quilometros quadrados?\n");
    scanf("%f", &area1);
    printf("Qual o PIB:\n");
    scanf("%f", &pib1);
    printf("Quantos pontos turistiscos %s possui?\n", cidadenome1);
    scanf("%i", &pontosturisticos1); 

    // Solicitando dados da carta 2
    
    printf("Ola usuario, bem vindo ao super-trunfo\n Vamos cadastrar a Carta 1\n");
    printf("Digite uma letra de A a H para representar um estado: \n");
    scanf("%c", &estado2);
    printf("Agora digite um número de 01 a 04: \n");
    scanf("%s", &codigocarta2);
    printf("Digite o nome da cidade: \n");
    getchar(); // Essa foi a solucao para evitar problemas no codigo, remove o '\n' deixado pelo scanf anterior
    fgets(cidadenome2, 50, stdin);
    printf("Qual a populacao da cidade de %s?\n", cidadenome2);
    scanf("%i", &populacao2);
    printf("Qual a area em quilometros quadrados?\n");
    scanf("%f", &area2);
    printf("Qual o PIB:\n");
    scanf("%f", &pib2);
    printf("Quantos pontos turistiscos %s possui?\n", cidadenome2);
    scanf("%i", &pontosturisticos2); 
    
    // Exibindo resultados da carta 1

    printf("--------------------------------------------\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %c%s \n", estado1, codigocarta1);
    printf("Populacao: %i \n", populacao1);
    printf("Area: %f quilometros quadrados \n", area1);
    printf("PIB: %f bilhoes de reais \n", pib1);
    printf("Numero de pontos turisticos: %i \n", pontosturisticos1);

    // Exibindo resultados da carta 2
    printf("--------------------------------------------\n");
    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codigocarta2);
    printf("Populacao: %i \n", populacao2);
    printf("Area: %f quilometros quadrados \n", area2);
    printf("PIB: %f bilhoes de reais \n", pib2);
    printf("Numero de pontos turisticos: %i \n", pontosturisticos2);

    return 0;

}
