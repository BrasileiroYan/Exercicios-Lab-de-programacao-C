#include <stdio.h>

int main() {
    int termos;
    printf("Digite a quantidade de termos para calcular pi: ");
    scanf("%d", &termos);

    double soma = 0.0;
    double pi;
    
    printf("Termos     Aproximacao de pi\n");
    printf("-----------------------------------\n");

    for (int i = 0; i < termos; i++) {
        double termo = ((i % 2 == 0) ? 1.0 : -1.0) / (2 * i + 1);
        soma += termo;
        pi = 4 * soma;
        printf("%-10d %-20.15f\n", i + 1, pi);
    }

    return 0;
}
