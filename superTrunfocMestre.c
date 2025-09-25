#include <stdio.h>

int main(){
    //Nome do jogo
    printf("*** Super Trunfo ***\n\n");

    //Declarando variaveis
    char carta1[50] = "01";
    char carta2[50] = "02";
    char estado1[50] = "Pernambuco";
    char estado2[50] = "Bahia";
    char cidade1[50] = "Recife";
    char cidade2[50] = "Salvador";

    unsigned long int populacao1 = 1587707;
    unsigned long int populacao2 = 3623647;

    double area1 = 210.044;
    double area2 = 692.589;

    double pib1 = 5497030543;
    double pib2 = 6295400000;

    int turisticos1 = 8;
    int turisticos2 = 10;
 
    // realizar a divisão do pib per capita e densidade populacioinão
  double densidade1 =  populacao1 / area1;
  double densidade2 = populacao2 / area2;

  double pibPerCapita1 = pib1 / populacao1;
  double pibPerCapita2 = pib2 / populacao2;

  

   //exibir informações das cartas
   printf("Carta: %s\n Estado: %s\n Cidade: %s\n População: %lu\n Área: %.3lf km²\n Pib: R$ %.2f \n Pontos turisticos: %d\n Densidade populacional: %.3lf hab/km²\n Pib per capita: R$ %.2lf\n\n", carta1, estado1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, pibPerCapita1);
   printf("Carta: %s\n Estado: %s\n Cidade: %s\n População: %lu\n Área: %.3lf km²\n Pib: R$ %.2lf \n Pontos turisticos: %d\n Densidade populacional: %.3lf hab/km²\n Pib per capita: R$ %.2lf\n\n", carta2, estado2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, pibPerCapita2);
   
   printf("População de Pernambuco > População Recife %d\n", populacao1>populacao2);
   printf ("Área de Pernambuco > Área de Recife: %d\n", area1>area2);
   printf ("PIB de pernambuco > de Recife: %d\n", pib1>pib2);
   printf("Pontos turistico de Pernambuco > Pontos turisticos Recife: %d\n", turisticos1>turisticos2);
   printf("Densidade populacional de Pernambuco < Densidade populacional de Recife: %d\n", densidade1<densidade2);
   printf("PIB per capita de Pernambuco > PIB per capita de Recife: %d\n", pibPerCapita1>pibPerCapita2);

   return 0;

}