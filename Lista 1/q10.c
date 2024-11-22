#include <stdio.h>
int main(){

  float real, cotacao, dol;
  printf("Digite o valor em reais: R$");
  scanf("%f", &real);
  printf("Digite a cotação do dólar: ");
  scanf("%f", &cotacao);
  dol = real/cotacao;
  printf("O valor em dólares é: US$%.2f\n", dol);
  return 0;
}