#include <stdio.h>

int main(){

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    int y = x*x;
    printf("O quadrado de %d é %d", x, y);
    return 0;
}