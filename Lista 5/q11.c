#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 7

int main(void){
    srand(time(NULL));

    int vetorX[TAM];
    int vetorY[TAM];

    for(int i=0; i<TAM; i++){
        vetorX[i] = rand() % TAM;
        vetorY[i] = rand() % TAM;
    }
    
    printf("Vetor X: ");
    for(int i=0; i<TAM; i++){
        printf("%d ", vetorX[i]);
    }

    printf("\n");

    printf("Vetor Y: ");
    for(int i=0; i<TAM; i++){
        printf("%d ", vetorY[i]);
    }

    printf("\n");

    int matrizM[TAM][TAM] = {0};

    for(int i=0; i<TAM; i++){
        matrizM[vetorX[i]][vetorY[i]]++;
    }
    
    printf("Matriz M: ");
    printf("\n");
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("%d ", matrizM[i][j]);
        }
        printf("\n");
    }

    return 0;
}
