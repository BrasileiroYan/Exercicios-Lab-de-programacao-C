#include <stdio.h>
int main(){
    int decimal;
    printf("Digite um número: ");
    scanf("%d", &decimal);

    printf("Número em Hexadecimal: %X\n", decimal);
    printf("Número em Octadecimal: %o\n", decimal);
    return 0;
}