#include <stdio.h>

int main(){

    for(int i=1; i<=10; i++){
        if(i % 2 != 0){
            long int fat = 1;

            for(int j=1; j<=i; j++){
                fat *= j;
            }

            printf("%d! = %ld\n", i, fat);
        }
    }

    return 0;
}
