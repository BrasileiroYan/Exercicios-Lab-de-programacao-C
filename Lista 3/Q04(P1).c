#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){   // comparação com função strcmp()
    
    char str1[TAM];
    char str2[TAM];

    printf("Digite a string 1: ");
    fgets(str1, TAM, stdin);

    printf("Digite a string 2: ");
    fgets(str2, TAM, stdin);

    int resultado = strcmp(str1, str2); 

    if(resultado == 0){
        printf("As strings são iguais!\n");
    }else{
        printf("As strings são diferentes!\n");
    }
    return 0;
}
