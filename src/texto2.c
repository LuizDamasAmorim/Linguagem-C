#include <stdio.h>

int main() {

    char nome[20];
    printf("Digite seu nome e tecle Enter: \n");
    //Foi necessário utilizar o colchetes para que o comando scanf receba toda a cadeia de caracteres. 
    //O elemento ^ (Circunflexo) foi usado para indicar onde começa o primeiro caracter. 
    //E comando \n, neste caso, esta sendo usado para ler o espaço aplicado. 
    //Ao final é utilizado o caracter s (string).
    scanf("%[^\n]s",&nome);

    printf("Ola, %s. Seja bem-vindo\n", nome);

    return 0;
}