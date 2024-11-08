#include <stdio.h>
#include "../lib/desafiofuncao.h"

int main (){
    char letra;

    printf("Digite uma vogal e tecle Enter: \n");
    scanf("%c", &letra);

    vogal(letra);

    return 0;
}