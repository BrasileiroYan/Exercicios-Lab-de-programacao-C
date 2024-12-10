#include <stdio.h>

int main() {
    int limite = 500;


    for (int a = 1; a <= limite; a++) {            
        for (int b = a; b <= limite; b++) {        
            for (int c = b; c <= limite; c++) {    
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d) é uma Tripla de Pitágoras!\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
