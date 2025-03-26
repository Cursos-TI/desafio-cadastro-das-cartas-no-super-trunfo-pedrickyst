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

    //Códigos usados como base para a funcionabilidade do softwer do jogo.
    char estado1;
    char estado2;
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
    
    //Comandos para calcular as densidades e o percapita.
    int soma, subtracao, multiplicacao, divisao;
    
    int resultado;

    printf("\n");

    //comparação das informações das cartas.
    printf("Comparação das cartas: \n");
    printf("\n");
    printf("venceu: %u\n", populacao1 >= populacao2);
    printf("venceu: %d\n", area1 >= area2);
    printf("venceu: %d\n", PIB1 >= PIB2);
    printf("venceu: %d\n", pontos1 >= pontos2);
    printf("venceu: %d\n", densidade1 >= densidade2);
    printf("venceu: %d\n", densidadeP1 >= densidadeP2);
    printf("venceu: %d\n", poder1 >= poder2);

    printf("\n");
    printf("Resultado dos atributos! \n");
    printf("\n");

    //todos os resultados que o programa gerará.
    if(populacao1 > populacao2){
        printf("População: Pernambuco Venceu! \n");
    }else {
        printf("População: Bahia venceu! \n");
    }

    if(area1 > area2){
        printf("Área: Pernambuco Venceu! \n");
    }else {
    printf("Área: Bahia venceu!\n");
    }

    if(PIB1 < PIB2){
        printf("P.I.B: Pernambuco Venceu! \n");
    }else {
    printf("P.I.B: Bahia venceu! \n");
    }

    if(pontos1 > pontos2){
        printf("Pontos Turisticos: Pernambuco Venceu! \n");
    }else {
        printf("Pontos Turisticos: Bahia venceu! \n");
    }

    if(densidade1 > densidade2){
        printf("Densidade Populacional: Pernambuco Venceu! \n");
    }else {
    printf("Densidade Populacional: Bahia venceu!\n");
    }

    if(densidadeP1 < densidadeP2){
        printf("Densidade Percapita: Pernambuco Venceu! \n");
    }else {
    printf("Densidade Percapita: Bahia venceu! \n");
    }

    if(poder1 < poder2){
        printf("Especial: Pernambuco Venceu! \n");
    }else {
    printf("Especial: Bahia venceu! \n");
    }

    //mensagem de agradecimento.
    printf("Muito Obrigado! Seu jogo foi sensacional. \n");

    printf("\n");

    return 0;
    
    
}