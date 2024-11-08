#include <stdio.h>
#include "../lib/desafiofuncao.h"

int main (){
    char letra;
   
    printf("Digite M se seu sexo for masculino, ou digite F se seu sexo for feminino:\n");
    scanf("%c", &letra);

    sexo(letra);

    return 0;
}