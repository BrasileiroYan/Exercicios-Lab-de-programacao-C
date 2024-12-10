#include <stdio.h>
#include <math.h>

int main(){
    
    int prestacao;
    float valor, entrada;

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor);

    if(fmod(valor, 3) == 0){

        entrada = valor / 3;
        printf("A entrada e as duas prestações são iguais a R$%.2f", entrada);

    }else{
        prestacao = (int)(valor / 3);
        entrada = valor - (2*prestacao);
        printf("Entrada: R$%.2f", entrada);
        printf("\nPrestações: 2x de R$%d",prestacao);
    }

    return 0;
}
