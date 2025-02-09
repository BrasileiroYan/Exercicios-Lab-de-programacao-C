#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 7

int main(void){
    srand(time(NULL));

    int matriz[TAM][TAM];
    int somaD = 0;
    
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            matriz[i][j] = rand() % (TAM + 1);       
        }
    }
    
    printf("Matriz:\n");
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<TAM; i++){
        somaD += matriz[i][i];
    }

    if(somaD % 2 == 0){
        printf("\nSoma da digonal (%d): PAR\n", somaD);
    }else{
        printf("\nSoma da digonal (%d): IMPAR\n", somaD);
    }
    return 0;
}
