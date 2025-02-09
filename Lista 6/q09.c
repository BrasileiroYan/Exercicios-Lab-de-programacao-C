#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));

    if(argc != 3){
        printf("\n\tFormato: <%s> <DIM L><DIM C>\n\n", argv[0]);
        exit(1);
    }

    // Declara as matrizes e sua dimensão, já alocando memória
    int lin = atoi(argv[1]), col = atoi(argv[2]);
    int **matriz = (int **)malloc(lin * sizeof(int *));
    int **matrizBinarizada = (int **)malloc(lin * sizeof(int *));
    
    if(!(matriz) || !(matrizBinarizada)){
        printf("Erro: Falha na alocação de memória.\n");
        exit(2);
    }
    
    for(int i=0; i<lin; i++){
        matriz[i] = (int *)malloc(col * sizeof(int));
        matrizBinarizada[i] = (int *)malloc(col * sizeof(int));
    }
    
    // Preenche a Matriz
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            matriz[i][j] = rand () % 256;
        }
    }

    int limiarT = 128;
    
    // Binariza a matriz
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            if(matriz[i][j] > limiarT){
                matrizBinarizada[i][j] = 1;
            }else{
                matrizBinarizada[i][j] = 0;
            }
        }
    }
    
    printf("Matriz:\n");
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Matriz Binarizada:\n");
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            printf("%d ", matrizBinarizada[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<lin; i++){
        free(matriz[i]);
        free(matrizBinarizada[i]);
    }

    free(matriz);
    free(matrizBinarizada);

    printf("\n");
    return 0;
}
