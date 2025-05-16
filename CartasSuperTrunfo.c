#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Nível Novato
    //Declaração das Variáveis
    //Carta 1
    char estado1;
    char codigo_carta1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    //Carta 2
    char estado2;
    char codigo_carta2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Entrada de dados

    printf("------ Super Trunfo ------\n");
    printf("Seja bem-vindo(a) ao jogo Super Trunfo, para jogar insira as informações requeridas sobre as cartas.\n\n");
    
    printf("--- Carta N°1 ---\n");
    printf("Digite a letra que representa o Estado da carta : \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01, B02) : \n");
    scanf(" %s", &codigo_carta1);
    printf("Digite o nome da cidade (Obs: Nomes compostos não são suportados): \n");
    scanf(" %s", &cidade1);
    printf("Digite o número de habitantes : \n");
    scanf(" %d", &populacao1);
    printf("Digite a área em km² da cidade : \n");
    scanf(" %f", &area1);
    printf("Digite o PIB em bilhões da carta : \n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos : \n");
    scanf(" %d", &pontos_turisticos1);
    
    printf("\n\n");
    
    printf("--- Carta N°2 ---\n");
    printf("Digite a letra que representa o Estado da carta : \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01, B02) : \n");
    scanf(" %s", &codigo_carta2);
    printf("Digite o nome da cidade (Obs: Nomes compostos não são suportados) : \n");
    scanf(" %s", &cidade2);
    printf("Digite o número de habitantes : \n");
    scanf(" %d", &populacao2);
    printf("Digite a área em km² da cidade : \n");
    scanf(" %f", &area2);
    printf("Digite o PIB em bilhões da carta : \n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos : \n");
    scanf(" %d", &pontos_turisticos2);
    
    printf("\n\n");
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição dos dados das cartas

    printf("Dados da Carta N°1\n");
    printf("Estado : %c\n", estado1);
    printf("Código : %s\n", codigo_carta1);
    printf("Nome da Cidade : %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área : %.2f km²\n", area1);
    printf("PIB : %.2f bilhôes de reais \n", pib1);
    printf("Número de Pontos Turísticos : %d", pontos_turisticos1);
    
    printf("\n\n");
    
    printf("Dados da Carta N°2\n");
    printf("Estado : %c\n", estado2);
    printf("Código : %s\n", codigo_carta2);
    printf("Nome da Cidade : %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área : %.2f km²\n", area2);
    printf("PIB : %.2f bilhôes de reais \n", pib2);
    printf("Número de Pontos Turísticos : %d\n", pontos_turisticos2);



    return 0;
}
