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
    char estado01[50];
    char nome01[50];
    int codigo01;   
    int populacao01;
    float area01;
    float pib01;
    int turistico01;
    
    printf("Carta 1: \n");

    printf("Digite o nome do estado: \n");//
    scanf("%s", &estado01);
    
    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo01);

    printf("Digite o nome da cidade: \n");//
    scanf("%s", &nome01);

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao01);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area01);

    printf("Digite o PIB: \n");
    scanf("%f", &pib01);

    printf("Digite numero de ponto turisticos: \n");
    scanf("%d", &turistico01);
    
    char estado02[50];
    char nome02[50];
    int codigo02;   
    int populacao02;
    float area02;
    float pib02;
    int turistico02;
    
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