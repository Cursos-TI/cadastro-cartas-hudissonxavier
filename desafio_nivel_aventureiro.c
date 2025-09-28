
/**
 * 1) Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, 
 * que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 * 
 * 2) Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
 *  Armazene esse valor em uma variável do tipo float.
 * 
 * 3) Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico),
 * seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade.
 * Formate os valores de ponto flutuante com duas casas decimais.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

   // Variáveis da primeira carta
    char estado_UF_c01;
    char cidade_c01[50];
    char codigo_c01[4];
    int populacao_c01;
    float area_c01;
    float pib_c01;
    int pontosTuristicos_c01;
    float densidadePopulacional_c01;
    float PIBperCapita_c01;


    // Variáveis da segunda carta
    char estado_UF_c02;
    char cidade_c02[50];
    char codigo_c02[4];
    int populacao_c02;
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
    scanf(" %d", &populacao_c01);

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
    scanf(" %d", &populacao_c02);

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
    printf("\nCarta: 1\n");
    printf("Estado: %c\n", estado_UF_c01);
    printf("Codigo: %s\n", codigo_c01);
    printf("Cidade: %s\n", cidade_c01);
    printf("Populacao: %d\n", populacao_c01);
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
    printf("Populacao: %d\n", populacao_c02);
    printf("Area em km²: %.2f\n", area_c02);
    printf("PIB em bilhoes de reais: %.2f\n", pib_c02);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos_c02);
    printf("Densidade Populacional %.2f\n", densidadePopulacional_c02);
    printf("PIB per Capita %.2f\n\n", PIBperCapita_c02);
  
    return 0;
}