#include <stdio.h>

int main() {
    

    
    // Definação das variáveis separadas para cada atributo do país
    // País, nome do país serão representados por letras, logo, serão caracteres, assim digita com "char" na frente do nome da variável.
    // Diferentemente, é especificado entre colchetes a quantidade de caracteres.
    // Na população é digitado um número inteiro, logo, colocamos o "int" para atribuir a variável este atributo, depois colocamos os nomes das variável separadas com vírgula
    // Já o PIB e área é um ponto fluante, números que podem ser decimais, assim, "float" faz está definição antes de digitar os nomes das variáveis.
    
    char nomedopaisB[50], nomedopaisA[50];   
    unsigned long int populacaoA,populacaoB;
    int pontosturisticoA,  pontosturisticoB;  
    float areaA, pibA, areaB, pibB;

    // Criarei a variável de Densidade Populacional, sendo estas variáveis do tipo float
    
    float densidadepopA, densidadepopB;

    // Criando a variável destinada para armazenar o atributo que o usuário gostará de ver a comparação das cartas
    int atributo;

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
    
    printf("Qual do país: ");
    scanf("%s",nomedopaisA);   
    printf("Qual é o número de habitantes: ");
    scanf("%lu",&populacaoA);
    printf("Qual é a área em km2: ");
    scanf("%f",&areaA);
    printf("Quantos bilhões tem o PIB: ");
    scanf("%f",&pibA);
    printf("Qual é a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticoA);
    printf("                               \n");

    // Para encontrar o resultado da Densidade populacional devo dividir a população da cidade pela sua área 
    // Esta conta sendo feito já dentro da atribuição das variáveis criadas para Densidade populacional
    // Para que não haja problema com conversão de inteiros para float, vou explicitamente atribuir como float

    densidadepopA = (float) populacaoA / areaA;
    
    // Exibição dos Dados da Carta 1:

    printf("* Carta 1 *\n");
    printf("Nome do País: %s \n", nomedopaisA);
    printf("População: %lu \n", populacaoA);
    printf("Área: %.1f km2 \n", areaA);
    printf("PIB: %.1f bilhões de reais \n", pibA);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticoA);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopA);

    printf("                               \n");
    printf("--------- Novo cadastro --------\n");
    printf("                               \n");

    // Foi utilizado o /n para pular a linha na execução do próximo código, assim como foi usado o printf com sucessivos espaços ṕara haver uma linha em branco entre os dizeres na tela
    // Podemos atribuir quantas casas decimais queremos nos pontos flutuantes, basta coloca o ponto e o numero exemplo o que foi colocado no codigo em área e PIB: %.1f

    printf("Qual o nome do país: ");
    scanf("%s",nomedopaisB);
    printf("Qual é o número de habitantes: ");
    scanf("%lu",&populacaoB);
    printf("Qual é a área em km2: ");
    scanf("%f",&areaB);
    printf("Quantos bilhões tem o PIB: ");
    scanf("%f",&pibB);
    printf("Qual é a quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticoB);
    printf("                               \n");

    // Mesmo processo para descobrir a densidade populacional será feito nesta

    densidadepopB = (float) populacaoB / areaB;

    printf("* Carta 2 *\n");
    printf("Nome do País: %s \n", nomedopaisB);
    printf("População: %lu \n", populacaoB);
    printf("Área: %.1f km2 \n", areaB);
    printf("PIB: %.1f bilhões de reais \n", pibB);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticoB);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopB);
    printf("                               \n");

    // Agora vamos realizar as comparações dos atributos carta por cartA
    // Utilize a densidade populacional para determinar qual carta apresentado o melhor atributo, neste caso, ganha quem tiver a menor densidade populacional
    // Os demais atributos, a carta vencedora será o que tiver o maior número
    // Para esta decisão utilizei a condicional if - else if - else, assim, através do operador relacional é possível determinar qual carta ganhará, logo, qual mensagem aparecerá, carta 1 ou carta 2 ganhadora.
    // O else final é para o caso de empate, quando nenhuma das duas condições são verificadas
    // Para deixar interativo, colocarei a estrutura switch para proporcionar ao usuário o direito de escolher qual atributo quer comparar ou mostrar
    // Assim, cada case mostrará o atributo das cartas e depois através do if - else if mostrará qual a carta ganhou

    
    printf("--------- Comparação de cartas  --------\n");
    printf("                               \n");
    printf("### Menu de atributos ### \n");
    printf("(1) Nome dos Países \n");
    printf("(2) População \n");
    printf("(3) Área \n");
    printf("(4) PIB \n");
    printf("(5) Número de Pontos Turísticos \n");
    printf("(6) Densidade Demográfica \n");
    printf("                               \n");
    printf("Digite o atributo: ");
    scanf("%d",&atributo);
    printf("                               \n");

    switch (atributo)
    {
    case 1:
        printf("### Atributo: Nome do País ### \n");
        printf("Carta 1: %s \n", nomedopaisA);
        printf("Carta 2: %s \n", nomedopaisB);
        break;
    case 2:
        printf("### Atributo: População ### \n");
        printf("Carta 1 - %s: %lu \n", nomedopaisA, populacaoA);
        printf("Carta 2 - %s: %lu \n", nomedopaisB, populacaoB);
        if (populacaoA > populacaoB) {
            printf("Resultado: Carta 1 (%s) venceu! \n", nomedopaisA);
        } else if (populacaoA < populacaoB) {
            printf("Resultado: Carta 2 (%s) venceu! \n", nomedopaisB);
        } else {
            printf("Resultado: Empate!");
        }
        break;
    case 3:
        printf("### Atributo: Área ### \n");
        printf("Carta 1 - %s: %.1f km2 \n", nomedopaisA, areaA);
        printf("Carta 2 - %s: %.1f km2 \n", nomedopaisB, areaB);
        if (areaA > areaB) {
            printf("Resultado: Carta 1 (%s) venceu! \n", nomedopaisA);
        } else if (areaA < areaB) {
            printf("Resultado: Carta 2 (%s) venceu! \n", nomedopaisB);
        } else {
            printf("Resultado: Empate!");
        }
        break;
    case 4:
        printf("### Atributo: PIB ### \n");
        printf("Carta 1 - %s: %.1f bilhões de reais  \n", nomedopaisA, pibA);
        printf("Carta 2 - %s: %.1f bilhões de reais  \n", nomedopaisB, pibB);
        if (pibA > pibB) {
            printf("Resultado: Carta 1 (%s) venceu! \n", nomedopaisA);
        } else if (pibA < pibB) {
            printf("Resultado: Carta 2 (%s) venceu! \n", nomedopaisB);
        } else {
            printf("Resultado: Empate!");
        }
        break;
    case 5:
        printf("### Atributo: Pontos Turísticos ### \n");
        printf("Carta 1 - %s: %d \n", nomedopaisA, pontosturisticoA);
        printf("Carta 2 - %s: %d \n", nomedopaisB, pontosturisticoB);
        if (pontosturisticoA > pontosturisticoB) {
            printf("Resultado: Carta 1 (%s) venceu! \n", nomedopaisA);
        } else if (pontosturisticoA < pontosturisticoB) {
            printf("Resultado: Carta 2 (%s) venceu! \n", nomedopaisB);
        } else {
            printf("Resultado: Empate!");
        }
        break;
    case 6:
        printf("### Atributo: Densidade Demográfica ### \n");
        printf("Carta 1 - %s: %f \n", nomedopaisA, densidadepopA);
        printf("Carta 2 - %s: %f \n", nomedopaisB, densidadepopB);
        if (densidadepopA < densidadepopB) {
            printf("Resultado: Carta 1 (%s) venceu! \n", nomedopaisA);
        } else if (densidadepopA > densidadepopB) {
            printf("Resultado: Carta 2 (%s) venceu! \n", nomedopaisB);
        } else {
            printf("Resultado: Empate!");
        }
        break;  
    default:
        printf("Opção inválida!");
        break;
    }


    return 0;
}