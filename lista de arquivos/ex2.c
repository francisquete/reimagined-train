// exercicio 2
// ler o arquivo dados.txt (gerado na execução do exercicio 1 dessa lista)

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
