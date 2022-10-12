
// essa é a biblioteca que possui a função "printf()" em C
#include <stdio.h>
#include <stdlib.h>
#include<time.h>  

// para o computador entender que estamos escrevendo em C, devemos usar o int main()
// e o código que queremos utilizar dentro de {}
int main() {

    // imprimindo cabeçalho de erro
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao! *\n");
    printf("*******************************************\n");

    int chute;
    
    int numerosecreto = 1326;

    int tentativas = 10;

    while(tentativas > 0, chute != numerosecreto) {
        
        printf("Qual o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d!\n", chute);
        tentativas -= 1;
        if(chute != numerosecreto){
            printf("Voce tem %d tentativas!\n", tentativas);
        };

        while(chute != numerosecreto){
            if(chute > numerosecreto){
                printf("Seu chute foi maior do que o numero secreto!\n");
            }
            else{
                printf("Seu chute foi menor do que o numero secreto!\n");
            };
            printf("Tente novamente!\nSeu chute: ");
            scanf("%d", &chute);
            tentativas -= 1;
            if(tentativas == 0){
                printf("Sua quantidade de tentativas acabou!");
                break;
            };
            printf("Restam apenas %d tentativas!\n", tentativas);
            
        };
        if(chute == numerosecreto){
            printf("Parabens! Voce acertou!");
            break;
        };
    };
    return 0;
}

// f6 para compilar
// depois disso executamos!