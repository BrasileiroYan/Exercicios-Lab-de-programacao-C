#include <stdio.h>

int main(){

    int A, B, soma=0, cont=0;

    printf("Digite um número inicial: ");
    scanf("%d", &A);
    printf("Digite um número final: ");
    scanf("%d", &B);
    printf("A faixa é [%d - %d]\n", A, B);

    if(A>B){
        int temp = A;
        A = B;
        B = temp;
    }

    for(int i = A; i<=B; i++){
        soma += A;
        cont++;
    }

    if(cont > 0){
        float media = (float) soma / cont;
        printf("A média do intervalo [%d - %d] é: %.2f\n", A, B, media);
    }else{
        printf("O intervalo não contém números válidos.\n");
    }
    return 0;
}
