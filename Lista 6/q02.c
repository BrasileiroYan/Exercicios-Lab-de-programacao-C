#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    printf("Vetor gerado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", *(vetorNum + i));
    }

    for(int i=1; i<tam; i++){
        if(*(vetorNum + i) < menorNum){
            menorNum = *(vetorNum + i);
        }
    }

    printf("\nMenor Numero: %d\nEndereco de %d: %p\n", menorNum, menorNum, vetorNum);
    return 0;
}
