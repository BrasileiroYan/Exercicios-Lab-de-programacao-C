#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    
    if(argc !=2){
        printf("\n\t Formato: <%s> <TAM do Vetor>\n", argv[0]);
        exit(1);
    }

    int tam = atoi(argv[1]);
    float *vetor = malloc(sizeof(float) * tam);

    if(!(vetor)){
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    for(int i=0; i<tam; i++){
        *(vetor + i) = rand() % 100 + 1;
        printf("%.1f\n", *(vetor + i));
    }

    float soma = 0;

    for(int i=0; i<tam; i++){
        soma += *(vetor + i);
    }

    printf("Soma: %.1f\n", soma);

    free(vetor);
    return 0;
}
