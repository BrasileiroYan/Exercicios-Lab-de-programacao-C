#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMF 7
#define TAMX 20
int main(void){

    srand(time(NULL));

    int vetorX[TAMX];

    for(int i=0; i<TAMX; i++){
        vetorX[i] = rand() % TAMF;
    }
    
    printf("Vetor X: ");
    for(int i=0; i<TAMX; i++){
        printf("%d ", vetorX[i]);
    }
    printf("\n");

    int vetorF[TAMF] = {0};

    for(int i=0; i<TAMX; i++){
        vetorF[vetorX[i]]++;
    }

    printf("Vetor F: ");
    for(int i=0; i<TAMF; i++){
        printf("%d ", vetorF[i]);
    }

    return 0;
}
