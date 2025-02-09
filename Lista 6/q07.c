#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define MAX_NUM 10

double calcularMSE(int *a, int *b, int tam);

int main(void){
    srand(time(NULL));

    int vetorA[TAM], vetorB[TAM];

    printf("Vetor A: ");
    for(int i=0; i<TAM; i++){
        vetorA[i] = rand() % MAX_NUM;
        printf("%d ", vetorA[i]);
    }
    printf("\n");

    printf("Vetor B: ");
    for(int i=0; i<TAM; i++){
        vetorB[i] = rand() % MAX_NUM;
        printf("%d ", vetorB[i]);
    }
    printf("\n");

    double mse = calcularMSE(vetorA, vetorB, TAM);

    printf("Erro médio quadrático[MSE]: %.2f\n", mse);

    return 0;
}

double calcularMSE(int *a, int *b, int tam){
    double somaErro = 0.0;

    for(int i=0; i<tam; i++){
        double erro = a[i] - b[i];
        somaErro += erro * erro;
    }

    return somaErro / tam;
}
