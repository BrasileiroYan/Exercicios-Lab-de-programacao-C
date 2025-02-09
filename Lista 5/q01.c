#include <stdio.h>

int main(){

    int n1, n2, soma;
    int *p1, *p2, *pSoma;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);
    
    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    p1 = &n1;
    p2 = &n2;
    pSoma = &soma;

    *pSoma = *p1 + *p2;

    printf("Soma: %d\n", *pSoma); 
    printf("Endereco: %p\n", pSoma);
    
    return 0;
}
