#include <stdio.h>

int main() {
    

    
    // Definação das variáveis separadas para cada atributo do país
    // País, nome do país serão representados por letras, logo, serão caracteres, assim digita com "char" na frente do nome da variável.
    // Diferentemente, é especificado entre colchetes a quantidade de caracteres.
    // Na população é digitado um número inteiro, logo, colocamos o "int" para atribuir a variável este atributo, depois colocamos os nomes das variável separadas com vírgula
    // Já o PIB e área é um ponto fluante, números que podem ser decimais, assim, "float" faz está definição antes de digitar os nomes das variáveis.
    
    char nomedopaisB[50] = "Brasil", nomedopaisA[50] = "Mexico";   
    unsigned long int populacaoA = 2500000043,populacaoB = 4783283823;
    int pontosturisticoA = 65,  pontosturisticoB = 57;  
    float areaA = 7318378, pibA = 9932903, areaB = 33891392, pibB = 47836443;

    // Criarei a variável de Densidade Populacional, sendo estas variáveis do tipo float
    
    float densidadepopA, densidadepopB;

    // Criando a variável destinada para armazenar as opções de atributos que o usuário gostará de ver na comparação das cartas
    char atributo1, atributo2;

    printf("Desafio Super Trunfo - Países \n");
    printf("Tema 2 - Comparação das Cartas \n");
    printf("Teste Richard \n");
    printf("                               \n");

    // Para encontrar o resultado da Densidade populacional devo dividir a população da cidade pela sua área 
    // Esta conta sendo feito já dentro da atribuição das variáveis criadas para Densidade populacional
    // Para que não haja problema com conversão de inteiros para float, vou explicitamente atribuir como float

    densidadepopA = (float) populacaoA / areaA;

    
    // Mesmo processo para descobrir a densidade populacional será feito nesta

    densidadepopB = (float) populacaoB / areaB;

    // Agora devo declarar as variáveis de soma dos atributos escolhidos de cada carta 

    float somaA, somaB;

    // O printf é o comando que imprime na tela os dizeres
    // Já o scanf solicita ao usuário para digitar o que foi pedido 
    
    
    printf("--------- Comparação de cartas  --------\n");
    printf("                               \n");
    printf("### Menu de atributos ### \n");
    printf("(H) População \n");
    printf("(A) Área \n");
    printf("(P) PIB \n");
    printf("(N) Número de Pontos Turísticos \n");
    printf("(D) Densidade Demográfica \n");
    printf("                               \n");

    printf("Carta 1: %s \n", nomedopaisA);
    printf("Carta 2: %s \n", nomedopaisB);
    printf("                               \n");


    printf("Digite o primeiro atributo: ");
    scanf("%s",&atributo1);

    // No Switch colocarei o case tanto maiúsculo como minúsculo, assim, servirá para o usuario digitar a letras das duas formas
    // Para isto, como a opção do atributo é do tipo char, deve-se colocar entre aspas simples
    // Utilizando o operador ternário podemos simplificar nosso codigo, com menos escrita, assim, dispensa a digitação do if e else
    // Dentro do Switch colocamos em printf os dados das carta, qual país pertence e o valor de cada carta segundo o atributo escolhido
    // Depois coloca-se em operador ternário a comparação entre os atributos, determinando o vencedor da rodada
    // Logo após, grava-se a escolha do atributo de cada carta nas variaveis criadas "escolha", para que os valores possam ser somados para descobrir o ganhador

    unsigned long int escolhaA, escolhaB, escolhaC, escolhaD;

    switch (atributo1) {
        case 'H':
        case 'h':
            printf("Primeiro atributo: População \n");
            printf("Carta 1 (%s) - População: %lu habitantes \n", nomedopaisA, populacaoA);
            printf("Carta 2 (%s) - População: %lu habitantes \n", nomedopaisB, populacaoB);
            escolhaA = populacaoA;
            escolhaB = populacaoB;
            populacaoA > populacaoB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            break;
        case 'A':
        case 'a':
            printf("Primeiro atributo: Área \n");
            printf("Carta 1 (%s) - Área: %.1f km2 \n", nomedopaisA, areaA);
            printf("Carta 2 (%s) - Área: %.1f km2 \n", nomedopaisB, areaB);
            areaA > areaB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            escolhaA = areaA;
            escolhaB = areaB;
            break;
        case 'P':
        case 'p':
            printf("Primeiro atributo: PIB \n");
            printf("Carta 1 (%s) - PIB: %.1f bilhões de reais \n", nomedopaisA, pibA);
            printf("Carta 2 (%s) - PIB: %.1f bilhões de reais \n", nomedopaisB, pibB);
            pibA > pibB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            escolhaA = pibA;
            escolhaB = pibB;
            break;
        case 'N':
        case 'n':
            printf("Primeiro atributo: Pontos Turísticos \n");
            printf("Carta 1 (%s) - Pontos Turísticos: %d \n", nomedopaisA, pontosturisticoA);
            printf("Carta 2 (%s) - Pontos Turísticos: %d \n", nomedopaisB, pontosturisticoB);
            pontosturisticoA > pontosturisticoB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            escolhaA = pontosturisticoA;
            escolhaB = pontosturisticoB;
            break;
        case 'D':
        case 'd':
            printf("Primeiro atributo: Densidade Demográfica \n");
            printf("Carta 1 (%s) - Densidade Demográfica: %.2f hab/km² \n", nomedopaisA, densidadepopA);
            printf("Carta 2 (%s) - Densidade Demográfica: %.2f hab/km² \n", nomedopaisB, densidadepopB);
            densidadepopA < densidadepopB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            escolhaA = densidadepopA;
            escolhaB = densidadepopB;
            break;  
        default:
            printf("Opção inválida!");
            break;
    }

    // precisou colocar um if para que o usuário não posso digitar o mesmo atributo, logo, o programa só continuará executar caso seja atributos diferentes   
    // Foi feito em etapas, primeiro fazemos a comparação do primeiro atributo em codigo, depois solicitamos a do segundo atributo

    printf("                               \n");
    printf("Digite o segundo atributo: ");
    scanf("%s",&atributo2);  

    if (atributo1 == atributo2) {
        printf("Comparação inválida! Você digitou o mesmo atributo anterior");
    } else {
        switch (atributo2) {
        case 'H':
        case 'h':
            printf("Segundo atributo: População \n");
            printf("Carta 1 (%s) - População: %lu habitantes \n", nomedopaisA, populacaoA);
            printf("Carta 2 (%s) - População: %lu habitantes \n", nomedopaisB, populacaoB);
            populacaoA > populacaoB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            escolhaC = populacaoA;
            escolhaD = populacaoB;
            break;
        case 'A':
        case 'a':
            printf("Segundo atributo: Área \n");
            printf("Carta 1 (%s) - Área: %.1f km2 \n", nomedopaisA, areaA);
            printf("Carta 2 (%s) - Área: %.1f km2 \n", nomedopaisB, areaB);
            areaA > areaB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            escolhaC = areaA;
            escolhaD = areaB;
            break;
        case 'P':
        case 'p':
            printf("Segundo atributo: PIB \n");
            printf("Carta 1 (%s) - PIB: %.1f bilhões de reaisu \n", nomedopaisA, pibA);
            printf("Carta 2 (%s) - PIB: %.1f bilhões de reais \n", nomedopaisB, pibB);
            pibA > pibB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            escolhaC = pibA;
            escolhaD = pibB;
            break;
        case 'N':
        case 'n':
            printf("Segundo atributo: Ponto Turístico \n");
            printf("Carta 1 (%s) - Pontos Turísticos: %d \n", nomedopaisA, pontosturisticoA);
            printf("Carta 2 (%s) - Pontos Turísticos: %d \n", nomedopaisB, pontosturisticoB);
            pontosturisticoA > pontosturisticoB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            escolhaC = pontosturisticoA;
            escolhaD = pontosturisticoB;
            break;
        case 'D':
        case 'd':
            printf("Segundo atributo: Densidade Demográfica \n");
            printf("Carta 1 (%s) - Densidade Demográfica: %.2f hab/km² \n", nomedopaisA, densidadepopA);
            printf("Carta 2 (%s) - Densidade Demográfica: %.2f hab/km² \n", nomedopaisB, densidadepopB);
            densidadepopA < densidadepopB ? printf("%s venceu neste atributo \n",nomedopaisA): printf("%s venceu neste atributo \n",nomedopaisB);
            escolhaC = densidadepopA;
            escolhaD = densidadepopB;
            break;  
        default:
            printf("Opção inválida!");
            break;
         }
        }

        // Agora vamos determinar qual carta foi a vencedora
        // Utiliza-se o if else-if, para demonstrar qual venceu, e caso haja empate informar
        // Para isto deve-se somar os atributos por carta

        somaA = escolhaA + escolhaC;
        somaB = escolhaB + escolhaD;

        printf("                               \n");
        printf("Soma dos atributos de cada carta: \n");
        printf("                               \n");

        printf("Carta 1 (%s): %.2f \n", nomedopaisA,somaA);
        printf("Carta 2 (%s): %.2f \n", nomedopaisB,somaB);
        printf("                               \n");

        if (somaA > somaB) {
            printf("A carta 1 venceu o jogo!");
        } else if (somaA < somaB) {
            printf("A carta 2 venceu o jogo!");
        } else {
            printf("Empate! Não há ganhador \n");
        }

        printf("                               \n");


    return 0;
}