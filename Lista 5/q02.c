#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){

    int n1, n2;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);
    
    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    puts("\n\tAntes da Troca\n");
    printf("Numero 1: %d\nNumero 2: %d\n", n1, n2);

    trocar(&n1, &n2);

    puts("\n\tDepois da Troca\n");
    printf("Numero 1: %d\nNumero 2: %d\n", n1, n2);
    
    return 0;
}
