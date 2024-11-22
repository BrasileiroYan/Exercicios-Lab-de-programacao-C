#include <stdio.h>
int main(){
  int in, seg, hora, min;
  printf("Digite os segundos totais: ");
  scanf("%d", &in);
  hora = in/3600;
  min = (in%3600)/60;
  seg = (in%3600)%60;
  printf("Segundos totais:%d\nH:%d\tM:%d\tS:%d",in,hora,min,seg);
  return 0;

}