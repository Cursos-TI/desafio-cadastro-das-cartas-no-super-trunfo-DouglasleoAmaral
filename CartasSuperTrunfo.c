#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    
    char estado01[50], estado02[50];
    char nome01[50], nome02[50];
    int codigo01, codigo02;   
    int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    int turistico01, turistico02;
    
    printf("*** Desafio Super Trunfo - Países ***\n");

    printf("Carta 1: \n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado01);                //Digitar o nome do estado
    
    printf("Digite o codigo da carta: \n"); 
    scanf("%d", &codigo01);                //Digitar o codigo da carta

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome01);                 //Digitar o nome da cidade

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao01);            //Digitar o numero da população

    printf("Digite a área da cidade: \n");
    scanf("%f", &area01);                //Digitar a área da cidade

    printf("Digite o PIB: \n");
    scanf("%f", &pib01);                 //Digitar o pib da cidade

    printf("Digite numero de ponto turisticos: \n");
    scanf("%d", &turistico01);
    
    printf("Carta 2: \n");
    printf("Digite o nome do estado: \n");//
    scanf("%s", &estado02);
    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo02);
    printf("Digite o nome da cidade: \n");//
    scanf("%s", &nome02);
    printf("Digite o numero da população: \n");
    scanf("%d", &populacao02);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area02);
    printf("Digite o PIB: \n");
    scanf("%f", &pib02);
    printf("Digite numero de ponto turisticos: \n");
    scanf("%d", &turistico02);

    printf("\n");

    printf("Carta 1 \n");
    printf("Estado: %s\n", estado01);
    printf("Código: %d\n", codigo01);
    printf("Nome da Cidade: %s\n", nome01);   
    printf("População: %d\n", populacao01);
    printf("Área %.0f\n", area01);
    printf("PIB: %.0f\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", turistico01);

    printf("\n");

    printf("Carta 2 \n");
    printf("Estado: %s\n", estado02);
    printf("Código: %d\n", codigo02);
    printf("Nome da Cidade: %s\n", nome02);   
    printf("População: %d\n", populacao02);
    printf("Área %.0f\n", area02);
    printf("PIB: %.0f\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", turistico02);
   





    return 0;
}