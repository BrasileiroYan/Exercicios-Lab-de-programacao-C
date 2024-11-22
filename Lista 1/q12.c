#include <stdio.h>
int main(){
  int a, b, c;
  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  c = a, a = b, b = c;
  printf("Os valores invertidos são:\na = %d\nb = %d", a, b);
  return 0;
}