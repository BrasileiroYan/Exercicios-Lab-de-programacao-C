#include <stdio.h>
int main(){
    int x;
    printf("Digite um número: ");
    scanf("%d",&x);

    int triplo = x*3;
    printf("Triplo: %d\n", triplo);
    int quadrado = x*x;
    printf("Quadrado: %d\n", quadrado);
    float meio = x/2;
    printf("Meio: %.2f\n", meio);
    return 0;
}