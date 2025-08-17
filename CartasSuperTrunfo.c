#include <stdio.h>

int main(){

    char estado[25], estado2[25];
    char nomecidade[25], nomecidade2[25];
    unsigned long int populacao, populacao2;  
    float area, area2;
    float pib, pib2;
    int pontosturisticos, pontosturisticos2;  
    float superpoder, superpoder2;
     float densidade_pop_c1 = (float)area / populacao;
     float densidade_pop_c2 = (float)area / populacao2;

    printf("Digite o nome do estado 01: \n");
    scanf("%s", estado);
    printf("Digite o nome do estado 02: \n");
    scanf("%s", estado2);
    
    printf("Digite o nome da cidade 01: \n");
    scanf("%s", nomecidade);
    printf("Digite o nome da cidade 02: \n");
    scanf("%s", nomecidade2);

    printf("Digite a populacao 01: \n");
    scanf("%lu", &populacao);
    printf("Digite a populacao 02: \n");
    scanf("%lu", &populacao2);

    printf("Digite número de pontos turisticos 01: \n");
    scanf("%d", &pontosturisticos);
    printf("Digite número de pontos turisticos 02: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite o tamanho da area 01: \n");
    scanf("%f", &area);
    printf("Digite o tamanho da area 02: \n");
    scanf("%f", &area2);

    printf("Digite o PIB 01: \n");
    scanf("%f", &pib);
    printf("Digite o PIB 02: \n");
    scanf("%f", &pib2);

    //Carta N1
    printf("Carta N1\n");
    printf("Estado: %s\n", estado);
    printf("Nome cidade: %s\n", nomecidade);
    printf("Populacao carta : %lu\n",populacao);
    printf("Area : %.2fkm²\n", area);
    printf("PIB : %.3f\n", pib);
    printf("Numero de pontos turisticos : %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f\n", (float) area / populacao);
    printf("PIB per capita: %.2f\n", (float) pib / populacao);
    printf("SuperPoder: %.2f\n", (float) populacao + pontosturisticos + area + pib + (1.0f / densidade_pop_c1) + (pib / populacao / 1));
    
    //CartaN2
    printf("Carta N2\n");
    printf("Estado: %s\n", estado2);
    printf("Nome cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n",populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", (float) area2 / populacao2);
    printf("PIB per capita: %.2f\n", (float) pib2 / populacao2);
    printf("SuperPoder: %.2f\n", (float) populacao2 + pontosturisticos2 + area2 + pib2 + (1.0f / densidade_pop_c2) + (pib2 / populacao2 / 1));
    
    
    // resultado das cartas
    printf("Resultado das cartas\n");
    printf("Resultado Populacao: %d\n", 
         populacao > populacao2,
         populacao < populacao2);

    printf("Resultado Area: %d\n", 
         area > area2,
         area < area2);

    printf("Resultado PIB: %d\n", 
         pib > pib2,
         pib < pib2);    

    printf("Resultado Pontos Turisticos: %d\n", 
         pontosturisticos > pontosturisticos2,
         pontosturisticos < pontosturisticos2);

    printf("Resultado Densidade Populacional: %d\n", 
         area / populacao > area2 / populacao2,
         area / populacao < area2 / populacao2);

    printf("Resultado PIB per capita: %d\n", 
         pib / populacao > pib2 / populacao2,
         pib / populacao < pib2 / populacao2);

    printf("Resultado SuperPoder: %d\n", 
         populacao + pontosturisticos + area + pib + (area / populacao) + (pib / populacao / 1) > populacao2 + pontosturisticos2 + area2 + pib2 + (area2 / populacao2) + (pib2 / populacao2 / 1),
         populacao + pontosturisticos + area + pib + (area / populacao) + (pib / populacao / 1) < populacao2 + pontosturisticos2 + area2 + pib2 + (area2 / populacao2) + (pib2 / populacao2 / 1));
         

             
           
    return 0;
}
