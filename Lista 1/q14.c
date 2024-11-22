#include <stdio.h>
int main(){
  int dia;
  printf("Salário: R$50,25 por dia\n");
  printf("Digite a quantidade de dias trabalhados: ");
  scanf("%d", &dia);
  if (dia > 0 && dia <= 10){
    float sal = (50.25*dia)*0.9;
    printf("O total ganho trabalhando %d dias é R$%.2f",dia, sal);
  }
  else if (dia > 10 && dia <= 20){
    float sal = ((50.25*dia) + ((50.25*dia)*0.2))*0.9;
    printf("O total ganho trabalhando %d dias é R$%.2f",dia, sal);

  }
  else if (dia > 20){
    float sal = ((50.25*dia) + ((50.25*dia)*0.3))*0.9;
    printf("O total ganho trabalhando %d dias é R$%.2f",dia, sal);
  }
  else{
    printf("Opção de dia inválido!");
    return 1;
  }
  return 0;
}