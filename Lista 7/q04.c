#include <stdio.h>
#define QTD 3

typedef struct{
    float nota1;
    float nota2;
    float media;
}aluno;

void receberDadosAlunos(aluno *dadosAluno, int numAluno);
float calcularMedias(aluno *dadosAluno, int numAluno);

int main(void){
    
    aluno alunos[QTD];

    receberDadosAlunos(alunos, QTD);    

    float media = calcularMedias(alunos, QTD);

    printf("\nMedia das notas: %.1f\n", media);
    return 0;
}

void receberDadosAlunos(aluno *dadosAluno, int numAluno){
    for(int i=0; i<numAluno; i++){
        printf("\n\tAluno %d:\n", i+1);
        printf("Digite a 1 nota: ");
        scanf("%f", &dadosAluno[i].nota1);
    
        printf("Digite a 2 nota: ");
        scanf("%f", &dadosAluno[i].nota2);    
    }
}

float calcularMedias(aluno *dadosAluno, int numAluno){
    float mediaFinal, somaMedias = 0;

    for(int i=0; i<numAluno; i++){
        dadosAluno[i].media = (dadosAluno[i].nota1 + dadosAluno[i].nota2) / 2;
    }
    
    for(int i=0; i<numAluno; i++){
        somaMedias += dadosAluno[i].media;
    }

    return mediaFinal = somaMedias / numAluno;
}
