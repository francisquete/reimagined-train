// exercicio 3 da lista 6
// ler o arquivo linha por linha enumerando-as na tela

#include <stdio.h>
#include <stdlib.h>

int main (void){

    FILE *file;
    file = fopen("ex1.c", "r");

    if (file == NULL){
        printf("arquivo inexistente");
        exit(0);
    }

    char arquivo[100];
    int i;

    while (fgets(arquivo,100,file) != NULL){
        printf("%d %s", i, arquivo);
        i++;
    }

    fclose(file);
    return 0;
}
