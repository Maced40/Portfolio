#include <stdio.h>

int main() {
    char letras[20]; //novo tipo de dados...letra
    //nesse caso fizemos um array de letras, formando uma palavra
    sprintf(letras, "MELANCIA"); //A função sprintf(), 
    // análoga a printf é a que nos ajuda a escrever palavras dentro de arrays de char.

    // printf("%s", letras);
    //letras[8] = '/0'; indica para a linguagem que a string acabou

    int acertou = 0;
    int enforcou = 0;

    do {
        // comecar o nosso jogo!!

    } while(!acertou && !enforcou);
}