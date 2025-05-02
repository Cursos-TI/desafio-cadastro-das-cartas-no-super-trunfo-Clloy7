#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
   
    // Entrada de dados
    printf("Digite os dados da cidade 1:\n");
    printf("Nome: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
   
    printf("Digite os dados da cidade 2:\n");
    printf("Nome: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
   
    // Cálculos
    float densidade_populacional1 = (float)populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;
    float super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (1 / densidade_populacional1) + pontos_turisticos1;
   
    float densidade_populacional2 = (float)populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;
    float super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + (1 / densidade_populacional2) + pontos_turisticos2;
   
    // Comparação
    printf("Comparação de cidades:\n");
    printf("População: Cidade %s venceu\n", populacao1 > populacao2 ? nome1 : nome2);
    printf("Área: Cidade %s venceu\n", area1 > area2 ? nome1 : nome2);
    printf("PIB: Cidade %s venceu\n", pib1 > pib2 ? nome1 : nome2);
    printf("Pontos turísticos: Cidade %s venceu\n", pontos_turisticos1 > pontos_turisticos2 ? nome1 : nome2);
    printf("Super poder: Cidade %s venceu\n", super_poder1 > super_poder2 ? nome1 : nome2);

    return 0;
}
