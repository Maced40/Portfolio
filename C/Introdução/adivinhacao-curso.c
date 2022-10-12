#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

// #define NUMERO_DE_TENTATIVAS 5 

int main() {

    setlocale(LC_ALL, "Portuguese"); //configuramos a linguagem
    system("cls");

    printf("          P  /_\\  P                             \n");
    printf("         /_\\_|_|_/_\\                           \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao!\n");
    printf("    |" "  |  |_|  |"  " |                        \n");
    printf("    |_____| ' _ ' |_____|                        \n");
    printf("          \\__|_|__/                             \n\n\n");

    int segundos = time(0); //precisamos mudar a semente
    srand(segundos); //estabelecemos a semente
    int numerosecretogrande = rand(); //usa a semenete que mudamos
    int numerosecreto = numerosecretogrande % 100; //short ou long
    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000; //float
    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    int numerodetentativas;
    //outra maneira de escrever ifs:
    switch(nivel) {
        case 1: //if
            numerodetentativas = 15;
            break;
        case 2: //else if
            numerodetentativas = 10;
            break;
        default: //else
            numerodetentativas = 5;
            break;
    } 
    // porém ele continua, então temos que sempre usar o break
    for(int i = 1; i <= numerodetentativas; i++) {
        printf("|*|Tentativa %d|*|\n", tentativas);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }
        int acertou = chute == numerosecreto; // 1 = True
        int maior = chute > numerosecreto;
        if(acertou) {
            break;
        }
        else if(maior){
            printf("Seu chute foi maior do que o numero secreto, tente de novo!\n");
        }
        else {
            printf("Seu chute foi menor do que o numero secreto, tente de novo!\n");
        }
        tentativas ++;
        double pontosperdidos = abs(chute - numerosecreto) / (double)2; //convertemos o tipo de dado
        pontos -= pontosperdidos;
    } 
    printf("Fim de jogo!\n");
    if(acertou){
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");
        printf("Voce ganhou! Parabens!");
        printf("Voce conseguiu acertar com %d tentativas\n", tentativas);
        printf("Aqui esta a sua quantidade de pontos: %.1f", pontos);
    } else {
        printf("Voce perdeu! Tente novamente!\n");
        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
    }
}   