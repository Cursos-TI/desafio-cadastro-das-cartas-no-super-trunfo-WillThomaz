#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração das variaveis - carta 1
    char estado1;
    char codigo1[10], nome1[50];
    float pib1, area1;
    int populacao1, pontos1; 

    // Declaração das variaveis - carta 2
    char estado2;
    char codigo2[10], nome2[50];
    float pib2, area2;
    int população2, pontos2; 

    // Leitura das cartas
    
    printf ("Digite a letra do seu estado: ");
    scanf ("%s\n", estado1);

    printf ("Digite o código da sua carta: ");
    scanf ("%s\n", codigo1);

    printf ("Digite o nome da sua cidade: ");
    scanf ("%s\n", nome1);

    printf ("Digite a população total da sua cidade: ");
    scanf ("%i\n", &populacao1);

    printf ("Digite a área em KM² da sua cidade: ");
    scanf ("%f\n", &area1);

    printf ("Digite o PIB da sua cidade: ");
    scanf ("%f\n", &pib1);

    printf ("Digite a quantidade de pontos turisticos da sua cidade: ");
    scanf ("%i\n", &pontos1);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
