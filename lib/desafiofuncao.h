#include <stdio.h>

int maiorNumero(int x, int y){
    int m;
    if (x > y){
        m = x;
    }
    else{
        m = y;
    }
    return m;
}



char sexo(char letra){

    if (letra == 'M' || letra == 'm')
    {
        printf("Masculino\n");

    }
    else if (letra == 'F' || letra == 'f'){
        printf("Feminino\n");
    }
    else{
        printf("Sexo invalido\n");
    }
}



void vogal(char letra){
    if (letra == 'a' || letra == 'A')
    {
        printf("A é uma vogal\n");
    }
    else if (letra == 'e' || letra == 'E'){
        printf("E é vogal\n");
    }
    else if (letra == 'i' || letra == 'I'){
        printf("I é vogal\n");
    }
     else if (letra == 'o' || letra == 'O'){
        printf("O é vogal\n");
    }
     else if (letra == 'u' || letra == 'U'){
        printf("U é vogal\n");
    }
    else{
        printf("%c é consoante\n", letra);
    }
    
}

void reajuste(float salario){

    float valor_aumento;
    float novo_salario;

    if(salario <= 280){
        valor_aumento = salario * 20.0 / 100;
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %.2f e foi reajustado em 20%. O valor de aumento é %.2f e novo salário é %.2f\n", salario, valor_aumento, novo_salario);
    }
    else if(salario <=700){
        valor_aumento = salario * 15.0 / 100;
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %.2f e foi reajustado em 15%. O valor de aumento é %.2f e novo salário é %.2f\n", salario, valor_aumento, novo_salario);
    }
    else if(salario <= 1500){
        valor_aumento = salario * 10.0 / 100;
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %.2f e foi reajustado em 10%. O valor de aumento é %.2f e novo salário é %.2f\n", salario, valor_aumento, novo_salario);
    }
    else{
        valor_aumento = salario * 5.0 / 100;
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %.2f e foi reajustado em 5%. O valor de aumento é %.2f e novo salário é %.2f\n", salario, valor_aumento, novo_salario);
    }
}
