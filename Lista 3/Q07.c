#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3

int main(){
    srand(time(NULL));

    int v[TAM];
    int soma = 0;
    int mult = 1;
    
    puts("VETOR:");
    for(int i=0; i<TAM; i++){
        v[i] = rand() % 20;
        printf("Número {%d}: %d\n", i, v[i]);
        soma += v[i];
        mult *= v[i];
    }

    float mediaArit = (float)soma / TAM;
    double mediaGeom = pow(mult, (1.0/TAM));

    printf("\nMédia Aritmética: %.2f\nMédia Geométrica: %.2f\n", mediaArit, mediaGeom);
    return 0;
}
