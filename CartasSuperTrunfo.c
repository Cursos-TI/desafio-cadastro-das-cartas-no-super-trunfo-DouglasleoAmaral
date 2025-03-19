#include <stdio.h>


int main() {
   
    
    char estado01[30], estado02[30];
    char nome01[20], nome02[20];
    char codigo01[5], codigo02[5];   
    int populacao01, populacao02;
    float area01, area02;
    long int pib01, pib02;
    int turistico01, turistico02;

    printf("*** Desafio Super Trunfo - Países ***\n");

    printf("Vamos começar a cadastrar as cartas!\n");

    printf("Carta 1: \n");
    
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado01);                //Digitar o nome do estado
    
    printf("Digite o codigo da carta: \n"); 
    scanf("%s", &codigo01);                //Digitar o codigo da carta

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome01);                 //Digitar o nome da cidade

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao01);            //Digitar o numero da população

    printf("Digite a área da cidade: \n");
    scanf("%f", &area01);                //Digitar a área da cidade
    
    printf("Digite o PIB: \n");
    scanf("%ld", &pib01);                 //Digitar o pib da cidade

    printf("Digite numero de ponto turisticos: \n");
    scanf("%d", &turistico01);
   
    float densidadePopulacional01 = (float) populacao01 / area01;
    float PIBperCapita01 = pib01 / (float) populacao01;
    float reversodensidade01 = 1 / densidadePopulacional01;
    long int superPoder01 = populacao01 + (long int)area01 + pib01 + turistico01 + (long int)PIBperCapita01 + (long int)reversodensidade01;
   
    printf("Carta 2: \n");
    
    printf("Digite o nome do estado: \n");//
    scanf("%s", &estado02);
    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo02);
    printf("Digite o nome da cidade: \n");//
    scanf("%s", &nome02);
    printf("Digite o numero da população: \n");
    scanf("%d", &populacao02);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area02);
    printf("Digite o PIB: \n");
    scanf("%ld", &pib02);
    printf("Digite numero de ponto turisticos: \n");
    scanf("%d", &turistico02);
    
    float densidadePopulacional02 = (float) populacao02 / area02;
    float PIBperCapita02 = pib02 / (float) populacao02;
    float reversodensidade02 = 1 / densidadePopulacional02;
    long int superPoder02 = populacao02 + (long int)area02 + pib02 + turistico02 + (long int)PIBperCapita02 + (long int)reversodensidade02;

    printf("\n");

    printf("Carta 1 \n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", nome01);   
    printf("População: %d\n", populacao01);
    printf("Área %.2f km²\n", area01);
    printf("PIB:R$ %ld \n", pib01);
    printf("Número de Pontos Turísticos: %d\n", turistico01);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional01);
    printf("PIB per Capita: %.2f\n", PIBperCapita01);
    printf("Super Poder: %ld\n", superPoder01);

    printf("\n"); 

    printf("Carta 2 \n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", nome02);   
    printf("População: %d\n", populacao02);
    printf("Área %.2f km²\n ", area02);
    printf("PIB:R$ %ld\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", turistico02);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional02);
    printf("PIB per Capita: %.2f\n", PIBperCapita02);
    printf("Super Poder: %ld\n", superPoder02);
    
    int resultadopopulacao = populacao01 < populacao02;
    int resultadoarea = area01 < area02;
    int resultadopib = pib01 < pib02;
    int resultadoturisticos = turistico01 < turistico02;
    int resultadodensidade = densidadePopulacional01 > densidadePopulacional02;
    int resultadopibpercapita = PIBperCapita01 < PIBperCapita02;
    int resultadosuperpoder = superPoder01 < superPoder02;

    printf("\n");

    printf("***Vamos comparar qual carta venceu!!***\n");

    printf("\n");

    printf("Se sair '0' a carta vencedora é a 1\n");
    printf("Se sair '1' a carta vencedora é a 2\n");

    printf("\n");

    printf("A Carta com a população vencedora é: %d\n", resultadopopulacao);
    printf("A Carta com a aréa vencedora é : %d\n", resultadoarea);
    printf("A Carta com o pib vencedor é : %d\n", resultadopib);
    printf("A Carta com pontos turisticos vencedor é : %d\n", resultadoturisticos);
    printf("A Carta com a densidade vencedora é : %d\n", resultadodensidade);
    printf("A Carta com o Pib per capita vencedor é : %d\n", resultadopibpercapita);
    printf("A Carta com o Super poder vencedor é : %d\n", resultadosuperpoder);

    printf("\n");

    printf("Obrigado por jogar!!\n");

    return 0;
}