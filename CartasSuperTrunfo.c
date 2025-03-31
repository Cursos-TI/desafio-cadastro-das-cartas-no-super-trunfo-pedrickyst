#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    
    printf("*** Super Trunfo *** \n");
    printf("\n");
    //Impressão do nome do jogo!

    int opcao, player1, player2, computer;
    srand(time(0));

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
        break;
    case 2:
    printf("Este jogo consiste em desafiar seus amigos, ultilizando cartas. \n");
    printf("Neste jogo iremos usar inrformações reais de cada estado do Brasil. \n");
    printf("Ex; \n");
    printf("1 = Pernambuco, 2 = Bahia! \n");
    printf("Deseja continuar com jogo: \n");
    scanf("%d", &opcao);
        break;
    case 3:
        printf("Sair\n");
        printf("Vamos voltar ao jogo: \n");
        scanf("%d", &opcao);
        break;   
        default:
        printf("Código Inexistente!\n");
        break;
    }
    switch (opcao)
    {
    case 1:
        printf("Carregando jogo...\n");
        break;
    case 2:
        printf("You Lose!\n");
        return 0;
        break;
    
    default:
    printf("Código Inexistente!");
        return 0;
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

    player2 = rand() % 6 + 1;

       printf("Escolha seu poder de 1 à 7: ");
       scanf("%d", &player1);
    
    switch (player1){
    case 1:
        printf("Player1: População - ");
        break;
    case 2:
        printf("Player1: Área - ");
        break;
    case 3:
        printf("Player1: P.I.B - ");
        break;
    case 4:
        printf("Player1: Pontos Turisticos - ");
        break;
    case 5:
        printf("Player1: Densidade Populacional - ");
        break;
    case 6:
        printf("Player1: Densidade Percapta - ");
        break;
    case 7:
        printf("Player1: Poder - ");
        break;
    default:
        printf("Código Inexistente! \n");
        break;
    } 

    switch (player2)
    {
    case 1:
        printf("Player2: População\n");
        break;
    case 2:
        printf("Player2: Área\n");
        break;
    case 3:
        printf("Player2: P.I.B\n");
        break;
    case 4:
        printf("Player2: Pontos Turisticos\n");
        break;
    case 5:
        printf("Player2: Densidade Populacional\n");
        break;
    case 6:
        printf("Player2: Densidade Percapta\n");
        break;
    case 7:
        printf("Player2: Poder\n");
        break;
    }

    /*nas linhas de 21-54 está os infortmações que devem ser impressos de acordo com a escolha do jogador.
    Se ele quiser iniciar o jogo basta clicar em 1 e sera enviado para o comandse de escolha de cartas.
    se ele quiser ver as regras do jogo ele deve apertar 2.
    Se ele não quiser jogar aciona 3 e sairá do jogo.
    */

    char estado1;
    char estado2;
    char codigo1[10] = "A01";
    char codigo2[10] = "B01";
    char cidade1[20] = "Recife";
    char cidade2[20] = "Salvador";
    unsigned int populacao1 = 9059;
    unsigned int populacao2 = 1414;
    float area1 = 983.12;
    float area2 = 567.29;
    float PIB1 = 1978.00;
    float PIB2 = 1159.00;
    int pontos1 = 7;
    int pontos2 = 10;
    unsigned int densidade1 = 10852.412;
    unsigned int densidade2 = 40119.518;
    unsigned int densidadeP1 = 21834.641;
    unsigned int densidadeP2 = 81966.057;
    unsigned int poder1 = 2086.827;
    unsigned int poder2 = 824.605;
    //Nas linhas 66-85 esta as informações de cada carta.
    
    int soma, subtracao, multiplicacao, divisao, resultado;
    //Comando usado para calculos.

    printf("\n");

    printf("Comparação das cartas: \n");
    printf("\n");
    printf("População: %u\n", populacao1 >= populacao2);
    printf("Área: %d\n", area1 >= area2);
    printf("P.I.B: %d\n", PIB1 >= PIB2);
    printf("Pontos Turisticos: %d\n", pontos1 >= pontos2);
    printf("Densidade Populacional: %d\n", densidade1 >= densidade2);
    printf("Densidade Percapta: %d\n", densidadeP1 >= densidadeP2);
    printf("Super Poder: %d\n", poder1 >= poder2);

    //Aqui o programa ira executar os calculos para entregar o resultado de comparação das cartas.
    printf("\n");

    if (player1 == player2)
    {
        printf(" ### DROWNGAMER ###\n");

    } else if ((populacao1 >= populacao2) && (populacao1 == populacao2) ||
    (area1 >= area2) && (area1 >= area2) || (PIB1 == PIB2) &&
                (PIB1 >= PIB2) || (pontos1 >= pontos2) && (pontos1 == pontos2) ||
            (densidade1 >= densidade2) && (densidade1 == densidade2) || 
            (poder1 >= poder2) && (poder1 == poder2)||
             (densidadeP1 == densidadeP2) && (densidadeP1 >= densidadeP2))
    {
        printf("Player1: venceu! \n");
    } else {
        printf("Player2: Venceu! \n");
    }
    
    //Aqui é onde será feita a comparação do poder que tornará a carta vencedora.

    printf("\n");

    return 0;
    
}