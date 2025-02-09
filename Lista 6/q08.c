#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 20
#define MAX_NUM 10

typedef double (*ErroFunc)(int *, int *, int);

double calcularMSE(int *a, int *b, int tam);
double calcularMAE(int *a, int *b, int tam);
double calcularErro(int *a, int *b, int tam, ErroFunc funcCalc);

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

    double mse = calcularErro(vetorA, vetorB, TAM, calcularMSE);
    double mae = calcularErro(vetorA, vetorB, TAM, calcularMAE);

    printf("Erro médio quadrático [MSE]: %.2f\n", mse);
    printf("Erro absoluto médio [MAE]: %.2f\n", mae);
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

double calcularMAE(int *a, int *b, int tam){
    double somaErro = 0.0;

    for(int i=0; i<tam; i++){
        somaErro += fabs(a[i] - b[i]);
    }

    return somaErro / tam;
}

double calcularErro(int *a, int *b, int tam, ErroFunc funcCalc){
    return funcCalc(a, b, tam);
}