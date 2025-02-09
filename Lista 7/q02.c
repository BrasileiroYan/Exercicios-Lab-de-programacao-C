#include <stdio.h>

typedef struct{
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
}estoque;

void removerBuffer(estoque *item);

int main(void){
    estoque item;

    printf("Digite o nome da peca: ");
    fgets(item.nomePeca, 50, stdin);

    removerBuffer(&item);

    printf("Digite o numero da peca: ");
    scanf("%d", &item.numeroPeca);
    
    printf("Digite o preco da peca: ");
    scanf("%f", &item.preco);
    
    printf("Digite o numero do pedido: ");
    scanf("%d", &item.numeroPedido);
    
    printf("\nResumo do Pedido:\n");
    printf("Peca: %s\n", item.nomePeca);
    printf("Numero da peca: %d\n", item.numeroPeca);
    printf("Preco: R$%.2f\n", item.preco);
    printf("Numero do pedido: %d\n", item.numeroPedido);
    return 0;
}

void removerBuffer(estoque *item){
    int i = 0;
    while(item->nomePeca[i] != '\0'){
        if(item->nomePeca[i] == '\n'){
            item->nomePeca[i] = '\0';
            break;
        }
        i++;
    }
}