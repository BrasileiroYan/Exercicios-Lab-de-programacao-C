#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

int main(){

    srand(time(NULL));

    float lista[TAM];
    float menor, maior, soma;

    for(int i=0; i <TAM; i++){
        lista[i] = ((float)rand() / RAND_MAX) * 10;
        printf("Vetor %d: %.2f\n", i, lista[i]);
    }

    menor = maior = lista[0];

    for(int i=0; i <TAM; i++){
        if(lista[i] > maior){
            maior = lista[i];
        }else if(lista[i] < menor){
            menor = lista[i];
        }
    }

    soma = menor + maior;
    printf("\nMenor: %.2f\nMaior: %.2f\nSoma: %.2f\n", menor, maior, soma);

    return 0;
}
