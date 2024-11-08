#include <stdio.h>
#include "../lib/desafiofuncao.h"

int main(){
    int x;
    int y;

    printf("Digite um número:\n");
    scanf("%d", &x);

    printf("Digite outro número:\n");
    scanf("%d",&y);

    printf("O maior número entre os dois é: %d\n",maiorNumero(x,y));

    return 0;
}