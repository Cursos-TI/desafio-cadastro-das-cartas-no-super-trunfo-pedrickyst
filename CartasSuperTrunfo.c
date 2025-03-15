#include <stdio.h>
 
int main() {

    //Nome do jogo!
    printf("*** Super Trunfo *** \n");
    printf("\n");

    printf("Este jogo consiste em desafiar seus amigos, ultilizando cartas. \n");
    printf("Neste jogo iremos usar inrformações reais de cada estado do Brasil. \n");
    printf("Ex; Csrta A01 = Pernambuco, Carta B01 = Bahia! \n");
    
    
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[10] = "A01";
    char codigo2[10] = "B01";
    char cidade1[20] = "Recife";
    char cidade2[20] = "Salvador";
    int populacao1 = 9.059;
    int populacao2 = 14.14;
    float area1 = 98.312;
    float area2 = 567.295;
    float PIB1 = 197.8;
    float PIB2 = 115.9;
    int pontos1 = 7;
    int pontos2 = 10;
    float densidade1;
    float densidade2;

    int soma, subtracao, multiplicacao, divisao;

    int resultado;    

    printf("O estado é: %c\n", estado1);
    printf("O Código é: %s\n", codigo1);
    printf("A Cidade é: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("A Área é: %f\n", area1);
    printf("O P.I.B é: %f\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("A Densidade Populacional é: %f\n", area1/populacao1);
    printf("O P.I.B Percapita é: %f\n", PIB1/populacao1);
    
    printf("\n");

    printf("O estado é: %c\n", estado2);
    printf("O Código é: %s\n", codigo2);
    printf("A Cidade é: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("A Área é: %f\n", area2);
    printf("O P.I.B é: %f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("A Densidade Populacional é: %f\n", area2/populacao2);
    printf("O P.I.B Percapita é: %f\n", PIB2/populacao2);

    printf("\n");

    return 0;
    
}