#include <stdio.h>

int main(){

    //O tipo "float" é para trabalhar com casas decimais
    float n1,n2, soma, divisao;
    printf("Digite um número e tecle Enter:\n");
    scanf ("%f",&n1); //A %f serve para números decimais que são quebrados (7,6, 50,3, 70,5)
     
    printf("Digite outro número e tecle Enter: \n");
    scanf("%f",&n2);

    soma = n1 + n2;            //dando sentido as variáveis
    divisao= n1 / n2;

    printf("O resultado da soma é %.2f\n",soma);          //O (2) no %.2f indica quantos númerosa aparece depois do nuḿero inteiro
    printf("O resultado da divisão é %.2f\n",divisao);    //dizendo para mostrar as somas com o printf.
                                                        
    return 0; 
}