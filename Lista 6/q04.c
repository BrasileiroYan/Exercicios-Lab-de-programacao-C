#include <stdio.h>
#define TAM 5

void normalizarVetor(int *vetor);

int main(void){
    
    int vetor[TAM] = {2, 18, 44, 7, 80};
    
    normalizarVetor(vetor);

    return 0;
}

void normalizarVetor(int *vetor){
    int menorNum = vetor[0];
    int maiorNum = vetor[0];
    float vetorNormalizado[TAM];

    for(int i=1; i<TAM; i++){
        if(*(vetor + i) < menorNum){
            menorNum = *(vetor + i);
        }
        if(*(vetor + i) > maiorNum){
            maiorNum = *(vetor + i);
        } 
    }

    for(int i=0; i<TAM; i++){
        *(vetorNormalizado + i) = (float) ((*(vetor + i)) - menorNum) / (maiorNum - menorNum);
    }

    printf("Vetor Normalizado:\n");
    for(int i=0; i<TAM; i++){
        printf("%.1f\n", *(vetorNormalizado + i));
    }

}