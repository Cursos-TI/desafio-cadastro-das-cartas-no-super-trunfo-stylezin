#include <stdio.h>
#include <string.h>

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

    
    // variáveis declaradas, estado, código, cidade, população, pontoturístico, area e PIB da primeira e segunda carta
    char estado, codigocarta[4], nome_city[40], estado2, codigocarta2[4], nome_city2[40];
    int populacao, ponto_turistico, populacao2, ponto_turistico2;
    float area, PIB, densi_popu = 0, PIB_capita = 0,area2, PIB2, densi_popu2 = 0, PIB_capita2 = 0; 
 

    printf("*** Informacoes da primeira carta ***\n");

    printf("Qual o estado escolhido?\n"); 
    scanf(" %c", &estado); // adicionado um espaço antes para que o scanf ignore qualquer caracter em branco ou uma quebra de linha decorrente do \n
		
    printf("Qual o codigo da carta?\n");
    scanf("%s", codigocarta);
	
	printf("Qual o nome da cidade?\n");
	getchar();
	fgets(nome_city, 40, stdin);
	                          
	printf("Qual a populacao da cidade?\n");
	scanf("%d", &populacao);
	
	printf("Quantos pontos turisticos tem?\n");
	scanf("%d", &ponto_turistico);
	
	printf("Qual o tamanho da area?\n");
	scanf("%f", &area);
	
	printf("Qual o PIB?\n");
	scanf("%f", &PIB);
    
    printf("=============================\n");

    printf("*** Informacoes da segunda carta ***\n");

    printf("Qual o estado escolhido?\n"); 
    scanf(" %c", &estado2); 
		
    printf("Qual o codigo da carta?\n");
    scanf("%s", codigocarta2);
	
	printf("Qual o nome da cidade?\n");
	getchar();
	fgets(nome_city2, 40, stdin);
	                          
	printf("Qual a populacao da cidade?\n");
	scanf("%d", &populacao2);
	
	printf("Quantos pontos turisticos tem?\n");
	scanf("%d", &ponto_turistico2);
	
	printf("Qual o tamanho da area?\n");
	scanf("%f", &area2);
	
	printf("Qual o PIB?\n");
	scanf("%f", &PIB2);
	
    densi_popu = populacao / area;
    PIB_capita = PIB / populacao;

    printf("Cartas Registradas:\n");
    printf("=============================\n");
    printf("|Carta 1|\n");
    printf("Estado: %c\n", estado); // MOSTRA PARA O USUÁRIO O ESTADO DA PRIMEIRA CARTA
    printf("Codigo: %3s\n", codigocarta); // MOSTRA PARA O USUÁRIO CODIGO DA PRIMEIRA CARTA
    printf("Nome da cidade: %s", nome_city); // MOSTRA O NOME DA CIDADE DA PRIMEIRA CARTA
    printf("Populacao: %d\n", populacao); // MOSTRA A POPULAÇÃO DA PRIMEIRA CARTA
    printf("Pontos turisticos: %d\n", ponto_turistico); //MOSTRA OS PONTOS TURÍSTICOS DA PRIMEIRA CARTA
    printf("Area: %.2f km²\n", area); // MOSTRA AREA DA PRIMEIRA CARTA
    printf("Densidade populacional: %.2f hab/km²\n", densi_popu); // MOSTRA A DENSIDADE POPULACIONAL DA CIDADE DA PRIMEIRA CARTA
    printf("PIB: %.2f bilhoes de reais\n", PIB); // MOSTRA O PIB DA PRIMEIRA CARTA
    printf("PIB per capita: %.2f reais\n\n", PIB_capita); // MOSTRA O PIB PER CAPITA DA CIDADE DA PRIMEIRA CARTA
    

    densi_popu2 = populacao2 / area2;
    PIB_capita2 = PIB2 / populacao2;

    printf("=============================\n\n");
    printf("|Carta 2|\n");
	printf("Estado: %c\n", estado2); // MOSTRA PARA O USUÁRIO O ESTADO DA SEGUNDA CARTA
    printf("Codigo: %3s\n", codigocarta2); // MOSTRA PARA O USUÁRIO CODIGO DA SEGUNDA CARTA
    printf("Nome da cidade: %s", nome_city2); // MOSTRA O NOME DA CIDADE DA SEGUNDA CARTA
    printf("Populacao: %d\n", populacao2); // MOSTRA A POPULAÇÃO DA SEGUNDA CARTA
    printf("Pontos turisticos: %d\n", ponto_turistico2); //MOSTRA OS PONTOS TURÍSTICOS DA SEGUNDA CARTA
    printf("Area: %.2f km²\n", area2); // MOSTRA AREA DA SEGUNDA CARTA
    printf("Densidade populacional: %.2f hab/km²\n", densi_popu2); // MOSTRA A DENSIDADE POPULACIONAL DA CIDADE DA SEGUNDA CARTA
    printf("PIB: %.2f bilhoes de reais\n", PIB2); // MOSTRA O PIB DA SEGUNDA CARTA
    printf("PIB per capita: %.2f reais\n\n", PIB_capita2); // MOSTRA O PIB PER CAPITA DA CIDADE DA SEGUNDA CARTA
    
    return 0;
}
