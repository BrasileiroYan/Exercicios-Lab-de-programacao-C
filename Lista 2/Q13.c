#include <stdio.h>

int main(){

    int A, B, soma=0;

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
        if(i % 2 == 0){
        soma += i;
        }
    }

    printf("O somatório dos números pares da faixa [%d - %d] é: %d\n", A, B, soma);
    return 0;
}
