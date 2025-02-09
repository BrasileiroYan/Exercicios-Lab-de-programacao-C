#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 100

void removeBuffer(char *pStr);
void encontrarCaractere(char *pStr, char caractere);

int main(){

    char str[TAM];
    char caractere;

    printf("Digite a String: ");
    fgets(str, sizeof(str), stdin);

    char *pStr = str;

    removeBuffer(str);

    printf("Digite o caractere procurado: ");
    caractere = getchar();

    caractere = tolower(caractere);

    pStr = str;

    encontrarCaractere(pStr, caractere);
        
    return 0;
}

void removeBuffer(char *pStr){
    while(*pStr != '\0'){
        if(*pStr == '\n'){
            *pStr = '\0';
        }
        pStr++;
    }
}

void encontrarCaractere(char *pStr, char caractere){
    while(*pStr != '\0'){
        if(tolower(*pStr) == caractere){
            printf("O caractere [%c] foi encontrado.\n", *pStr);
            printf("Endereco do Caractere: %p\n", pStr);
            exit(1);
        }
        pStr++;
    }

    printf("Nao foi encontrado o caractere fornecido!");

}
