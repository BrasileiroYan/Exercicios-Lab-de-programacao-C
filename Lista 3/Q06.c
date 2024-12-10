#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
    char str[TAM];

    printf("Digite a String: ");
    fgets(str, TAM, stdin);

    int tam = strlen(str);
    if(str[tam-1] == '\n'){
        str[tam-1] = '\0';
        tam--;
    }

    int i = 0;
    int j = tam-1;

    while(i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("String invertida: %s\n", str);
    
    return 0;
}
