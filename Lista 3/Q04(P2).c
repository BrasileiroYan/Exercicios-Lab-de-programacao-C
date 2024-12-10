#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){   //comparação sem função strcmp()
    
    char str1[TAM];
    char str2[TAM];

    printf("Digite a string 1: ");
    fgets(str1, TAM, stdin);

    int tam1 = strlen(str1);
    if(str1[tam1-1] == '\n'){
        str1[tam1-1] = '\0';
    }

    printf("Digite a string 2: ");
    fgets(str2, TAM, stdin);

    int tam2 = strlen(str2);
    if(str2[tam2-1] == '\n'){
        str2[tam2-1] = '\0';
    }

    int iguais = 1;

    if(tam1 != tam2){
        iguais = 0;
    }else{
        for(int i=0; i<tam1; i++){
            if(str1[i] != str2[i]){
                iguais = 0;
                break;
            }
        }
    }
    if(iguais){
        printf("As strings são iguais!\n");
    }else{
        printf("As strings são diferentes!\n");
    }
    
    return 0;
}
