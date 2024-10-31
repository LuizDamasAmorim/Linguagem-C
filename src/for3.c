#include <stdio.h>

int main() {
    int ano;
    int contagem = 0;
    for (ano = 1930; ano <= 2024; ano++)
    {
        if (ano % 4 == 0)
        {
            printf("O ano %d é bissexto \n", ano);
            contagem ++;
        } 
    }
    printf("\n------------------------------\n");
    printf("O total de anos bissexto é %d \n" ,contagem);
    return 0;
}