#include <stdio.h>

int main(){

    int num1, num2;
    float div;
    printf("Digite o 1º número: ");
    scanf("%d", &num1);

    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    while(num2==0){
        printf("Digite o 2º número: ");
        scanf("%d", &num2);
    }

    div = (float) num1 / num2;

    printf("\n%d / %d = %.2f", num1,num2,div);

    return 0;
}
