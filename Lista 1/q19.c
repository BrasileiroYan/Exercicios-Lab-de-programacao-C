#include <stdio.h>
int main(){
  int x;
  printf("Digite um número: ");
  scanf("%d", &x);

  int y = (x%2)? puts("Ímpar") : puts("Par");

  return 0;
}