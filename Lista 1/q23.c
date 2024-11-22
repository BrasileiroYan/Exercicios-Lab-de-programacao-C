#include <stdio.h>
int main(){
  int x, n, result;
  printf("Digite um número x: ");
  scanf("%d", &x);
  printf("Digite um número n: ");
  scanf("%d", &n);

  result = x << n;
  printf("%d * 2^%d = %d",x,n,result);
  return 0;

}