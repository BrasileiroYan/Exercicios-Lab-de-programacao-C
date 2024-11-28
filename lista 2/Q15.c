#include <stdio.h>
#include <math.h>

int main(){

    double base = 3;
    double resultado;

    for(double i=0; i<8; i++){
        resultado = pow(base, i);
        printf("3^%.0lf = %.0lf\n", i, resultado);
    }
    return 0;
}
