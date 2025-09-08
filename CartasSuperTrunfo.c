#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Declaração das variaveis - carta 01

    char estado1;
    char codigo1[10], nome1[50];
    float area1, pib1, densidade1, per1;
    int populacao1, pontos1; 


    // Declaração das variaveis - carta 02

    char estado2;
    char codigo2[10], nome2[50];
    float area2, pib2, densidade2, per2;
    int populacao2, pontos2; 

    // Leitura das cartas

    printf("Preencha os dados da carta 01\n\n"); 
   
    printf("Digite a letra do seu estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da sua carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", nome1);

    printf("Digite a população total da sua cidade: ");
    scanf("%i", &populacao1);

    printf("Digite a área em KM² da sua cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da sua cidade: ");
    scanf("%i", &pontos1);
    printf("\n\n");

    printf("Preencha os dados da carta 02\n\n"); 
   
    printf("Digite a letra do seu estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da sua carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", nome2);

    printf("Digite a população total da sua cidade: ");
    scanf("%i", &populacao2);

    printf("Digite a área em KM² da sua cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da sua cidade: ");
    scanf("%i", &pontos2);
    printf("\n\n");

    // Calcular densidade e pib per capita

    densidade1 = (float) populacao1/area1;
    per1 = (float) pib1 * 1000000000 /populacao1;

    densidade2 = (float) populacao2/area2;
    per2 = (float) pib2 * 1000000000 /populacao2;

    // Exibir os dados das cartas cadastradas:
    
    printf("Carta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %i\n", pontos1);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f mil reais\n\n", per1 / 1000);


    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %i\n", pontos2);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f mil reais\n\n", per2 / 1000);

    return 0;
}
