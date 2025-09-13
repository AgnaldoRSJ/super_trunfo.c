#include <stdio.h>

   int main(){

//nome do jogo
 printf("***Super Trunfo***\n \n");

    int populacao, turisticos;
    char estado[50], codigo[50], cidade [50];
    float area, densidade; 
    double pib, percapita;
   
    // *** Carta 01 ***

    // identificação da carta
    printf("Carta:01 \n");

    // Digitar o nome do estado
    printf("Estado:");
    scanf("%s", estado);

    // código de idenficação da carta
    printf("Código:");
    scanf("%s", codigo);

    // uma cidade do estado esolhido
    printf("Nome da Cidade:");
    scanf("%s", cidade);

    // população da cidade escolhida
    printf("População:");
    scanf("%d", &populacao);

    // área em metro quadrado da cidade esolhida
    printf("Área:");
    scanf("%f", &area);
    
    //produto interno bruto da cidade escolhida 
    printf("PIB:");
    scanf("%lf", &pib);

    // quantos pontos turisticos tem na cidade escolhida
    printf("Números de pontos Turisticos:");
    scanf("%d", &turisticos);

   // Calcula a densidade populacional
   densidade = (float) populacao / area;
   // Calcula o PIB per capita
   percapita =(float) pib / populacao;

    // vai ler todas as  informações inseridas acima 
    printf("\n \n Carta:01\n Estado:%s\n Codigo:%s\n Cidade:%s\n", estado, codigo, cidade);
    printf("População:%d\n Área:%f km²\n PIB:R$ %.2f bilhões de reais\n Números de pontos turisticos:%d\n", populacao, area, pib, turisticos);
    printf("Desidade populacional: %.2f hab/km² \n Pib per capita: R$ %.2f\n", densidade, percapita);

    // *** Carta 02 ***

     // identificação da carta
     printf("Carta: 02\n");

     //digitar o nome do estado
    printf("Estado:");
    scanf("%s", estado);

    //codigo de indentificação da carta
    printf("Código:");
    scanf("%s", codigo);

    // uma cidade do estado escolhido
    printf("Nome da Cidade:");
    scanf("%s", cidade);

    // população da cidade escolhida
    printf("População:");
    scanf("%d", &populacao);
   
    //área em metro quadrado da cidade escolhida
    printf("Área:");
    scanf("%f", &area);
    
    // produto interno bruto da cidade escolhida
    printf("PIB:");
    scanf("%lf", &pib);

    // quantidade de pontos turisticos da cidade escolhida
    printf("Números de pontos Turisticos:");
    scanf("%d", &turisticos);

    // Calcula a densidade populacional
    densidade = (float) populacao / area;
    // Calcula o PIB per capita
    percapita = (float) pib / populacao;

    // vai ler todas as informações inseridas acima
    printf("\n \nCarta:02\n Estado:%s\n Codigo:%s\n Cidade:%s\n", estado, codigo, cidade);
    printf("População:%d\n Área:%f km²\n PIB:%.2f bilhões de reais\n Números de pontos turisticos:%d\n", populacao, area, pib, turisticos);
    printf("Desidade populacional: %f hab/km² \n Pib per capita:R$ %.2f\n", densidade, percapita);

     return 0;
   }