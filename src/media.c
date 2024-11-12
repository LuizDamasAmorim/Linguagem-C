#include <stdio.h>
#include "../lib/desafiofuncao.h"

int main (){
    float n1, n2, n3, n4, media, md;

    printf("Digite sua primeira nota\n");
    scanf("%f", &n1);

    printf("Digite sua segunda nota\n");
    scanf("%f", &n2);

    printf("Digite sua terceira nota\n");
    scanf("%f", &n3);

    printf("Digite sua quarta nota\n");
    scanf("%f", &n4);

    printf("Sua média é %f\n", notas(media));

    media = n1 + n2 + n3 + n4 / 4,0;

    return 0;

}
