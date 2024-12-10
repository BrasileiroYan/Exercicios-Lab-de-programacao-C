#include <stdio.h>

int main(){

    int matriz[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite o num[%d][%d] da Matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMATRIZ:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("{%d}", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nOs números da diagonal principal são:\n");
    for(int i=0; i<3; i++){
        printf("{%d}", matriz[i][i]);
    }
    return 0;
}
