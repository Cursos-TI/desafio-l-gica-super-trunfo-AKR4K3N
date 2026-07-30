#include <stdio.h>

int main() {

// Variáveis para as cartas

    int escolhajogador[2];

    char estado1 = 'A', estado2 = 'B';

    char codigo1[4] = "A01", codigo2[4] = "B02";

    char Nomedacidade1[] = "Belterra", Nomedacidade2[] = "Santarem";

    unsigned long int populacao1 = 21000, populacao2 = 58000;

    float area1 = 100, area2 = 150;

    float pib1 = 1, pib2 = 2.5;

    int NumerodePontosTuristicos1 = 5, NumerodePontosTuristicos2 = 10;

    float DensidadePopulacional[8];

    float PibperCapita[8];

    float SuperPoder[8];


// Apresentação do jogo
    printf("Bem-vindo ao jogo de cartas SuperTrunfo! \n");

    
    printf("Vamos começar a Jogar! \n");
        
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
    (float)populacao1 / area1;

PibperCapita[0] =
    (pib1 * 1000000000.0f) / populacao1;

    DensidadePopulacional[1] =
    (float)populacao2 / area2;

    PibperCapita[1] =
    (pib2 * 1000000000.0f) / populacao2;

//Calcular Super Poder de cada carta
    SuperPoder[0] = (float)populacao1 + area1 + pib1 + NumerodePontosTuristicos1 + PibperCapita[0] + (1.0f / DensidadePopulacional[0]);

    SuperPoder[1] = (float)populacao2 + area2 + pib2 + NumerodePontosTuristicos2 + PibperCapita[1] + (1.0f / DensidadePopulacional[1]);

// Exibição das informações das cartas para o jogador

    printf("\n\nSuas cartas foram criadas! \n");

// Exibição das informações da primeira carta através de printf, onde cada atributo da carta é mostrado ao jogador. O formato de exibição é organizado para facilitar a leitura e compreensão das informações.

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1); 
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", Nomedacidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes por km²\n", DensidadePopulacional[0]);
    printf("PIB per Capita: %.2f Reais\n", PibperCapita[0]);
    printf("Super Poder: %.2f\n", SuperPoder[0]);

// Exibição das informações da segunda carta

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2); 
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", Nomedacidade2); 
    printf("População: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes por km²\n", DensidadePopulacional[1]);
    printf("PIB per Capita: %.2f Reais\n", PibperCapita[1]);
    printf("Super Poder: %.2f\n", SuperPoder[1]);

    //Comparação de cartas: utilizando if - else, compara os atributos e mostra o resultado com base nas regras de cada um e a carta vencedora.
    //Aqui o jogador é apresentado as opções de comparação
    printf("\n\n========== COMPARAÇÃO DE CARTAS ==========\n");
    
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib Per Capita\n");
    printf("7. Super Poder\n");

    printf("\nEscolha o primeiro atributo que deseja comparar: ");
    
    scanf("%d", &escolhajogador[0]);

    
    switch (escolhajogador[0])
    {
    case 1:
        
     //População (Maior vence)
    printf("\nAtributo: População\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 - %s: %d habitantes\nCarta 2 - %s: %d habitantes\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, populacao1, Nomedacidade2, populacao2, &Nomedacidade1);
    } else if (populacao1 < populacao2) {
        printf("Carta 1 - %s: %d habitantes\nCarta 2 - %s: %d habitantes\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, populacao1, Nomedacidade2, populacao2, Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }  

        break;

    case 2:
    
    //Área (Maior vence)
    printf("\nAtributo: Área\n");

    if (area1 > area2) {
        printf("Carta 1 - %s: %.2f km²\nCarta 2 - %s: %.2fkm²\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, area1, Nomedacidade2, area2, Nomedacidade1);
    } else if (area1 < area2) {
        printf("Carta 1 - %s: %.2f km²\nCarta 2 - %s: %.2fkm²\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, area1, Nomedacidade2, area2, Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
    
        break;

    case 3:

     //PIB (Maior vence)
    printf("\nAtributo: PIB\n");

    if (pib1 > pib2) {
        printf("Carta 1 - %s: %.2f Bilhões de Reais\nCarta 2 - %s: %.2f Bilhões de Reais\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, pib1, Nomedacidade2, pib2, Nomedacidade1);
    } else if (pib1 < pib2) {
        printf("Carta 1 - %s: %.2f Bilhoes de Reais\nCarta 2 - %s: %.2f Bilhões de Reais\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, pib1, Nomedacidade2, pib2, Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;

    case 4:

     //Pontos Turísticos (Maior vence)
    printf("\nAtributo: Pontos Turísticos\n");

    if (NumerodePontosTuristicos1 > NumerodePontosTuristicos2) {
        printf("Carta 1 - %s: %d Pontos Turísticos\nCarta 2 - %s: %d Pontos Turisticos\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, NumerodePontosTuristicos1, Nomedacidade2, NumerodePontosTuristicos2, Nomedacidade1);
    } else if (NumerodePontosTuristicos1 < NumerodePontosTuristicos2) {
        printf("Carta 1 - %s: %d Pontos Turísticos\nCarta 2 - %s: %d Pontos Turísticos\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, NumerodePontosTuristicos1, Nomedacidade2, NumerodePontosTuristicos2, Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;
    
    case 5:

     //Densidade (MENOR vence)
    printf("\nAtributo: Densidade Populacional\n");

    if (DensidadePopulacional[0] < DensidadePopulacional[1]) {
        printf("Carta 1 - %s: %.2f Habitantes por km²\nCarta 2 - %s: %.2f Habitantes por km²\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, DensidadePopulacional[0], Nomedacidade2, DensidadePopulacional[1], Nomedacidade1);
    } else if (DensidadePopulacional[0] > DensidadePopulacional[1]) {
        printf("Carta 1 - %s: %.2f Habitantes por km²\nCarta 2 - %S: %.2f Habitantes por km²\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, DensidadePopulacional[0], Nomedacidade2, DensidadePopulacional[1], Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;

    case 6:

      //PIB per Capita (Maior vence)
    printf("\nAtributo: PIB per Capita\n");

    if (PibperCapita[0] > PibperCapita[1]) {
        printf("Carta 1 - %s: %.2f Reais\nCarta 2 - %s: %.2f Reais\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, PibperCapita[0], Nomedacidade2, PibperCapita[1], Nomedacidade1);
    } else if (PibperCapita[0] < PibperCapita[1]) {
        printf("Carta 1 - %s: %.2f Reais\nCarta 2 - %s: %.2f Reais\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, PibperCapita[0], Nomedacidade2, PibperCapita[1], Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;

    case 7:

     //Super Poder (Maior vence)
    printf("\nAtributo: Super Poder\n");

    if (SuperPoder[0] > SuperPoder[1]) {
        printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, SuperPoder[0], Nomedacidade2, SuperPoder[1], Nomedacidade1);
    } else if (SuperPoder[0] < SuperPoder[1]) {
        printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, SuperPoder[0], Nomedacidade2, SuperPoder[1], Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;

     default:
    printf("### Opção Invalida! ###");
        break;
    }
    
    printf("\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib Per Capita\n");
    printf("7. Super Poder\n");

    printf("\nEscolha o segundo atributo que deseja comparar: ");
    
    scanf("%d", &escolhajogador[1]);

    if (escolhajogador[0] == escolhajogador[1]) {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        
    switch (escolhajogador[1])
    {
    case 1:
        
     //População (Maior vence)
    printf("\nAtributo: População\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 - %s: %d habitantes\nCarta 2 - %s: %d habitantes\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, populacao1, Nomedacidade2, populacao2, Nomedacidade1);
    } else if (populacao1 < populacao2) {
        printf("Carta 1 - %s: %d habitantes\nCarta 2 - %s: %d habitantes\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, populacao1, Nomedacidade2, populacao2, Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }  

        break;

    case 2:
    
    //Área (Maior vence)
    printf("\nAtributo: Área\n");

    if (area1 > area2) {
        printf("Carta 1 - %s: %.2f km²\nCarta 2 - %s: %.2fkm²\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, area1, Nomedacidade2, area2, Nomedacidade1);
    } else if (area1 < area2) {
        printf("Carta 1 - %s: %.2f km²\nCarta 2 - %s: %.2fkm²\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, area1, Nomedacidade2, area2, Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
    
        break;

    case 3:

     //PIB (Maior vence)
    printf("\nAtributo: PIB\n");
    
    if (pib1 > pib2) {
        printf("Carta 1 - %s: %.2f Bilhões de Reais\nCarta 2 - %s: %.2f Bilhões de Reais\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, pib1, Nomedacidade2, pib2, Nomedacidade1);
    } else if (pib1 < pib2) {
        printf("Carta 1 - %s: %.2f Bilhoes de Reais\nCarta 2 - %s: %.2f Bilhões de Reais\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, pib1, Nomedacidade2, pib2, Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;

    case 4:

     //Pontos Turísticos (Maior vence)
    printf("\nAtributo: Pontos Turísticos\n");

    if (NumerodePontosTuristicos1 > NumerodePontosTuristicos2) {
        printf("Carta 1 - %s: %d Pontos Turísticos\nCarta 2 - %s: %d Pontos Turisticos\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, NumerodePontosTuristicos1, Nomedacidade2, NumerodePontosTuristicos2, Nomedacidade1);
    } else if (NumerodePontosTuristicos1 < NumerodePontosTuristicos2) {
        printf("Carta 1 - %s: %d Pontos Turísticos\nCarta 2 - %s: %d Pontos Turísticos\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, NumerodePontosTuristicos1, Nomedacidade2, NumerodePontosTuristicos2, Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;
    
    case 5:

     //Densidade (MENOR vence)
    printf("\nAtributo: Densidade Populacional\n");

    if (DensidadePopulacional[0] < DensidadePopulacional[1]) {
        printf("Carta 1 - %s: %.2f Habitantes por km²\nCarta 2 - %s: %.2f Habitantes por km²\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, DensidadePopulacional[0], Nomedacidade2, DensidadePopulacional[1], Nomedacidade1);
    } else if (DensidadePopulacional[0] > DensidadePopulacional[1]) {
        printf("Carta 1 - %s: %.2f Habitantes por km²\nCarta 2 - %s: %.2f Habitantes por km²\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, DensidadePopulacional[0], Nomedacidade2, DensidadePopulacional[1], Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;

    case 6:

      //PIB per Capita (Maior vence)
    printf("\nAtributo: PIB per Capita\n");

    if (PibperCapita[0] > PibperCapita[1]) {
        printf("Carta 1 - %s: %.2f Reais\nCarta 2 - %s: %.2f Reais\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, PibperCapita[0], Nomedacidade2, PibperCapita[1], Nomedacidade1);
    } else if (PibperCapita[0] < PibperCapita[1]) {
        printf("Carta 1 - %s: %.2f Reais\nCarta 2 - %s: %.2f Reais\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, PibperCapita[0], Nomedacidade2, PibperCapita[1], Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;

    case 7:

     //Super Poder (Maior vence)
    printf("\nAtributo: Super Poder\n");

    if (SuperPoder[0] > SuperPoder[1]) {
        printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 1 (%s) venceu!\n", Nomedacidade1, SuperPoder[0], Nomedacidade2, SuperPoder[1], Nomedacidade1);
    } else if (SuperPoder[0] < SuperPoder[1]) {
        printf("Carta 1 - %s: %.2f\nCarta 2 - %s: %.2f\nResultado: Carta 2 (%s) venceu!\n", Nomedacidade1, SuperPoder[0], Nomedacidade2, SuperPoder[1], Nomedacidade2);
    } else { 
        printf("*** EMPATE ***\n");
    }
        
        break;

     default:
    printf("### Opção Invalida! ###");
        break;
    }

    // Somar os 2 atributos diferentes de cada carta escolhidos pelo jogador e mostrar o resultado e a carta vencedora
    // Cálculo da soma dos atributos escolhidos para cada carta
    // Explicação: A soma dos atributos escolhidos pelo jogador para cada carta é calculada, 
    // permitindo que o jogador veja o resultado final da comparação entre as cartas com base nos atributos selecionados.

    float somaAtributosCarta1 = 0.0f;
    float somaAtributosCarta2 = 0.0f;

    // Atribuição dos valores dos atributos escolhidos para cada carta
    //explicação: Se o jogador escolheu o atributo 1 (População), então a soma dos atributos da carta 1 será incrementada com o valor da população da carta 1, 
    //e a soma dos atributos da carta 2 será incrementada com o valor da população da carta 2. O mesmo processo é repetido para os outros atributos escolhidos pelo jogador.

    if (escolhajogador[0] == 1) {
        somaAtributosCarta1 += populacao1;
        somaAtributosCarta2 += populacao2;
    } else if (escolhajogador[0] == 2) {
        somaAtributosCarta1 += area1;
        somaAtributosCarta2 += area2;
    } else if (escolhajogador[0] == 3) {
        somaAtributosCarta1 += pib1;
        somaAtributosCarta2 += pib2;
    } else if (escolhajogador[0] == 4) {
        somaAtributosCarta1 += NumerodePontosTuristicos1;
        somaAtributosCarta2 += NumerodePontosTuristicos2;
    } else if (escolhajogador[0] == 5) {
        somaAtributosCarta1 += DensidadePopulacional[0];
        somaAtributosCarta2 += DensidadePopulacional[1];
    } else if (escolhajogador[0] == 6) {
        somaAtributosCarta1 += PibperCapita[0];
        somaAtributosCarta2 += PibperCapita[1];
    } else if (escolhajogador[0] == 7) {
        somaAtributosCarta1 += SuperPoder[0];
        somaAtributosCarta2 += SuperPoder[1];
    }

    if (escolhajogador[1] == 1) {
        somaAtributosCarta1 += populacao1;
        somaAtributosCarta2 += populacao2;
    } else if (escolhajogador[1] == 2) {
        somaAtributosCarta1 += area1;
        somaAtributosCarta2 += area2;
    } else if (escolhajogador[1] == 3) {
        somaAtributosCarta1 += pib1;
        somaAtributosCarta2 += pib2;
    } else if (escolhajogador[1] == 4) {
        somaAtributosCarta1 += NumerodePontosTuristicos1;
        somaAtributosCarta2 += NumerodePontosTuristicos2;
    } else if (escolhajogador[1] == 5) {
        somaAtributosCarta1 += DensidadePopulacional[0];
        somaAtributosCarta2 += DensidadePopulacional[1];
    } else if (escolhajogador[1] == 6) {
        somaAtributosCarta1 += PibperCapita[0];
        somaAtributosCarta2 += PibperCapita[1];
    } else if (escolhajogador[1] == 7) {
        somaAtributosCarta1 += SuperPoder[0];
        somaAtributosCarta2 += SuperPoder[1];
    }

    // Exibição do resultado da soma dos atributos escolhidos
    // Explicação: O resultado da soma dos atributos escolhidos para cada carta é exibido ao jogador, 
    // mostrando o nome da cidade correspondente e o valor total da soma dos atributos.
    printf("\nResultado da soma dos atributos escolhidos:\n");

    printf("Carta 1 - %s: %.2f\n", Nomedacidade1, somaAtributosCarta1);
    printf("Carta 2 - %s: %.2f\n", Nomedacidade2, somaAtributosCarta2);

    // Determinação da carta vencedora com base na soma dos atributos escolhidos
    if (somaAtributosCarta1 > somaAtributosCarta2) {
        printf("Resultado Final: Carta 1 (%s) venceu!\n", Nomedacidade1);
    } else if (somaAtributosCarta1 < somaAtributosCarta2) {
        printf("Resultado Final: Carta 2 (%s) venceu!\n", Nomedacidade2);
    } else {
        printf("*** EMPATE FINAL ***\n");
    }
    
    }

    printf("\n========================================\n");
    
    return 0;

}