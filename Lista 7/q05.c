#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char titulacao[30]; 
}professor;

typedef struct {
    char nome[50];
    int codigo;
    professor professor; 
}disciplina;

void removerBuffer(char *string);

int main(void){
    disciplina disciplina;

    printf("Digite o nome da disciplina: ");
    fgets(disciplina.nome, 50, stdin);
    removerBuffer(disciplina.nome);

    printf("Digite o código da disciplina: ");
    scanf("%d", &disciplina.codigo);
    getchar();

    printf("Digite o nome do professor: ");
    fgets(disciplina.professor.nome, 50, stdin);
    removerBuffer(disciplina.professor.nome);

    printf("Digite a titulação do professor: ");
    fgets(disciplina.professor.titulacao, 30, stdin);
    removerBuffer(disciplina.professor.titulacao);

    printf("\nResumo da Disciplina:\n");
    printf("Nome: %s\n", disciplina.nome);
    printf("Código: %d\n", disciplina.codigo);
    printf("Professor: %s\n", disciplina.professor.nome);
    printf("Titulação: %s\n", disciplina.professor.titulacao);
    return 0;
}

void removerBuffer(char *string){
    size_t len = strlen(string);
    if(len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }
}
