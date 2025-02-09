#include <stdio.h>
#define TAM 100
int main(){

    char original[TAM], copia[TAM];

    printf("Digite a String de origem: ");
    fgets(original, sizeof(original), stdin);

    int cont = 0;
    while(original[cont] != '\0'){
        if(original[cont] == '\n'){
            original[cont] = '\0';
            break;
        }
        cont++;
    }

    const char *ptrOriginal = original;
    char *ptrCopia = copia;

    while(*ptrOriginal != '\0'){
        *ptrCopia = *ptrOriginal;
        ptrOriginal++;
        ptrCopia++;
    }

    *ptrCopia = '\0';

    printf("String original: %s\n", original);
    printf("String copia: %s\n", copia);

    return 0;
}
