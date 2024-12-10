#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
    char str[TAM];
    char caractere;
    int encontrado = 0;

    printf("Digite a String: ");
    fgets(str, TAM, stdin);

    int tam = strlen(str);
    if(str[tam-1] == '\n'){
        str[tam-1] = '\0';
    }

    printf("Digite o caractere a ser encontrado: ");
    scanf("%c", &caractere);

    for(int i=0; i < tam; i++){
        if(str[i] == caractere){
            encontrado = 1;
            break;
        }
    }

    if(encontrado){
        printf("O caractere %c está presente na string!", caractere);
    }else{
        printf("O caractere %c NÃO está presente na string!", caractere);
    }
    
    return 0;
}
