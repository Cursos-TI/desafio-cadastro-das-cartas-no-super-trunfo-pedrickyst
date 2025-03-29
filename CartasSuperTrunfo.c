#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    
    printf("*** Super Trunfo *** \n");
    printf("\n");
    //Impressão do nome do jogo!

    int opcao;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo   2. Regras do Jogo    3. Sair \n");
    printf("\n");
    printf("Escolha uma Opção: ");
    scanf("%d", &opcao);
    printf("\n");
    //nas linhas de 10-16 foi criado o menu do jogo.
    
    switch (opcao)
    {
    case 1:
        printf("Iniciando Jogo... \n");
        break;
    case 2:
        printf("Este jogo consiste em desafiar seus amigos, ultilizando cartas. \n");
        printf("Neste jogo iremos usar inrformações reais de cada estado do Brasil. \n");
        printf("Ex; \n");
        printf("1 = Pernambuco, 2 = Bahia! \n");
        break;
    case 3:
        printf("Você saiu do Jogo! \n");
        break;    
    
    default:
        printf("Código Inexistente! \n");
        break;
    }
    /*nas linhas de 20-38 está os infortmações que devem ser impressos de acordo com a escolha do jogador.
    Se ele quiser iniciar o jogo basta clicar em 1 e sera enviado para o comandse de escolha de cartas.
    se ele quiser ver as regras do jogo ele deve apertar 2.
    Se ele não quiser jogar aciona 3 e sairá do jogo.
    */

    int carta;

    printf("\n");
    printf("Escolha sua carta: ");
    scanf("%d", &carta);
    printf("\n");

    switch (carta)
    {
    case 1:
       printf("PERNAMBUCO \n");
        break;
    case 2:
        printf("BAHIA \n");
         break;
    
    default:
        break;
    }
    //nas linhas de 43-63, o jogador vai passar a escolher sua carta.

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
    //Nas linhas 66-85 esta as informações de cada carta.
    
    int soma, subtracao, multiplicacao, divisao, resultado;
    //Comando usado para calculos.

    printf("\n");

    printf("Comparação das cartas: \n");
    printf("venceu: %u\n", populacao1 >= populacao2);
    printf("venceu: %d\n", area1 >= area2);
    printf("venceu: %d\n", PIB1 >= PIB2);
    printf("venceu: %d\n", pontos1 >= pontos2);
    printf("venceu: %d\n", densidade1 >= densidade2);
    printf("venceu: %d\n", densidadeP1 >= densidadeP2);
    printf("venceu: %d\n", poder1 >= poder2);

    //Aqui o programa ira executar os calculos para entregar o resultado de comparação das cartas.

    printf("\n");
    printf("Carta vencedora! \n");
    printf("\n");
    //A informação da carta vencedora.
   
    if(densidadeP1 > densidadeP2){
        printf("PERNAMBUCO \n");
    }else {
    printf("BAHIA \n");
    }
    //Aqui é onde será feita a comparação do poder que tornará a carta vencedora.

    printf("\n");

    return 0;
    
}