#include <stdio.h>

int main(){

    int num;
    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);

    if((num >= 10000 && num <= 99999) || (num <= -10000 && num >= -99999)){
       
        if(num < 0){
            num = -num;
        }
        
        int dezmil = num / 10000;
        int mil = (num / 1000) % 10;
        int dez = (num % 100) / 10;
        int uni = num % 10;
        if(dezmil == uni && mil == dez){
            printf("O número %d é palíndromo!\n", num);
        }else{
            printf("O número %d não é palíndromo!\n", num);
        }
    }else{
        printf("O número digitado não possui cinco dígitos!\n");
    }
    return 0;
}
