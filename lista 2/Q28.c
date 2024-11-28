#include <stdio.h>

int main() {
    unsigned char X, Y;
    unsigned char mascara = 0x0F; 
    
    printf("Digite o valor de X (unsigned char): ");
    scanf("%hhu", &X);  

    do {
        printf("Digite o valor de Y (unsigned char, maior que 5): ");
        scanf("%hhu", &Y);  
    } while (Y < 5);

    Y &= ~mascara;         
    Y |= (X & mascara);    

    printf("Novo valor de Y: %hhu (em binário: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (Y >> i) & 1); 
    }
    printf(")\n");

    return 0;
}
