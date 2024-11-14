#include <stdio.h>

void cadastro(char *nome, char *email, int *idade){
    FILE*arquivo;

    arquivo = fopen("files/ptr_cad_cli.txt","a");
    fprintf(arquivo, "Nome: %s\n", nome);
    fprintf(arquivo, "Email: %s\n", email);
    fprintf(arquivo, "Idade: %d\n", *idade);
    fclose(arquivo);
}

int main(){
    char nome[30];
    char email[50];
    int idade;

    printf("Digite seu nome e tecle Enter:\n");
    scanf("%s", nome);

    printf("Digite seu e-mail e tecle Enter:\n");
    scanf("%s", email);

    printf("Digite sua idade e tecle Enter:\n");
    scanf("%d", &idade);

    cadastro(nome,email, &idade);
    printf("Cadastrou?\n");

    return 0;
}         