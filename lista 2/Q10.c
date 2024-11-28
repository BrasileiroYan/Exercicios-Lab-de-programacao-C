#include <stdio.h>

int main(){
    
    int num = 15;
    do{
        if(num % 4 == 0){
            printf("%d ao quadrado = %d\n", num, (num*num));
        }
        num++;
    }while(num >= 15 && num <= 90);
    return 0;
}
