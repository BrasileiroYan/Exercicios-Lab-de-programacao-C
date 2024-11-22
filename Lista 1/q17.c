#include <stdio.h>
int main(){
  float raio;
  printf("Digite o raio do círculo: ");
  scanf("%f", &raio);
  printf("Diâmetro: %.2f\n", raio*2);
  printf("Circunferência: %.2f\n",raio*2*3.14159);
  printf("Área: %.2f", raio*raio*3.14159);
  return 0;
}