#include <stdio.h>

int main() {
    int num;
    int maior, menor;
    int primeira_entrada = 1;

    while (1) {
        printf("Digite um número inteiro [negativo e par para sair]: ");
        scanf("%d", &num);

        if (num < 0 && num % 2 == 0) { 
            break;
        }

        if (primeira_entrada) {
            maior = menor = num; 
            primeira_entrada = 0;
        }

        if (num > maior) {
            maior = num; 
        }
        if (num < menor) {
            menor = num; 
        }
    }

    printf("Produto do maior pelo menor número: %d\n", maior * menor);
    return 0;
}
