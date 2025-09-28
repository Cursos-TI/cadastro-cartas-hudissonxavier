
/**
 * 
 * CONCLUSÃO
 * 
 * 1) Calcular a Densidade Populacional e o PIB per Capita;
 * 2) Calcular o Super Poder;
 * 3) Comparar as Cartas;
 * 4) Exibir os Resultados das Comparações
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

   // Variáveis da primeira carta
    char estado_UF_c01;
    char cidade_c01[50];
    char codigo_c01[4];
    unsigned long int  populacao_c01;
    float area_c01;
    float pib_c01;
    int pontosTuristicos_c01;
    float densidadePopulacional_c01;
    float PIBperCapita_c01;


    // Variáveis da segunda carta
    char estado_UF_c02;
    char cidade_c02[50];
    char codigo_c02[4];
    unsigned long int populacao_c02;
    float area_c02;
    float pib_c02;
    int pontosTuristicos_c02;
    float densidadePopulacional_c02;
    float PIBperCapita_c02;  

    printf("\n--- Criando as Cartas do Super Trunfo ---\n");

    // --- ENTRADA DE DADOS DA PRIMEIRA CARTA ---
    printf("\nInforme os dados da primeira carta:\n");
    printf("Estado UF (A-H): ");
    scanf(" %c", &estado_UF_c01);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade_c01);

    printf("Codigo da carta (ex: A01): ");
    scanf(" %s", codigo_c01);

    printf("Populacao: ");
    scanf(" %lu", &populacao_c01);

    printf("Area da cidade (km²): ");
    scanf(" %f", &area_c01);

    printf("PIB: ");
    scanf(" %f", &pib_c01);

    printf("Quantidade de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos_c01);

    densidadePopulacional_c01 = (populacao_c01/area_c01);
    PIBperCapita_c01 = (pib_c01/populacao_c01);

    // --- ENTRADA DE DADOS DA SEGUNDA CARTA ---
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado UF (A-H): ");
    scanf(" %c", &estado_UF_c02);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade_c02);

    printf("Codigo da carta (ex: A01): ");
    scanf(" %s", codigo_c02);

    printf("Populacao: ");
    scanf(" %lu", &populacao_c02);

    printf("Area da cidade (km²): ");
    scanf(" %f", &area_c02);

    printf("PIB: ");
    scanf(" %f", &pib_c02);

    printf("Quantidade de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos_c02);

    densidadePopulacional_c02 = (populacao_c02/area_c02);
    PIBperCapita_c02 = (pib_c02/populacao_c02); 

    // Limpa a tela para uma exibição mais limpa no terminal
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // --- EXIBIÇÃO DA PRIMEIRA CARTA ---
    printf("----------------------------------------------------------------------\n");
    printf("Carta: 1\n");
    printf("Estado: %c\n", estado_UF_c01);
    printf("Codigo: %s\n", codigo_c01);
    printf("Cidade: %s\n", cidade_c01);
    printf("Populacao: %lu\n", populacao_c01);
    printf("Area em km²: %.2f\n", area_c01);
    printf("PIB em bilhoes de reais: %.2f\n", pib_c01);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos_c01);
    printf("Densidade Populacional %.2f\n", densidadePopulacional_c01);
    printf("PIB per Capita %.2f\n", PIBperCapita_c01);

     // --- EXIBIÇÃO DA SEGUNDA CARTA ---
    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado_UF_c02);
    printf("Codigo: %s\n", codigo_c02);
    printf("Cidade: %s\n", cidade_c02);
    printf("Populacao: %lu\n", populacao_c02);
    printf("Area em km²: %.2f\n", area_c02);
    printf("PIB em bilhoes de reais: %.2f\n", pib_c02);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos_c02);
    printf("Densidade Populacional %.2f\n", densidadePopulacional_c02);
    printf("PIB per Capita %.2f\n", PIBperCapita_c02);

    // --- Calcular o Super Poder ---
    float inversoDesnsidadePop_c01 = (area_c01/populacao_c01);
    float inversoDesnsidadePop_c02 = (area_c02/populacao_c02);
  
    float superPoder_c01 = (area_c01 + pib_c01 + pontosTuristicos_c01 + densidadePopulacional_c01 + PIBperCapita_c01 + inversoDesnsidadePop_c01);
    float superPoder_c02 = (area_c02 + pib_c02 + pontosTuristicos_c02 + densidadePopulacional_c02 + PIBperCapita_c02 + inversoDesnsidadePop_c02);

    printf("----------------------------------------------------------------------\n");
    printf("Super Poder Carta 1: %.2f\n",superPoder_c01);
    printf("Super Poder Carta 2: %.2f\n\n",superPoder_c02);


    // --- Exibir os Resultados das Comparações ---
    printf("----------------------------------------------------------------------\n");
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", (populacao_c01 > populacao_c02));
    printf("Área: Carta 1 venceu (%d)\n", (area_c01 > area_c02));
    printf("PIB: Carta 1 venceu (%d)\n", (pib_c01 > pib_c02));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontosTuristicos_c01 > pontosTuristicos_c02));
    printf("Densidade Populacional: Carta 1 venceu  (%d)\n", (densidadePopulacional_c01 > densidadePopulacional_c02));
    printf("PIB per Capita: Carta 1 venceu  (%d)\n", (PIBperCapita_c01 > PIBperCapita_c02));
    printf("Super Poder: Carta 1 venceu  (%d)\n", (superPoder_c01 > superPoder_c02));
    printf("----------------------------------------------------------------------\n\n");
  
    return 0;
}