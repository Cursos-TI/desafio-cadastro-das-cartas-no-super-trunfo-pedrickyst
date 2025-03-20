#include <stdio.h>
 
int main() {

    //Nome do jogo!
    printf("*** Super Trunfo *** \n");
    printf("\n");

    //Apresentação do Jogo.
    printf("Este jogo consiste em desafiar seus amigos, ultilizando cartas. \n");
    printf("Neste jogo iremos usar inrformações reais de cada estado do Brasil. \n");
    printf("Ex; Carta A01 = Pernambuco, Carta B01 = Bahia! \n");
    printf("\n");

    //Comandos (int's), para selecionar a carta que será usada pelo player.
    char A01 = 1;
    char B01 = 2;

    //opção de escolha das cartas para o palyer (Jogador!).
    printf("Escolha sua carta: ");
    scanf("%d\n", A01, B01);
    printf("\n");
    
    //Códigos usados como base para a funcionabilidade do softwer do jogo.
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[10] = "A01";
    char codigo2[10] = "B01";
    char cidade1[20] = "Recife";
    char cidade2[20] = "Salvador";
    unsigned int populacao1 = 9059;
    unsigned int populacao2 = 1414;
    float area1 = 98312;
    float area2 = 56729;
    float PIB1 = 197800;
    float PIB2 = 115900;
    int pontos1 = 7;
    int pontos2 = 10;
    unsigned int densidade1 = 10852412;
    unsigned int densidade2 = 40119518;
    unsigned int densidadeP1 = 21834641;
    unsigned int densidadeP2 = 81966057;
    unsigned int poder1 = 2086827;
    unsigned int poder2 = 824605;
    
    //Comandos para calculos.
    int soma, subtracao, multiplicacao, divisao;
    
    int resultado;    

    //inf da carta A01 = PERNAMBUCO.
    printf("O estado é: %c\n", estado1);
    printf("O Código é: %s\n", codigo1);
    printf("A Cidade é: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("A Área é: %.2f\n", area1);
    printf("O P.I.B é: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("A Densidade Populacional é: %f\n", area1 / populacao1);
    printf("O P.I.B Percapita é: %f\n", PIB1 / populacao1);
    printf("Super Poder: %d\n", poder1);
    
    printf("\n");

    //inf da carta B01 = BAHIA.
    printf("O estado é: %c\n", estado2);
    printf("O Código é: %s\n", codigo2);
    printf("A Cidade é: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("A Área é: %.2f\n", area2);
    printf("O P.I.B é: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("A Densidade Populacional é: %f\n", area2 / populacao2);
    printf("O P.I.B Percapita é: %f\n", PIB2 / populacao2);
    printf("Super Poder: %d\n", poder2);

    printf("\n");

    //comparação das informações da carta A01 e B01.
    printf("Comparação das cartas: \n");
    printf("venceu: %u\n", populacao1 >= populacao2);
    printf("venceu: %d\n", area1 >= area2);
    printf("venceu: %d\n", PIB1 >= PIB2);
    printf("venceu: %d\n", pontos1 >= pontos2);
    printf("venceu: %d\n", densidade1 >= densidade2);
    printf("venceu: %d\n", densidadeP1 >= densidadeP2);
    printf("venceu: %d\n", poder1 >= poder2);

    printf("\n");

    //Mensagem de agradecimento!
    printf("Muito Obrigado! Seu jogo foi sensacional. \n");

    printf("\n");

    return 0;
    
}