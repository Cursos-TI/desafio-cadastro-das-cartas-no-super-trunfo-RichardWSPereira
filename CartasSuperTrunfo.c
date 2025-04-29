#include <stdio.h>


int main() {
    

    
    // Definação das variáveis separadas para cada atributo da cidade.
    // Estado, codigo, nome da cidade serão representados por letras, logo, serão caracteres, assim digita com "char" na frente do nome da variável.
    // Diferentemente, o nome da cidade e codigo terão mais de um caractere, assim, é especificado entre colchetes a quantidade de caracteres.

    char estadoA;
    char codigoA[3];
    char nomedacidadeA[30];
    int populacaoA, pontosturisticoA;
    float areaA, pibA;

    char estadoB;
    char codigoB[3];
    char nomedacidadeB[30];
    int populacaoB, pontosturisticoB;
    float areaB, pibB;

    // Na população é digitado um número inteiro, logo, colocamos o "int" para atribuir a variável este atributo, depois colocamos os nomes das variável separadas com vírgula
    int populacaoA, pontosturisticoA, populacaoB, pontosturisticoB;

    // Já o PIB e área é um ponto fluante, números que podem ser decimais, assim, "float" faz está definição antes de digitar os nomes das variáveis.
    float areaA, pibA, areaB, pibB;
    
    printf("Desafio Super Trunfo - Países \n");
    printf("Tema 1 - Cadastro das Cartas \n");
    printf("Teste Richard \n");
    printf("                               \n");

    // O printf é o comando que imprime na tela os dizeres
    // Já o scanf solicita ao usuário para digitar o que foi pedido 
    /* As variaveis tem os especificadores que são acompanhados pela porcentagens antes de escrevê-los para se remeter a alguma variavel,
    logo: %c (caractere) ; %s (strings) ; %f (numeros flutuantesna notação padrão);
    Logo depois, colocamos a variável que desejamos gravar o que o usuário digitou, lembrando de colocar o "&" antes de especificar a variável*/
    // Cadastro das Cartas:  

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

    printf("                               \n");
    printf("--------- Novo cadastro --------\n");
    printf("                               \n");

    // Foi utilizado o /n para pular a linha na execução do próximo código, assim como foi usado o printf com sucessivos espaços ṕara haver uma linha em branco entre os dizeres na tela

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
    printf("                               \n");

    printf("Exibição dos Dados das Cartas: \n");
    printf("                               \n");

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