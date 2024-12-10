#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){   //concatenação sem função strcat()

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
    
    if(tam1 + tam2 < TAM){
        int i = 0;
        while(str1[i] != '\0'){
            i++;
        }

        int j = 0;
        while(str2[j] != '\0'){
            str1[i] = str2[j];
            i++;
            j++;
        }

        str1[i] = '\0';
        
    }else{
        printf("Error!  A junção das strings extrapola o limite de espaço.\n");
        return 1;
    }

    printf("As duas strings juntas: %s\n", str1);

    return 0;
}
