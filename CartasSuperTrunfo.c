#include <stdio.h>

int main(){

    int populacao;  
    float area;
    float pib;
    int pontosturisticos;  

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite número de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Digite o tamanho da area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Populacao carta n1: %d\n" , populacao);
    printf("Area: %.2fkm²\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos);


    return 0;
}
