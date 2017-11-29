// exercicio 2 lista 6
// ler o arquivo dados.txt, exercicio 1 da lista

#include <stdio.h>
#include <stdlib.h>

int main (void){

    FILE *file;
    file = fopen("dados.txt","r");

    if (file == NULL){
        printf("arquivo inexistente");
        exit(0);
    }

    char num[100];

    while(fgets(num, 100, file) != NULL){
        printf("%s", num);
    }

    fclose(file);

    return 0;
}
