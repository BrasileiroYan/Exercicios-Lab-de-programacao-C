#include <stdio.h>
int main(){
  float valor_hora, hora_aula, percent_inss, inss, sal_bruto, sal_liquido;
  printf("Digite o valor da hora de trabalho: R$");
  scanf("%f", &valor_hora);
  printf("Digite o total de horas trabalhadas: ");
  scanf("%f", &hora_aula);
  printf("Digite o percentual de desconto do INSS: ");
  scanf("%f", &percent_inss);

  sal_bruto = valor_hora*hora_aula;
  inss = percent_inss / 100;
  sal_liquido = sal_bruto - (sal_bruto*inss);

  printf("Salário Bruto: R$%.2f\n", sal_bruto);
  printf("Salário Líquido: R$%.2f\n", sal_liquido);
  return 0;
}