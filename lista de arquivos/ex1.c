// exercicio 1 
// programa que cria o arquivo dados.txt, 1-100, 1 numero por linha

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file;
    file = fopen("dados.txt", "w");

    if (file == NULL){
        printf("arquivo inexistente");
        exit(0);
    }

    int x;
    for (x=0; x < 101; x++){
        fprintf(file,"%d \n", x);
    }

     fclose(file);

    return 0;
}
