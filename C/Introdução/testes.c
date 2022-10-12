#include <stdio.h>

int main(){
    int i;
	int soma = 0;
    for(i = 1; i <= 100; i++){
        soma = soma + i;
    }
	printf("A soma e %d", soma);
}