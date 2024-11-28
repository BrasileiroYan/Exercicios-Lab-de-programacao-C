#include <stdio.h>

int main(){

    int num, menor, maior;
    
    printf("Digite um valor n (0 para encerrar): ");
    scanf("%d", &num);

    if(num == 0){
        puts("Programa encerrado!");
        return 0;
    }
  
    menor = num;
    maior = num;

    do{
      
    menor = (num < menor) ? num : menor;
    maior = (num > maior) ? num : maior;
    
    printf("Digite um valor n (0 para encerrar): ");
    scanf("%d", &num);
    
    }while(num != 0);

    printf("O menor número é: %d\nO maior número é: %d\n", menor, maior);
    
    return 0;
}
