#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //variaveis que entrarao
    char codigo1[10], codigo2[10];
    char estado[30], estado2[30];
    char nomecidade[50], nomecidade2[50];
    unsigned long int populacao, populacao2;  
    double area, area2;
    double pib, pib2;
    int pontosturisticos, pontosturisticos2;  
    
     
    
    
    //declarar as caracteristicas das cartas:
    printf("Digite o nome do codigo da carta 01: \n");
    scanf(" %9[^\n]", codigo1);
    printf("Digite o nome do codigo da carta 02: \n");
    scanf(" %9[^\n]", codigo2);

    printf("Digite o nome do estado 01: \n");
    scanf(" %29[^\n]", estado);
    printf("Digite o nome do estado 02: \n");
    scanf(" %29[^\n]", estado2);
    
    printf("Digite o nome da cidade 01:   \n");
    scanf(  " %49[^\n]", nomecidade);
    printf("Digite o nome da cidade 02:   \n");
    scanf(  " %49[^\n]", nomecidade2);

    printf("Digite a populacao 01: \n");
    scanf("%lu", &populacao);
    printf("Digite a populacao 02: \n");
    scanf("%lu", &populacao2);

    printf("Digite número de pontos turisticos 01: \n");
    scanf("%d", &pontosturisticos);
    printf("Digite número de pontos turisticos 02: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite o tamanho da area 01: \n");
    scanf("%lf", &area);
    printf("Digite o tamanho da area 02: \n");
    scanf("%lf", &area2);

    printf("Digite o PIB 01: \n");
    scanf("%lf", &pib);
    printf("Digite o PIB 02: \n");
    scanf("%lf", &pib2);

    //apos usar o scanf, executar:
    
    float densidade_pop_c1;
        if(area != 0.0f){
            densidade_pop_c1 = (float) populacao / area;
        }else {
            printf("Atencao: Area da cidade 01 é zero. Densidade populacional igual a 0\n");
            densidade_pop_c1 = 0.0f;
        }   
    
    float densidade_pop_c2;
        if(area2 != 0.0f){
            densidade_pop_c2 = (float) populacao2 / area2;
        }else {
        printf("Atencao: Area da cidade 02 é zero. Densidade populacional igual a 0\n");
             densidade_pop_c2 = 0.0f;
        }
    
    double pibpercapita1;
        if (populacao != 0){
            pibpercapita1 = (float) pib * 1000000000.0f / populacao;
        } else{
            printf("Atencao: Populacao da cidade 01 é zero. PIB per capita igual a 0\n");
            pibpercapita1 = 0.0f;
        }

    double pibpercapita2;
        if (populacao2 != 0){
            pibpercapita2 = (float) pib2 * 1000000000.0f / populacao2;
        } else{
            printf("Atencao: Populacao da cidade 02 é zero. PIB per capita igual a 0\n");
            pibpercapita2 = 0.0f;
        }
    
        //variaveis novas
    double pib_total_reais_c1 = pib * 1000000000.0;
    double pib_total_reais_c2 = pib2 * 1000000000.0;

    double termo_inverso_densidade_c1 = 0.0;
    if (densidade_pop_c1 != 0.0f){
        termo_inverso_densidade_c1 = (1.0 / densidade_pop_c1);
    }else {
        printf("Aviso: Densidade populacional da cidade 01 e zero. Inverso da densidade nao adicionado ao Super Poder.\n");
    }
    
    

    double termo_inverso_densidade_c2 = 0.0;
    if (densidade_pop_c2 != 0.0f){
        termo_inverso_densidade_c2 = (1.0 / densidade_pop_c2);
    }else {
        printf("Aviso: Densidade populacional da cidade 02 e zero. Inverso da densidade nao adicionado ao Super Poder.\n");
    }
    
    double superpoder = 0.0;
    superpoder = (double) populacao + area + pib + (double) pontosturisticos + pibpercapita1 + termo_inverso_densidade_c1;
    double superpoder2 = 0.0;
    superpoder2 = (double) populacao2 + area2 + pib2 + (double) pontosturisticos2 + pibpercapita2 + termo_inverso_densidade_c2;
    
    printf("\n");
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
    
    printf("\n");
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
    printf("\n");
    
    // resultado das cartas
    printf("Resultado das cartas\n");
    printf("\n");

    // População
        if (populacao > populacao2) printf("População: Carta N1 venceu\n");
        else if (populacao < populacao2) printf("População: Carta N2 venceu\n");
        else printf("População: EMPATE!!!\n");

    // Área
    if (area > area2) printf("Área: Carta N1 venceu\n");
    else if (area < area2) printf("Área: Carta N2 venceu\n");
    else printf("Área: EMPATE!!!\n");

    // PIB
    if (pib > pib2) printf("PIB: Carta N1 venceu\n");
    else if (pib < pib2) printf("PIB: Carta N2 venceu\n");
    else printf("PIB: EMPATE!!!\n");

    // Pontos Turísticos
    if (pontosturisticos > pontosturisticos2) printf("Pontos Turísticos: Carta N1 venceu\n");
    else if (pontosturisticos < pontosturisticos2) printf("Pontos Turísticos: Carta N2 venceu\n");
    else printf("Pontos Turísticos: EMPATE!!!\n");

    // Densidade Populacional (menor é melhor!)
    if (densidade_pop_c1 < densidade_pop_c2) printf("Densidade Populacional: Carta N1 venceu\n");
    else if (densidade_pop_c1 > densidade_pop_c2) printf("Densidade Populacional: Carta N2 venceu\n");
    else printf("Densidade Populacional: EMPATE!!!\n");

    // PIB per capita
    if (pibpercapita1 > pibpercapita2) printf("PIB per capita: Carta N1 venceu\n");
    else if (pibpercapita1 < pibpercapita2) printf("PIB per capita: Carta N2 venceu\n");
    else printf("PIB per capita: EMPATE!!!\n");

    // SuperPoder
    if (superpoder > superpoder2) printf("SuperPoder: Carta N1 venceu\n");
    else if (superpoder < superpoder2) printf("SuperPoder: Carta N2 venceu\n");
    else printf("SuperPoder: EMPATE!!!\n");
             
           
    return 0;
}
