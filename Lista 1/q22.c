#include <stdio.h>
int main(){
  int num, cem, dez, uni, inverso;
  printf("Digite um número de 3 dígitos: ");
  scanf("%d", &num);
  cem = num/100;
  dez = (num/10)%10;
  uni = num%10;
  inverso = (uni*100) + (dez*10) + cem;

  printf("O inverso de %d é %d.",num,inverso);

  return 0;

}