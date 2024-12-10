#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(){   //método da ordenação por seleção
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

    for(int i=0; i<TAM-1; i++){
        int min = i;
        for(int j=i+1; j<TAM; j++){
            if(v[j]<v[min]){
                min = j;
            }
        }
        int temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }

    puts("\nVETOR ORDENADO:");
    for (int i = 0; i < TAM; i++) {
        printf("Número {%d}: %d\n", i, v[i]);
    }
    
    return 0;
}
