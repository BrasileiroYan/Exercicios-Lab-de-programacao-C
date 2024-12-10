#include <stdio.h>

int main(){

    int A, B, cont=0;

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
        if(i % 3 == 0){
        cont++;
        }
    }

    printf("A quantidade de números divisíveis por 3 na faixa [%d - %d] é: %d\n", A, B, cont);
    return 0;
}
