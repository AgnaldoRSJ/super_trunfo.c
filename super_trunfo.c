#include <stdio.h>

   int main(){

//nome do jogo
 printf("Super Trunfo\n \n");

    int turisticos;
    char estado[50], codigo[50], cidade [50];
    float populacao, area, pib;

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
    scanf("%f", &populacao);

    // área em metro quadrado da cidade esolhida
    printf("Área:");
    scanf("%f", &area);
    
    //produto interno bruto da cidade escolhida 
    printf("PIB:");
    scanf("%f", &pib);

    // quantos pontos turisticos tem na cidade escolhida
    printf("Números de pontos Turisticos:");
    scanf("%d", &turisticos);

    // vai ler todas as  informações inseridas acima 
    printf("\n \n Carta:01\n Estado:%s\n Codigo:%s\n Cidade:%s\n", estado, codigo, cidade);
     printf("População:%.0f\n Área:%.3f km²\n PIB:R$ %.2f bilhões de reais\n Números de pontos turisticos:%d\n \n", populacao, area, pib, turisticos);

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
    scanf("%f", &populacao);
   
    //área em metro quadrado da cidade escolhida
    printf("Área:");
    scanf("%f", &area);
    
    // produto interno bruto da cidade escolhida
    printf("PIB:");
    scanf("%f", &pib);

    // quantidade de pontos turisticos da cidade escolhida
    printf("Números de pontos Turisticos:");
    scanf("%d", &turisticos);

    // vai ler todas as informações inseridas acima
    printf("\n \nCarta:02\n Estado:%s\n Codigo:%s\n Cidade:%s\n", estado, codigo, cidade);
     printf("População:%.0f\n Área:%.3f km²\n PIB:%.2f bilhões de reais\n Números de pontos turisticos:%d\n \n", populacao, area, pib, turisticos);

     return 0;
   }