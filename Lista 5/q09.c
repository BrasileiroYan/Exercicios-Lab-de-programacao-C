#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void bubbleSort(int *vetor);

int main(void) {
    
    srand(time(NULL));

    int vetor[TAM];

    for(int i=0; i<TAM; i++){
        vetor[i] = rand() % 100;
    }

    printf("Vetor antes da ordenação:\n");
    for(int i=0; i<TAM; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    bubbleSort(vetor);

    printf("Vetor depois da ordenação:\n");
    for(int i=0; i<TAM; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int *vetor){
    for(int i=0; i<TAM - 1; i++){
        for(int j=0; j<TAM - i - 1; j++){
            if(*(vetor + j) > *(vetor + j + 1)){
                int temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}