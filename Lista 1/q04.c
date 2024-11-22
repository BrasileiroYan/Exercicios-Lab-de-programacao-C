#include <stdio.h>
int main(){
    float conta;
    printf("Valor da Conta: ");
    scanf("%f", &conta);

    float total = conta + (conta*0.1);
    printf("Valor total: %.2f", total); 
    return 0;
}