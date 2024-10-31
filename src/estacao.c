#include <stdio.h>

int main() {
    int mes;
    printf("Digite o número do Mẽs que você deseja: \n");
    scanf("%d", &mes);

    if (mes == 12 || mes == 1 || mes == 2)
    {
        printf("Este mês é verão \n");
    }
    else if (mes == 3 || mes == 4 || mes == 5)
    {
        printf("Este mês é outono \n");
    }
    else if (mes == 6 || mes == 7 || mes == 8)
    {
        printf("Este mês é Inverno \n");
    }
    else if (mes == 9 || mes == 10 || mes == 11)
    {
        printf("Este mês é primavera \n");
    }
    else {
        printf("Mês inexistente \n");
    }
    

    return 0;
}