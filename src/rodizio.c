#include <stdio.h>

int main(){
    int placa;

    printf("Digite o número final da placa do seu veículo e tecle Enter: \n");
    scanf("%d", &placa);

    if (placa == 1 || placa == 2)
    {
        printf("Este veiculo não pode circular na Segunda-Feira");
    }
    else if (placa == 3 || placa == 4)
    {
        printf("Este veiculo não pode circular na Terça-Feira");
    }
    else if (placa == 5 || placa == 6)
    {
        printf("Este veículo não pode circular na Quarta-Feira");
    }
    else if (placa == 7 || placa == 8)
    {
        printf("Este veícuilo não pode circular na Quinta-feira");
    }
    else if (placa == 9 || placa == 0)
    {
        printf("Este veiculo não pode circular na Sexta-Feira");
    }
    else {("Número de placa invalido!");    
    }

    printf("\n");
    return 0;
}