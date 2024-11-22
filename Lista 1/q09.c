#include <stdio.h>

int main(){

  int c, l, h, v;
  printf("Digite o comprimento da caixa, em metros: ");
  scanf("%d", &c);
  printf("Digite a largura da caixa, em metros: ");
  scanf("%d", &l);
  printf("Digite a altura da caixa, em metros: ");
  scanf("%d", &h);
  v = c * l * h;
  printf("O volume da caixa é %d m³", v);
  return 0;
}