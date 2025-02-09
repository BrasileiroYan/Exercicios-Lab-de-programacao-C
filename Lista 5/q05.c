#include <stdio.h>
#include <stdlib.h>
#define TAM 1000

int main(){

    char *str = malloc(TAM * sizeof(char));
    int tamStr = 0;

    if(str == NULL){
        puts("Erro ao alocar memoria!");
        exit(1);
    }

    printf("Digite a String: ");
    fgets(str, TAM, stdin);

    while(str[tamStr] != '\0'){
        tamStr++;
    }

    if(str[tamStr-1] == '\n'){
        tamStr--;
    }

    printf("Tamanho da string: %d\n", tamStr);

    return 0;
}