#include <stdio.h>

int main(){

    int num3 = 0, num5 = 0;

    for(int i=0; i < 101; i++){
        if(i % 3 == 0){
            num3 += i;
        }
        if(i % 5 == 0){
            num5 += i;
        }
    }
    printf("O somatório dos números divisíveis por 3 no intervalo [0, 100]: %d\n", num3);
    printf("O somatório dos números divisíveis por 5 no intervalo [0, 100]: %d\n", num5);
    return 0;
}
