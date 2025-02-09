#include <stdio.h>

typedef struct{
    float nota1;
    float nota2;
    float media;
}aluno;

int main(void){
    
    aluno yan;

    printf("Digite a 1 nota: ");
    scanf("%f", &yan.nota1);
    
    printf("Digite a 2 nota: ");
    scanf("%f", &yan.nota2);

    yan.media = (yan.nota1 + yan.nota2) / 2;

    printf("Media das notas: %.1f\n", yan.media);
    return 0;
}
