#include <stdio.h>
#define TAM 100

int main(){
    char str[TAM];

    printf("Digite a String: ");
    fgets(str, TAM, stdin);

    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    
    printf("Tamanho da string: %d", i-1);

    return 0;
}
