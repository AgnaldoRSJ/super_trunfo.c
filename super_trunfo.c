#include <stdio.h>

   int main(){


 printf("Super Trunfo\n \n");

    int turisticos;
    char estado[50], codigo[50], cidade [50];
    float populacao, area, pib;
    
    printf("Carta:01 \n");

    printf("Estado:");
    scanf("%s", estado);

    printf("Código:");
    scanf("%s", codigo);

    printf("Nome da Cidade:");
    scanf("%s", cidade);

    printf("População:");
    scanf("%f", &populacao);

    printf("Área:");
    scanf("%f", &area);
    
    printf("PIB:");
    scanf("%f", &pib);

    printf("Números de pontos Turisticos:");
    scanf("%d", &turisticos);

    printf("\n \n Carta:01\n Estado:%s\n Codigo:%s\n Cidade:%s\n", estado, codigo, cidade);
     printf("População:%.0f\n Área:%.3f km²\n PIB:R$ %.2f bilhões de reais\n Números de pontos turisticos:%d\n \n", populacao, area, pib, turisticos);

     
     printf("Carta: 02\n");


    printf("Estado:");
    scanf("%s", estado);

    printf("Código:");
    scanf("%s", codigo);

    printf("Nome da Cidade:");
    scanf("%s", cidade);

    printf("População:");
    scanf("%f", &populacao);

    printf("Área:");
    scanf("%f", &area);
    
    printf("PIB:");
    scanf("%f", &pib);

    printf("Números de pontos Turisticos:");
    scanf("%d", &turisticos);

    printf("\n \nCarta:02\n Estado:%s\n Codigo:%s\n Cidade:%s\n", estado, codigo, cidade);
     printf("População:%.0f\n Área:%.3f km²\n PIB:%.2f bilhões de reais\n Números de pontos turisticos:%d\n \n", populacao, area, pib, turisticos);

     return 0;
   }