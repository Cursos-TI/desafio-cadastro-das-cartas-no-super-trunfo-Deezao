#include <stdio.h>

int main(){

    char estado[25], estado2[25];
    char nomecidade[25], nomecidade2[25];
    int populacao, populacao2;  
    float area, area2;
    float pib, pib2;
    int pontosturisticos, pontosturisticos2;  

    printf("Digite o nome do estado 01: \n");
    scanf("%s", &estado);
    printf("Digite o nome do estado 02: \n");
    scanf("%s", &estado2);
    
    printf("Digite o nome da cidade 01: \n");
    scanf("%s", &nomecidade);
    printf("Digite o nome da cidade 02: \n");
    scanf("%s", &nomecidade2);

    printf("Digite a populacao 01: \n");
    scanf("%d", &populacao);
    printf("Digite a populacao 02: \n");
    scanf("%d", &populacao2);

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

    printf("Carta N1\n");
    printf("Estado: %s\n", estado);
    printf("Nome cidade: %s\n", nomecidade);
    printf("Populacao carta : %d\n",populacao);
    printf("Area : %.2fkm²\n", area);
    printf("PIB : %.3f\n", pib);
    printf("Numero de pontos turisticos : %d\n", pontosturisticos);
    
    printf("Carta N2\n");
    printf("Estado: %s\n", estado2);
    printf("Nome cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);


    return 0;
}
