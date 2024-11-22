#include <stdio.h>
#include <stdlib.h>
int main(){
  int num;
  printf("Digite um número: ");
  scanf("%d", &num);

  printf("|%d| = %d\n", num, abs(num));
  return 0;
}