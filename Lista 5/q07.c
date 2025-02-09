#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main(){

    char str1[TAM], str2[TAM];

    printf("Digite a string 1: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a string 2: ");
    fgets(str2, sizeof(str2), stdin);

    char *pStr1 = str1;
    char *pStr2 = str2;

    int tamStr1 = 0;
    while(*pStr1 != '\0'){
        tamStr1++;
        pStr1++;
    }

    int tamStr2 = 0;
    while(*pStr2 != '\0'){
        tamStr2++;
        pStr2++;
    }

    int tamStrConc = tamStr1 + tamStr2 + 1;

    char *strConc = malloc(tamStrConc * sizeof(char));

    if(strConc == NULL){
        puts("Erro ao alocar memoria!\n");
        exit(1);
    }

    char *pStrConc = strConc;

    pStr1 = str1;
    while(*pStr1 != '\0' && *pStr1 != '\n'){
        *pStrConc = *pStr1;
        pStr1++;
        pStrConc++;
    }

    pStr2 = str2;
    while(*pStr2 != '\0' && *pStr2 != '\n'){
        *pStrConc = *pStr2;
        pStr2++;
        pStrConc++;
    }

    *pStrConc = '\0';

    printf("String concatenada: %s\n", strConc);

    free(strConc);

    return 0;
}
