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

    printf("Carta:01\n Estado:%s\n Codigo:%s\n Cidade:%s\n", estado, codigo, cidade);
     printf("População:%f\n Área:%f\n PIB:%f\n Númeeros de pontos turisticos:%d\n", populacao, area, pib, turisticos);



   }