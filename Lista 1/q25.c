#include <stdio.h>
#include <math.h>
int main(){
  double x1, y1, x2, y2, distancia;
  printf("Digite as coordenadas do 1º ponto [x1,y1]: ");
  scanf("%lf %lf", &x1, &y1);
  printf("Digite as coordenadas do 2º ponto [x2,y2]: ");
  scanf("%lf %lf", &x2, &y2);

  distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

  printf("A distância entre os pontos é %.2f", distancia);
  return 0;
}