#include <stdio.h>
#define TAM 5

void imprimirVetorInt(int *pVetorInt, int tamanho);
void imprimirVetorChar(char *pVetorChar, int tamanho);
void imprimirVetorDoub(double *pVetorDoub, int tamanho);

int main(){
    
    puts("\n\tVetor de inteiro:\n");
    int vetorint[TAM];
    for(int i=0; i<TAM; i++){
        printf("Digite o %d numero inteiro: ", (i+1));
        scanf("%d", &vetorint[i]);
    }
    imprimirVetorInt(vetorint, TAM);

    puts("\n\tVetor de caractere:\n");
    char vetorchar[TAM];
    char tempch;
    getchar();
    for(int i=0; i<TAM; i++){
        printf("Digite o %d caractere: ", (i+1));
        tempch = getchar();
        vetorchar[i] = tempch;
        while(getchar() != '\n');
    }
    imprimirVetorChar(vetorchar, TAM);

    puts("\n\tVetor de Double:\n");
    double vetordoub[TAM];
    for(int i=0; i<TAM; i++){
        printf("Digite o %d numero double: ", (i+1));
        scanf("%lf", &vetordoub[i]);
    }
    imprimirVetorDoub(vetordoub, TAM);

    return 0;
}

void imprimirVetorInt(int *pVetorInt, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Numero(%d): %5d\t", (i+1), *(pVetorInt+i));
        printf("Endereco: %p\n", (pVetorInt+i));
    }
}

void imprimirVetorChar(char *pVetorChar, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Caractere(%d): %1c\t", (i+1), *(pVetorChar+i));
        printf("Endereco: %p\n", (pVetorChar+i));
    }

}

void imprimirVetorDoub(double *pVetorDoub, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Numero(%d): %5.2lf\t", (i+1), *(pVetorDoub+i));
        printf("Endereco: %p\n", (pVetorDoub+i));
    }
}

/*Observei que os diferentes tipos de variáveis possuem diferentes tamanhos de memória, 
isso afeta a "contagem" dos endereços consecutivos de cada tipo de vetor*/
