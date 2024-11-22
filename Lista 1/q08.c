#include <stdio.h>

int main(){

    int x, ant, suc;
    printf("Digite um número: ");
    scanf("%d", &x);
    ant = x - 1;
    suc = x + 1;
    printf("Antecessor de %d: %d\nSucessor de %d: %d\n", x, ant, x, suc);
    return 0;
}