#include <stdio.h>

int main() {
    printf("Decimal    Binário        Octal    Hexadecimal\n");
    printf("-------------------------------------------------\n");

    for (int i = 1; i <= 256; i++) {
        printf("%d\t   ", i);
        for (int j = 7; j >= 0; j--) {
            printf("%d", (i >> j) & 1);
        }
        printf("\t   %o\t    %X\n", i, i);  
    }

    return 0;
}
