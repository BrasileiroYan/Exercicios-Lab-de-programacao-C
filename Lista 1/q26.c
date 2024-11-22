#include <stdio.h>
#include <math.h>
int main(){
  float num1, num2, num3, media_ari, media_geo;
  printf("Digite o 1º número: ");
  scanf("%f", &num1);
  printf("Digite o 2º número: ");
  scanf("%f", &num2);
  printf("Digite o 3º número: ");
  scanf("%f", &num3);
  media_ari = (num1+num2+num3) / 3;
  media_geo = pow((num1*num2)*num3, 1.0/3);
  printf("A média aritmética é %.1f\n", media_ari);
  printf("A média geométrica é %.1f", media_geo);

  return 0;
}