#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define MAX_NUM 10

double calcularMedia(int *vetor, int tam);
int comparar(const void *a, const void *b);
double calcularMediana(int *vetor, int tam);
int calcularModa(int *vetor, int tam);

int main(void){
    
    srand(time(NULL));

    int vetor[TAM];

    printf("Vetor: ");
    for(int i=0; i<TAM; i++){
        vetor[i] = rand() % (MAX_NUM + 1);
        printf("%d ", vetor[i]);
    }
    printf("\n");

    double media = calcularMedia(vetor, TAM);
    double mediana = calcularMediana(vetor, TAM);
    int moda = calcularModa(vetor, TAM);
    
    printf("Média: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);

    return 0;
}

double calcularMedia(int *vetor, int tam){
    int soma = 0;
    for(int i=0; i<tam; i++){
        soma += *(vetor + i);
    }

    return (double)soma / tam;
}

int comparar(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

double calcularMediana(int *vetor, int tam){
    qsort(vetor, tam, sizeof(int), comparar);

    if(tam % 2 == 0){
        return (vetor[tam / 2 - 1] + vetor[tam / 2]) / 2.0;
    }else{
        return vetor[tam / 2];
    }
}

int calcularModa(int *vetor, int tam){
    int frequencia[MAX_NUM + 1] = {0};
    int moda = vetor[0], max_frequncia = 0;

    for(int i=0; i<tam; i++){
        frequencia[*(vetor + i)]++;
        if(frequencia[*(vetor + i)] > max_frequncia){
            max_frequncia = frequencia[*(vetor + i)];
            moda = *(vetor + i);
        }
    }

    return moda;
}
