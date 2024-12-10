#include <stdio.h>

int main(){

    int num1 = 10, num2 = 10;

    puts("\n=+=+=+ Pré-Decremento +=+=+=\n");
    printf("Número original: %d\n", num1);
    printf("Valor retornado [--x]: %d\n", --num1);
    printf("Após o pré-decremento: %d\n", num1);

    puts("\n=+=+=+ Pós-Decremento +=+=+=\n");
    printf("Número original: %d\n", num2);
    printf("Valor retornado [x--]: %d\n", num2--);
    printf("Após o pós-decremento: %d", num2);
    return 0;
}
