#include <stdio.h>

int main(){

    int num, numOriginal, cont = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    numOriginal = num;

    if(num < 0){
        num = -num;
    }
    while(num > 0){
        int digito = num % 10;
        
        if(digito == 7){
            cont++;
        }
        num /= 10;
    }

    printf("A quantidade de números 7 em %d é: %d\n", numOriginal, cont);
    return 0;
}
