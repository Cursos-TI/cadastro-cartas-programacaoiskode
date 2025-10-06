#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para apresentação e contexto do desafio
    printf("Desafio Cartas Super Trunfo!\n"); 
    printf("\n");
    printf("Digite os dados da primeira carta:\n");
    printf("\n"); 

  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    char Carta1 [20] = "Carta 1";
    char Carta2 [20] = "Carta 2";
    char Estado;
    char Codigo_da_Carta [10];
    char Nome_da_Cidade [30];
    int populacao;
    float Area;
    float PIB;
    int Numero_de_Pontos_Turisticos;

        // Área para entrada e saída dos dados das cartas

        printf("Carta 1 \n");
        printf("\n");
        printf("Insira uma letra de 'A' a 'H' para representar o Estado: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%c", &Estado); // Área para ---colher os dados inseridos pelo usuario

        printf("Para o Codigo da Carta, insira a letra do Estado seguida de um número de 01 a 04: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%s", Codigo_da_Carta); // Área para ---colher os dados inseridos pelo usuario

        printf("Nome da Cidade: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%s", Nome_da_Cidade); // Área para ---colher os dados inseridos pelo usuario

        printf("Populacao: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%i", &populacao); // Área para ---colher os dados inseridos pelo usuario

        printf("Area: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%f", &Area); // Área para ---colher os dados inseridos pelo usuario

        printf("PIB: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%f", &PIB); // Área para ---colher os dados inseridos pelo usuario

        printf("Numero de Pontos Turisticos: \n"); // Área para solicitar os dados da carta ao usuario
        scanf("%i", &Numero_de_Pontos_Turisticos); // Área para ---colher os dados inseridos pelo usuario

        printf("\n");

        //Área de apresentação dos dados da primeira carta

        printf("Carta 1 \n"); 
        printf("Estado: %c \n", Estado);
        printf("Codigo da Carta: %s \n", Codigo_da_Carta);
        printf("Nome da Cidade: %s \n", Nome_da_Cidade);
        printf("Populacao: %.2i \n", populacao);
        printf("Area: %.2f km2\n", Area);
        printf("PIB: %.2f reais\n", PIB);
        printf("Numero de Pontos Turisticos: %i \n", Numero_de_Pontos_Turisticos);


        printf("\n");

        // Repetir o processo para a segunda carta

        printf("Digite os dados da segunda carta:\n");
        printf("Carta 2 \n");

        printf("Insira uma letra de 'A' a 'H' para representar o Estado: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%s", &Estado); // Área para ---colher os dados inseridos pelo usuario

        printf("Para o Codigo da Carta, insira a letra do Estado seguida de um número de 01 a 04: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%s", Codigo_da_Carta); // Área para ---colher os dados inseridos pelo usuario

        printf("Nome da Cidade: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%s", Nome_da_Cidade); // Área para ---colher os dados inseridos pelo usuario

        printf("Populacao: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%i", &populacao); // Área para ---colher os dados inseridos pelo usuario

        printf("Area: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%f", &Area); // Área para ---colher os dados inseridos pelo usuario

        printf("PIB: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%f", &PIB); // Área para ---colher os dados inseridos pelo usuario

        printf("Numero de Pontos Turisticos: \n"); // Área para >>>solicitar os dados da carta ao usuario
        scanf("%i", &Numero_de_Pontos_Turisticos); // Área para ---colher os dados inseridos pelo usuario
        printf("\n");


        //Área de apresentação dos dados da segunda carta

        printf("Carta 2 \n");
        printf("Estado: %c \n", Estado);
        printf("Codigo da Carta: %s \n", Codigo_da_Carta);
        printf("Nome da Cidade: %s \n", Nome_da_Cidade);
        printf("Populacao: %.2i \n", populacao);
        printf("Area: %.2f km2\n", Area);
        printf("PIB: %.2f reais\n", PIB);
        printf("Numero de Pontos Turisticos: %i \n", Numero_de_Pontos_Turisticos);
        printf("\n");
        printf("\n");
        printf("Desafio concluído!\n");


        //Fim do programa
  


return 0;
} 
