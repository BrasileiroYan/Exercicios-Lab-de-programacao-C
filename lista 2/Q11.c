#include <stdio.h>

int main(){

    int A, B;

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
    int num = A;
    do{
        if(num % 4 == 0){
            printf("%d ao quadrado = %d\n", num, (num*num));
        }
        num++;
    }while(num >= A && num <= B);
    return 0;
}
