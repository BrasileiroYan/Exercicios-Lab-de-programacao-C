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
    }

    int r = rand() % 10 + 1;
    
    for(int i=0; i<TAM; i++){
        if (0 < r && r <= 3) {
            vetorY[i] = vetorX[i]; 
        } else if (3 < r && r <= 5) {
            vetorY[i] = (vetorX[i] > 0) ? vetorX[i] - 1 : 0; 
        } else if (5 < r && r <= 7) {
            vetorY[i] = (vetorX[i] < TAM - 1) ? vetorX[i] + 1 : TAM - 1; 
        } else if (8 < r && r <= 9) {
            vetorY[i] = (vetorX[i] > 1) ? vetorX[i] - 2 : 0; 
        } else {
            vetorY[i] = (vetorX[i] < TAM - 2) ? vetorX[i] + 2 : TAM - 1; 
        }
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
