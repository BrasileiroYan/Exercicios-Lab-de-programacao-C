#include <stdio.h>
#include <stdlib.h>

void operacao(char oper, int num1, int num2);

int main(int argc, char *argv[]){
    if(argc != 4){
        printf("\n\tFormato: <%s> <Operacao> <Numero 1> <numero 2>\n", argv[0]);
        exit(1);
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    char oper = *argv[1];

    operacao(oper, num1, num2);
    
    return 0;
}

void operacao(char oper, int num1, int num2){
    if(oper == 'S' || oper == 's'){
        int resultado =  num1 + num2;
        printf("%d + %d = %d\n", num1, num2, resultado);
    }
    else if(oper == 'M' || oper == 'm'){
        int resultado =  num1 * num2;
        printf("%d * %d = %d\n", num1, num2, resultado);
    }
    else{
        puts("Erro");
        exit(2);
    }

}
