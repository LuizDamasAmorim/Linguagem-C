#include <stdio.h>

int main() {
    int num1;
    int num2;
    int somar;                 //Váriaveis que eu vou usar
    int subtrair;               
    int multiplicar; 
    int dividir;
    int resto;

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1); //O "scanf" serve para armazenar o que o usuairo digitou, o "%d" significa número decimal (10,20,30,500,10.000 etc.)
    printf ("Digite outro número: \n");
    scanf("%d" , &num2);

    somar = num1 + num2;
    subtrair = num1 - num2;
    multiplicar = num1 * num2;
    dividir = num1 / num2;
    resto = num1 % num2;

    printf("A soma entre %d e %d é igual a %d \n",num1,num2,somar);

    printf("A multiplicação entre %d e %d é igual a %d \n",num1,num2,multiplicar);

    printf("A divisão entre %d e %d é igual a %d \n",num1,num2,dividir);

    printf("o resto entre %d e %d é igual a %d \n",num1,num2,resto);

    return 0;
}


