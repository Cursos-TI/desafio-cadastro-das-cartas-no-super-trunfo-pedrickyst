#include <stdio.h>

int main() {

    char codigo[15] = "A01', 'A02";
    char Estado[40] = "Pernambuco, Bahia";
    char Cidade = "Recife, Salvador";
    int habitantes = 9059; 1414;
    float territorio = 98312; 567295;
    float pib = 2549; 349;
    int pontos = 7; 10;

    printf("Seja Bem Vindo, Jogador!");
    printf("\n");
    printf("Eu sou, O Super Trunfo! \n");
    printf("\n");
    printf("Se você esta atrás de um jogo que teste todas as suas abilidades? \n");
    printf("convido você a parar de procurar, pois este jogo ira explorar todo o seu desempenho como gamer. \n");
    printf("Isto é, em todas as áreas; seja no seu psicológico ou resistência, \n");
    printf("este jogo irá lhe impulsionar a uma nova era dos gamers. \n");
    printf("\n");
    printf("O Super Trunfo é um jogo de cartas. \n");
    printf("Cod A01 = Pernambuco \n");
    printf("Cod A02 = Bahia.\n");
    printf("\n");

    printf("Escolha sua carta:\n");
    scanf("%d", 1, 2);
    printf("\n");

    printf("A carta A01 \n");
    printf("Estado:  %s\n", "Pernambuco");
    printf("O codigo: %s\n", "A01");
    printf("Cidade: %s\n", "Recife");
    printf("População: %d\n", 9059);
    printf("Área: %d\n", 98312);
    printf("PIB: %d\n", 2549);
    printf("Pontos Turisticos: %d\n", 7);
    printf("\n");

    printf("A carta A02 \n");
    printf("Estado:  %s\n", "Bahia");
    printf("O codigo: %s\n", "A02");
    printf("Cidade: %s\n", "Salvador");
    printf("População: %d\n", 1414);
    printf("Área: %d\n", 567295);
    printf("PIB: %d\n", 349);
    printf("Pontos Turisticos: %d\n", 10);
    printf("\n");

    return 0;



}
