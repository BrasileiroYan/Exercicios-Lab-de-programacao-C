#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(){   //método bubble sort
    srand(time(NULL));

    int v[TAM];
    int numI, numF;

    printf("Digite o número para início do intervalo: ");
    scanf("%d", &numI);

    printf("Digite o número para final do intervalo: ");
    scanf("%d", &numF);

    puts("VETOR:");
    for(int i=0; i<TAM; i++){
        v[i] = numI + rand() % (numF - numI +1);
        printf("Número {%d}: %d\n", i, v[i]);
    }

    for(int i=0; i<TAM; i++){
        int troca = 0;
        for(int j=0; j<TAM-i-1; j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                troca = 1;
            }
        }
        if(!troca){
            break;
        }
    }
    
    puts("\nVETOR ORDENADO:");
    for (int i = 0; i < TAM; i++) {
        printf("Número {%d}: %d\n", i, v[i]);
    }

    return 0;
}
