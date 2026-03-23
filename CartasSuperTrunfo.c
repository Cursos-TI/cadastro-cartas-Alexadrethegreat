#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   //Carta 1
   char Estado1;
   char codigo1[4];
   char nomeCidade1 [50];
   int populacao1;
   float area1;
   float pib1;
   int PontosTuristicos1;

   // CARTA2
   char estado2;
   char codigo2[4];  
   char nomeCidade2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;

   //===== ENTRADA CARTA 1=====
   printf("Estado A-H: ");
   scanf(" %c", &Estado1);
   
   printf("Codigo da carta (Ex:A01): ");
   scanf("%s", codigo1);

   printf("Populacao: ");
   scanf("%d", &populacao1);

   printf("Area (KM²): ");
   scanf("%f", &area1);

   printf("PIB: ");
   scanf("%f", &pib1);

   printf("Numero de Pontos turisticos: ");
   scanf("%d", &PontosTuristicos1); 

//===== ENTRADA CARTA2====

   printf("Estado A-H: ");
   scanf(" %c", &estado2);

   printf("Codigo da Carta (Ex:A01):");
   scanf("%s", codigo2);

   printf("Nome da cidade: ");
   scanf("%s[^\n] nomeCidade2");

   printf("Populacao:");
   scanf("%d", &populacao2);

   printf("Area:");
   scanf("%f", &area2);

   printf("PIB:");
   scanf("%f", &pib2);

  printf("Numero de Pontos turisticos:");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

   printf("\n\n=== Carta 1 ====\n");
   printf("Estado: %c\n", Estado1);
   printf("Codigo: %s\n", codigo1);
   printf("Cidade: %s\n", nomeCidade1);
   printf("Populacao: %d\n", populacao1);
   printf("Area: %.2f\n", area1);
   printf("PIB: %2.f\n", pib1);
   printf("Pontos Turisticos: %d\n", PontosTuristicos1);

   printf("\n=== Carta 2===\n");
   printf("Estado: %c\n", estado2);
   printf("Codigo: %s\n", codigo2);
   printf("Cidade: %s\n", nomeCidade2);
   printf("Populacao: %d\n", populacao2);
   printf("Area: %.2f\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Pontos turisticos: %d\n", pontosTuristicos2);
   

return 0;
} 
