#include <stdio.h>
 
int main(){

    printf("Super Trunfo \n");
    //printf está identificando o (Titulo ou nome do jogo que está sendo rodado).

    int carta = 1; 2;
    char estado[25] = "Pernambuco; Bahia";
    char cidade[20] = "Recife; Salvador";
    int habitantes =  9.059; 14.14;
    float territorio = 98.312; 567.295;
    float PIB = 254.9; 349.114;
    int pontos = 7; 10;
    //Informações que serão usadas para a realização da programação.

    printf("O jogo consiste em escolher uma carta para batalhar. \n");
    //printf esta mostrando a funcionabilidade do jogo.

    printf("Escolha sua carta: \n");
    scanf("%d", 1, 2);
    printf("\n");
    //scanf("%i") esta relacionada a escolha da carta feita pelo player. 

    printf("A carta: %d\n", 1);
    printf("Estado: %s\n", "Pernambuco");
    printf("cidade: %s\n", "Recife");
    printf("Habitantes: %f\n", 9.059);
    printf("Área: %f\n", 98.312);
    printf("PIB: %f\n", 254.9);
    printf("Pontos Turisticos: %d\n", 7);
    //Aqui foram colocados as informações do primeiro estado "carta A01".

    printf("\n");

    printf("A carta: %d\n", 2);
    printf("Estado: %s\n", "Bahia");
    printf("Cidade: %s\n", "Salvador");
    printf("Habitantes: %f\n", 14.14);
    printf("Área: %f\n", 567.295);
    printf("PIB: %f\n", 349.114);
    printf("Pontos Turisticos: %d\n", 10);
    printf("\n");
    //Aqui foram colocados as informações do segundo estado "carta A02".

    printf("\n");

    
    return 0;


}