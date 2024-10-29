#include <stdio.h>

int main() {
    int ano;

    printf("Digite o Ano que você deseja: \n");
    scanf("%d" ,&ano);

    if (ano % 4 == 0)
    {
        printf("Este Ano e Bissexto \n");
    }
    else {
        printf("Este Ano não é Bissexto \n");
    } 
    
    return 0;
}