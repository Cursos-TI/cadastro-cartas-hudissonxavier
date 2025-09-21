
/**
 * Enunciado do desafio:
 * Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. 
 * Para cada carta, o usuário deverá fornecer as seguintes informações:
 * Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 * Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 * Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 * População: O número de habitantes da cidade. Tipo: int
 * Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 * PIB: O Produto Interno Bruto da cidade. Tipo: float
 * Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
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

    // Variáveis da segunda carta
    char estado_UF_c02;
    char cidade_c02[50];
    char codigo_c02[4];
    int populacao_c02;
    float area_c02;
    float pib_c02;
    int pontosTuristicos_c02;       

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

     // --- EXIBIÇÃO DA SEGUNDA CARTA ---
    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado_UF_c02);
    printf("Codigo: %s\n", codigo_c02);
    printf("Cidade: %s\n", cidade_c02);
    printf("Populacao: %d\n", populacao_c02);
    printf("Area em km²: %.2f\n", area_c02);
    printf("PIB em bilhoes de reais: %.2f\n", pib_c02);
    printf("Numero de pontos turisticos: %d\n\n", pontosTuristicos_c02);
  
    return 0;
}