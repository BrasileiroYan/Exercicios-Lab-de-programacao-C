#include <stdio.h>
int main(){
    float altura;
    printf("Digite sua altura, em M: ");
    scanf("%f", &altura); 
    char sexo;
    printf("Digite o seu sexo [M|F]: ");
    getchar();
    scanf("%c", &sexo);
    if (sexo == 'M'){
        float peso = (72.7*altura) - 58;
        printf("Seu peso ideal: %.2fkg", peso);

    }
    else if (sexo == 'F'){
        float peso = (62.1*altura) - 44.7;
        printf("Seu peso ideal: %.2fkg", peso);
    }
    else{
        printf("Entrada de sexo inválida!");
    }
    return 0;
}