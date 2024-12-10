#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM1 5
#define TAM2 5

int main(){
    srand(time(NULL));

    int mat[TAM1][TAM2];

    for(int i=0; i<TAM1; i++){
        for(int j=0; j<TAM2; j++){
            mat[i][j] = rand() % 21;
        }
    }
    printf("\nMATRIZ:\n");
    for(int i=0; i<TAM1; i++){
        for(int j=0; j<TAM2; j++){
            printf("{%d}", mat[i][j]);
        }
        printf("\n");
    }
    int num;
    int cont = 0;

    printf("Digite o número que deseja contar na matriz: ");
    scanf("%d", &num);
    
    for(int i=0; i<TAM1; i++){
        for(int j=0; j<TAM2; j++){
            if(mat[i][j] == num){
                cont++;
            }
        }
    }

    printf("O número %d aparece %d vezes na matriz gerada!", num, cont);

    return 0;
}
