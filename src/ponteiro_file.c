#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("files/texto.txt" ,"a");
    // w -> Write(escrever) 
    //r-> (Read)
    // a -> Append(adicionar)

    fprintf(arquivo, "Verme!\n");
    fclose(arquivo);

    printf("Criamos o arquivo\n");
    return 0;
}