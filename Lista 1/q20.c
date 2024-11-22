#include <stdio.h>
int main(){
  int num1, num2;
  printf("Digite o 1º número: ");
  scanf("%d", &num1);
  printf("Digite o 2º número: ");
  scanf("%d", &num2);

  int y = (num1%num2)? puts("Não é múltiplo") : puts("Múltiplo");

  return 0;
}