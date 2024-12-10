#include <stdio.h>
int main(){
    
    int a = 1, b = 1;
    int num;
    printf("%d\n", a);
    printf("%d\n", b);
    for(int i=3; i <= 20; i++){
        num = a+b;
        a = b;
        b = num;
        printf("%d\n", num);
    }
    return 0;
}
