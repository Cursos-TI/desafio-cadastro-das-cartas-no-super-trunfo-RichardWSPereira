#include <stdio.h>

int main() {
    

    
    // Definação das variáveis separadas para cada atributo da cidade.
    // Estado, codigo, nome da cidade serão representados por letras, logo, serão caracteres, assim digita com "char" na frente do nome da variável.
    // Diferentemente, o nome da cidade e codigo terão mais de um caractere, assim, é especificado entre colchetes a quantidade de caracteres.
    // Na população é digitado um número inteiro, logo, colocamos o "int" para atribuir a variável este atributo, depois colocamos os nomes das variável separadas com vírgula
    // Já o PIB e área é um ponto fluante, números que podem ser decimais, assim, "float" faz está definição antes de digitar os nomes das variáveis.
    
    char estadoB[50], estadoA[50];
    char codigoB[3], codigoA[3];
    char nomedacidadeB[50], nomedacidadeA[50];   
    unsigned long int populacaoA,populacaoB;
    int pontosturisticoA,  pontosturisticoB;  
    float areaA, pibA, areaB, pibB;

    // Criarei as variáveis de Densidade Populacional e PIB per capita, sendo estas variáveis do tipo float
    
    float densidadepopA = 0, PIBpercapitaA = 0;
    float densidadepopB = 0, PIBpercapitaB = 0;

    // O Super Poder também será declarado como float, pois será o resultado do somatório de todos os atributos,
    // Atributos que contêm variáveis com casas decimais

    float SuperPoderA, SuperPoderB;

    printf("Desafio Super Trunfo - Países \n");
    printf("Tema 1 - Cadastro das Cartas \n");
    printf("Teste Richard \n");
    printf("                               \n");

    // O printf é o comando que imprime na tela os dizeres
    // Já o scanf solicita ao usuário para digitar o que foi pedido 
    /* As variaveis tem os especificadores que são acompanhados pela porcentagens antes de escrevê-los para se remeter a alguma variavel,
    logo: %c (caractere) ; %s (strings) ; %f (numeros flutuantesna notação padrão);
    Logo depois, colocamos a variável que desejamos gravar o que o usuário digitou, lembrando de colocar o "&" antes de especificar a variável*/
    // Para o primeiro atributo da carta utilizei a ferramenta fgets para que o nome da cidade fosse digitado com espaços, já que scanf só aceita palavra sem espaços

    // Cadastro das Cartas:  
    
    printf("Qual o nome da cidade: ");
    fgets(nomedacidadeA,50,stdin);
    printf("Qual é este estado: "); 
    scanf("%s",estadoA);
    printf("Qual é o código da cidade do estado %s: ",estadoA);
    scanf("%s",codigoA);    
    printf("Qual é o número de habitantes: ");
    scanf("%lu",&populacaoA);
    printf("Qual é a área em km2: ");
    scanf("%f",&areaA);
    printf("Quantos bilhões tem o PIB desta cidade: ");
    scanf("%f",&pibA);
    printf("Qual é a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticoA);
    printf("                               \n");

    // Para encontrar o resultado da Densidade populacional devo dividir a população da cidade pela sua área 
    // Como também, devo dividir o PIB da cidade pela população para encontrar o PIB per capita
    // Esta conta sendo feito já dentro da atribuição das variáveis criadas para Densidade populacional e PIB per capita
    // Para que não haja problema com conversão de inteiros para float, vou explicitamente atribuir como float
    // Agora realizarei a conta do Super Poder, somando todos os atributos
    // Prestando atenção nas variaveis de tipos diferentes

    densidadepopA = (float) populacaoA / areaA;
    PIBpercapitaA = pibA / (float) populacaoA;
    SuperPoderA = ((float) populacaoA + areaA + pibA + (float) pontosturisticoA + 1/densidadepopA + PIBpercapitaA);
    
    // Exibição dos Dados da Carta 1:

    printf("* Carta 1 *\n");
    printf("Estado: %s \n",estadoA);
    printf("Código: %s \n", codigoA);
    printf("Nome da Cidade: %s \n", nomedacidadeA);
    printf("População: %lu \n", populacaoA);
    printf("Área: %.1f km2 \n", areaA);
    printf("PIB: %.1f bilhões de reais \n", pibA);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticoA);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopA);
    printf("PIB per Capita: %.2f reais \n", PIBpercapitaA);
    // Irei imprimir o valor do Super Poder de cada carta para saber se a conta foi realizada corretamente
    printf("O valor do Super Poder é: %.2f \n", SuperPoderA);

    printf("                               \n");
    printf("--------- Novo cadastro --------\n");
    printf("                               \n");

    // Foi utilizado o /n para pular a linha na execução do próximo código, assim como foi usado o printf com sucessivos espaços ṕara haver uma linha em branco entre os dizeres na tela
    // Podemos atribuir quantas casas decimais queremos nos pontos flutuantes, basta coloca o ponto e o numero exemplo o que foi colocado no codigo em área e PIB: %.1f

    printf("Qual o nome da cidade: ");
    fgets(nomedacidadeB,50,stdin);
    printf("Qual é este novo estado: "); 
    scanf("%s",estadoB);
    printf("Qual é o código da cidade do estado %s: ",estadoB);
    scanf("%s",codigoB);
    printf("Qual é o número de habitantes: ");
    scanf("%lu",&populacaoB);
    printf("Qual é a área em km2: ");
    scanf("%f",&areaB);
    printf("Quantos bilhões tem o PIB desta cidade: ");
    scanf("%f",&pibB);
    printf("Qual é a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticoB);
    printf("                               \n");

    // Mesmo processo para descobrir a densidade populacional, PIB per capita e Super poder da cidade 1 será feito nesta

    densidadepopB = (float) populacaoB / areaB;
    PIBpercapitaB = pibB / (float) populacaoB;
    SuperPoderB = ((float) populacaoB + areaB + pibB + (float) pontosturisticoB + 1/densidadepopB + PIBpercapitaB);

    printf("* Carta 2 *\n");
    printf("Estado: %s \n", estadoB);
    printf("Código: %s \n", codigoB);
    printf("Nome da Cidade: %s \n", nomedacidadeB);
    printf("População: %lu \n", populacaoB);
    printf("Área: %.1f km2 \n", areaB);
    printf("PIB: %.1f bilhões de reais \n", pibB);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticoB);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopB);
    printf("PIB per Capita: %.2f reais \n", PIBpercapitaB);
    printf("O valor do Super Poder é: %.2f \n", SuperPoderB);
    printf("                               \n");

    // Agora vamos realizar as comparações dos atributos carta por carta
    // Dessa forma, usando os operadores relacionais, receberei como resultado o valor 0 para falso, quando algum atributo não é maior que o outro e resultado 1 para verdadeiro
    
    /* printf("População da carta 1 é maior que o da carta 2: %d \n", populacaoA > populacaoB);
    printf("Área da carta 1 é maior que o da carta 2: %d \n", areaA > areaB);
    printf("PIB da carta 1 é maior que o da carta 2: %d \n", pibA > pibB);
    printf("Números de Pontos Turísticos da carta 1 é maior que o da carta 2: %d \n", pontosturisticoA > pontosturisticoB);
    printf("Densidade Populacional da carta 1 é menor que o da carta 2: %d \n", densidadepopA < densidadepopB);
    printf("PIB Per Capitada carta 1 é maior que o da carta 2: %d \n", PIBpercapitaA > PIBpercapitaB);
    printf("Super Poder da carta 1 é maior que o da carta 2: %d \n", SuperPoderA > SuperPoderB); */

    // Utilize a densidade populacional para determinar qual carta apresentado o melhor atributo, neste caso, ganha quem tiver a menor densidade populacional
    // Para esta decisão utilizei a condicional if e else, assim, através do operador relacional é possível determinar qual carta ganhará, logo, qual mensagem aparecerá, carta 1 ou carta 2 ganhadora
    
    printf("--------- Comparação de cartas  (Atributo: População): --------\n");
    printf("                               \n");
    printf("Carta 1 - %s (%s): %f \n", nomedacidadeA, estadoA, densidadepopA);
    printf("Carta 1 - %s (%s): %f \n", nomedacidadeB, estadoB, densidadepopB);
        if (densidadepopA < densidadepopB) {
            printf("Resultado: Carta 1 (%s) venceu! \n", nomedacidadeA);
        } else {
            printf("Resultado: Carta 2 (%s) venceu! \n", nomedacidadeB);
        }


    return 0;
}