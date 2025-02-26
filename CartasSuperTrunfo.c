#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Teste Richard

int main() {

    char estadoA;
    char codigoA[3];
    char nomedacidadeA[30];
    int populacaoA, pontosturisticoA;
    float areaA, pibA;

    char estB = 0;
    char codigoB[3];
    char nomedacidadeB[30];
    int populacaoB, pontosturisticoB;
    float areaB, pibB;

    printf("Qual é a letra que representa este estado: ");
    scanf("%c",&estadoA);
    printf("Qual é o código da cidade do estado %c: ", estadoA);
    scanf("%s",&codigoA);
    printf("Qual o nome da cidade: ");
    scanf("%s",&nomedacidadeA);
    printf("Qual é o número de habitantes: ");
    scanf("%d",&populacaoA);
    printf("Qual é a área em km2: ");
    scanf("%f",&areaA);
    printf("Quantos bilhões tem o pib desta cidade: ");
    scanf("%f",&pibA);
    printf("Qual é a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticoA);


    printf("------ Carta 1 ------ \n");
    printf("Estado: %c \n",estadoA);
    printf("Código: %s \n", codigoA);
    printf("Nome da Cidade: %s \n", nomedacidadeA);
    printf("População: %d \n", populacaoA);
    printf("Área: %.1f km2 \n", areaA);
    printf("PIB: %.1f bilhões de reais \n", pibA);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticoA);

   
    printf("Qual é a letra que representa este novo estado: ");
    printf("Qual é o código da cidade do estado %c: ", estB);
    scanf("%s",&codigoB);
    printf("Qual o nome da cidade: ");
    scanf("%s",&nomedacidadeB);
    printf("Qual é o número de habitantes: ");
    scanf("%d",&populacaoB);
    printf("Qual é a área em km2: ");
    scanf("%f",&areaB);
    printf("Quantos bilhões tem o pib desta cidade: ");
    scanf("%f",&pibB);
    printf("Qual é a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticoB);

    printf("------ Carta 2 ------ \n");
    printf("Estado: %c \n",estB);
    printf("Código: %s \n", codigoB);
    printf("Nome da Cidade: %s \n", nomedacidadeB);
    printf("População: %d \n", populacaoB);
    printf("Área: %.1f km2 \n", areaB);
    printf("PIB: %.1f bilhões de reais \n", pibB);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticoB);

    return 0;
}
