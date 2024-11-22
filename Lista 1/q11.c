#include <stdio.h>
int main(){

  int x, y;
  printf("Digite o 1º número: ");
  scanf("%d", &x);
  printf("Digite o 2º número: ");
  scanf("%d", &y);
  printf("%d + %d = %d\n", x, y, x+y);
  printf("%d - %d = %d\n", x, y, x-y);
  printf("%d * %d = %d\n", x, y, x*y);
  printf("%d / %d = %.2f\n", x, y, (float)x/y);
  return 0;
}