#include <stdio.h>

int main(){

    int tempc = 0;
    float tempf = 0;
    for( int i = 10; i < 101; i+=10){
        tempc += 10;
        tempf = (1.8*tempc) + 32; 
        printf("%d C = %.1f F\n", tempc, tempf);
    }
    return 0;
}
