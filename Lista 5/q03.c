#include <stdio.h>

void verificarMenorNum(int *menor, int num, int primeiroNum);

int main(){

    int num, menor;
    int primeiroNum = 1;

    while(1){

        printf("Digite um numero (negativo para fechar o programa): ");
        scanf("%d", &num);

        if(num<0){
            puts("Programa Finalizado!\n");
            break;
        }

        verificarMenorNum(&menor, num, primeiroNum);

        primeiroNum = 0;

        printf("O menor numero ate agora: %d\n", menor);
    }

    return 0;
}

void verificarMenorNum(int *menor, int num, int primeiroNum){
    
    if(primeiroNum){
        *menor = num;
    }else if(num < *menor){
        *menor = num;
    }

}
