#include <stdio.h>

int main(){

    unsigned long long int somatotal = 0, numquadrado = 1;
    for(int i=1; i<=64; i++){
        somatotal += numquadrado;
        numquadrado *= 2;
    }
    printf("O somatório do número de grãos é: %llu", somatotal);
    return 0;
}
