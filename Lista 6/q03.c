#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void armazenarEndereco(int *menor, int *maior);

int main(int argc, char *argv[]){
    srand(time(NULL));

    if(argc !=2){
        printf("\n\t Formato: <%s> <Qntd de Elementos>\n", argv[0]);
        exit(1);
    }
    
    int tam = atoi(argv[1]); 
    int vetorNum[tam];

    for (int i = 0; i < tam; i++) {
        *(vetorNum + i) = rand() % 100 + 1;
    }

    int menorNum = vetorNum[0];
    int maiorNum = vetorNum[0];

    printf("Vetor gerado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", *(vetorNum + i));
    }

    for(int i=1; i<tam; i++){
        if(*(vetorNum + i) < menorNum){
            menorNum = *(vetorNum + i);
        }
        if(*(vetorNum + i) > maiorNum){
            maiorNum = *(vetorNum + i);
        }
    }

    armazenarEndereco(&menorNum, &maiorNum);

    return 0;
}

void armazenarEndereco(int *menor, int *maior){
    printf("\nEndereco do Menor[%d]: %p", *menor, menor);
    printf("\nEndereco do Maior[%d]: %p", *maior, maior);
}
