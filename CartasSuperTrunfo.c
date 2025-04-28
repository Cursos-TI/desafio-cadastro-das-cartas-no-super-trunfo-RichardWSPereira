int main() {
    

    
    // Definação das variáveis separadas para cada atributo da cidade.
    
    char estadoA, estadoB;
    char codigoA[3], codigoB[3];
    char nomedacidadeA[30], nomedacidadeB[30];
    int populacaoA, pontosturisticoA, populacaoB, pontosturisticoB;
    float areaA, pibA, areaB, pibB;

    // Cadastro das Cartas:  
    
    printf("Desafio Super Trunfo - Países \n");
    printf("Tema 1 - Cadastro das Cartas \n");
    printf("Teste Richard \n");
    printf("                               \n");

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
    
    printf("------------------------------\n");
    printf("Novo cadastro:\n");
    

    printf("Qual é a letra que representa este novo estado: ");
    scanf("%s",&estadoB);
    printf("Qual é o código da cidade do estado %c: ",estadoB);
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
    printf("------------------------------\n");

    // Exibição dos Dados das Cartas:
    
    printf("Carta 1: \n");
    printf("Estado: %c \n",estadoA);
    printf("Código: %s \n", codigoA);
    printf("Nome da Cidade: %s \n", nomedacidadeA);
    printf("População: %d \n", populacaoA);
    printf("Área: %.1f km2 \n", areaA);
    printf("PIB: %.1f bilhões de reais \n", pibA);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticoA);

    printf("                               \n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", estadoB);
    printf("Código: %s \n", codigoB);
    printf("Nome da Cidade: %s \n", nomedacidadeB);
    printf("População: %d \n", populacaoB);
    printf("Área: %.1f km2 \n", areaB);
    printf("PIB: %.1f bilhões de reais \n", pibB);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticoB);
    printf("------------------------------\n");
    

    return 0;
}