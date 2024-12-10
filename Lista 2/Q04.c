#include <stdio.h>
int main(){

    int jose = 150, pedro = 110, cont = 0;

    while(jose > pedro){
        jose += 2;
        pedro += 3;
        cont ++;        
    }
    printf("Tamanho de José: %dcm\n Tamanho de Pedro %dcm\n", jose, pedro);
    printf("Anos para Pedro ultrapassar José: %d", cont);
    return 0;
}
