#include <stdio.h>

int main() {

// Variáveis para as cartas

    char Estado[8];

    char CodigodaCarta[8][5];

    char NomedaCidade[8][20];

    unsigned long int Populacao[8];

    float Area[8];

    float Pib[8];

    int NumerodePontosTuristicos[8];

    float DensidadePopulacional[8];

    float PibperCapita[8];

    float SuperPoder[8];


// Apresentação do jogo
    printf("Bem-vindo ao jogo de cartas SuperTrunfo! \n");

    printf("\nVamos criar as cartas para o jogo. \n");

// Explicação das informações que cada carta deve conter
    printf("\nCada carta deve conter as seguintes informações: \n\n");

    printf("- Estado (uma letra de A a H) \n");
    printf("- Código da Carta (A01, B01, etc.) \n");
    printf("- Nome da Cidade (até 20 caracteres) \n");
    printf("- População \n");
    printf("- Área em km² \n");
    printf("- PIB \n");
    printf("- Número de Pontos Turísticos \n");

    printf("\nVamos começar a criar as cartas! \n");

// Coleta de informações para a primeira carta

    printf("\nCarta 1: \n");

    printf("\nDigite uma letra para o Estado: \n");
    scanf(" %c", &Estado[0]);
    
    printf("\nDigite o Código da Carta: \n");
    scanf("%s", CodigodaCarta[0]);
    
    printf("\nDigite o Nome da Cidade: \n");
    scanf("%s", NomedaCidade[0]);
    
    printf("\nDigite a População: \n");
    scanf("%lu", &Populacao[0]);
    
    printf("\nDigite a Área em km²: \n");
    scanf("%f", &Area[0]);
    
    printf("\nDigite o PIB: \n");
    scanf("%f", &Pib[0]);
    
    printf("\nDigite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumerodePontosTuristicos[0]);

// Coleta de informações para a segunda carta
    printf("\nCarta 2: \n");
    
    printf("\nDigite uma letra para o Estado: \n");
    scanf(" %c", &Estado[1]);
    
    printf("\nDigite o Código da Carta: \n");
    scanf("%s", CodigodaCarta[1]);
    
    printf("\nDigite o Nome da Cidade: \n");
    scanf("%s", NomedaCidade[1]);
    
    printf("\nDigite a População: \n");
    scanf("%lu", &Populacao[1]);
    
    printf("\nDigite a Área em km²: \n");
    scanf("%f", &Area[1]);
    
    printf("\nDigite o PIB: \n");
    scanf("%f", &Pib[1]);
    
    printf("\nDigite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumerodePontosTuristicos[1]);

// Cálculo das informações derivadas
/*
O PIB per Capita é calculado dividindo o PIB total pela população,
e a Densidade Populacional é calculada dividindo a população pela área. 
Esses cálculos são realizados para cada carta, 
permitindo que o jogador tenha informações adicionais sobre as cidades representadas nas cartas. 
O resultado do PIB per Capita é multiplicado por 1 bilhão para converter o PIB de bilhões de reais para reais, 
garantindo que o valor seja apresentado de forma mais compreensível para o jogador. 
*/
    
    DensidadePopulacional[0] =
    (float)Populacao[0] / Area[0];

PibperCapita[0] =
    (Pib[0] * 1000000000.0f) / Populacao[0];

    DensidadePopulacional[1] =
    (float)Populacao[1] / Area[1];

    PibperCapita[1] =
    (Pib[1] * 1000000000.0f) / Populacao[1];

//Calcular Super Poder de cada carta
    SuperPoder[0] = (float)Populacao[0] + Area[0] + Pib[0] + NumerodePontosTuristicos[0] + PibperCapita[0] + (1.0f / DensidadePopulacional[0]);

    SuperPoder[1] = (float)Populacao[1] + Area[1] + Pib[1] + NumerodePontosTuristicos[1] + PibperCapita[1] + (1.0f / DensidadePopulacional[1]);

// Exibição das informações das cartas para o jogador

    printf("\n\nSuas cartas foram criadas! \n");

// Exibição das informações da primeira carta através de printf, onde cada atributo da carta é mostrado ao jogador. O formato de exibição é organizado para facilitar a leitura e compreensão das informações.

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", Estado[0]); 
    printf("Código da Carta: %s\n", CodigodaCarta[0]);
    printf("Nome da Cidade: %s\n", NomedaCidade[0]);
    printf("População: %d habitantes\n", Populacao[0]);
    printf("Area: %.2f km²\n", Area[0]);
    printf("PIB: %.2f Bilhões de Reais \n", Pib[0]);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos[0]);
    printf("Densidade Populacional: %.2f habitantes por km²\n", DensidadePopulacional[0]);
    printf("PIB per Capita: %.2f Reais\n", PibperCapita[0]);

// Exibição das informações da segunda carta

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", Estado[1]); 
    printf("Código da Carta: %s\n", CodigodaCarta[1]);
    printf("Nome da Cidade: %s\n", NomedaCidade[1]); 
    printf("População: %d habitantes\n", Populacao[1]);
    printf("Area: %.2f km²\n", Area[1]);
    printf("PIB: %.2f Bilhões de Reais \n", Pib[1]);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos[1]);
    printf("Densidade Populacional: %.2f habitantes por km²\n", DensidadePopulacional[1]);
    printf("PIB per Capita: %.2f Reais\n", PibperCapita[1]);
    printf("Super Poder: %.2f\n", SuperPoder[1]);

    
    //Comparação de cartas: utilizando if - else, compara os atributos e mostra o resultado com base nas regras de cada um e a carta vencedora.

    printf("\n\n========== COMPARAÇÃO DE CARTAS ==========\n");
    
    //População (Maior vence)
    printf("\nAtributo: População\n");

    if (Populacao[0] > Populacao[1]) {
        printf("Carta 1 - %s: %d habitantes\nCarta 2 - %s: %d habitantes\nResultado: Carta 1 (%s) venceu!\n", NomedaCidade[0], Populacao[0], NomedaCidade[1], Populacao[1], NomedaCidade[0]);
    } else {
        printf("Carta 1 - %s: %d habitantes\nCarta 2 - %s: %d habitantes\nResultado: Carta 2 (%s) venceu!\n", NomedaCidade[0], Populacao[0], NomedaCidade[1], Populacao[1], NomedaCidade[1]);
    }

    //Área (Maior vence)
    printf("\nAtributo: Área\n");

    if (Area[0] > Area[1]) {
        printf("Carta 1 - %s: %.2f km²\nCarta 2 - %s: %.2fkm²\nResultado: Carta 1 (%s) venceu!\n", NomedaCidade[0], Area[0], NomedaCidade[1], Area[1], NomedaCidade[0]);
    } else {
        printf("Carta 1 - %s: %.2f km²\nCarta 2 - %s: %.2fkm²\nResultado: Carta 2 (%s) venceu!\n", NomedaCidade[0], Area[0], NomedaCidade[1], Area[1], NomedaCidade[1]);
    }

    //PIB (Maior vence)
    printf("\nAtributo: PIB\n");

    if (Pib[0] > Pib[1]) {
        printf("Carta 1 - %s: %.2f Bilhões de Reais\nCarta 2 - %s: %.2f Bilhões de Reais\nResultado: Carta 1 (%s) venceu!\n", NomedaCidade[0], Pib[0], NomedaCidade[0], Pib[1], NomedaCidade[0]);
    } else {
        printf("Carta 1 - %s: %.2f Bilhoes de Reais\nCarta 2 - %s: %.2f Bilhões de Reais\nResultado: Carta 2 (%s) venceu!\n", NomedaCidade[0], Pib[0], NomedaCidade[1], Pib[1], NomedaCidade[1]);
    }

    //Pontos Turísticos (Maior vence)
    printf("\nAtributo: Pontos Turísticos\n");

    if (NumerodePontosTuristicos[0] > NumerodePontosTuristicos[1]) {
        printf("Carta 1 - %s: %d Pontos Turísticos\nCarta 2 - %s: %d Pontos Turisticos\nResultado: Carta 1 (%s) venceu!\n", NomedaCidade[0], NumerodePontosTuristicos[0], NomedaCidade[1], NumerodePontosTuristicos[1], NomedaCidade[0]);
    } else {
        printf("Carta 1 - %s: %d Pontos Turísticos\nCarta 2 - %s: %d Pontos Turísticos\nResultado: Carta 2 (%s) venceu!\n", NomedaCidade[0], NumerodePontosTuristicos[0], NomedaCidade[1], NumerodePontosTuristicos[1], NomedaCidade[1]);
    }
    
    //Densidade (MENOR vence)
    printf("\nAtributo: Densidade Populacional\n");

    if (DensidadePopulacional[0] < DensidadePopulacional[1]) {
        printf("Carta 1 - %s: %.2f Habitantes por km²\nCarta 2 - %s: %.2f Habitantes por km²\nResultado: Carta 1 (%s) venceu!\n", NomedaCidade[0], DensidadePopulacional[0], NomedaCidade[1], DensidadePopulacional[1], NomedaCidade[0]);
    } else {
        printf("Carta 1 - %s: %.2f Habitantes por km²\nCarta 2 - %S: %.2f Habitantes por km²\nResultado: Carta 2 (%s) venceu!\n", NomedaCidade[0], DensidadePopulacional[0], NomedaCidade[1], DensidadePopulacional[1], NomedaCidade[1]);
    }
    
    //PIB per Capita (Maior vence)
    printf("\nAtributo: PIB per Capita\n");

    if (PibperCapita[0] > PibperCapita[1]) {
        printf("Carta 1 - %s: %.2f Reais\nCarta 2 - %s: %.2f Reais\nResultado: Carta 1 (%s) venceu!\n", NomedaCidade[0], PibperCapita[0], NomedaCidade[1], PibperCapita[1], NomedaCidade[0]);
    } else {
        printf("Carta 1 - %s: %.2f Reais\nCarta 2 - %s: %.2f Reais\nResultado: Carta 2 (%s) venceu!\n", NomedaCidade[0], PibperCapita[0], NomedaCidade[1], PibperCapita[1], NomedaCidade[1]);
    }

    //Super Poder (Maior vence)
    printf("\nAtributo: Super Poder\n");

    if (SuperPoder[0] > SuperPoder[1]) {
        printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 (%s) venceu!\n", NomedaCidade[0], SuperPoder[0], NomedaCidade[1], SuperPoder[1], NomedaCidade[0]);
    } else {
        printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 (%s) venceu!\n", NomedaCidade[0], SuperPoder[0], NomedaCidade[1], SuperPoder[1], NomedaCidade[1]);
    }

    printf("\n========================================\n");
    
    return 0;

}