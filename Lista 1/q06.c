#include <stdio.h>

int main(){

    int h, m, s;
    printf("Digite o total de horas: ");
    scanf("%d", &h);
    printf("Digite o total de minutos: ");
    scanf("%d", &m);
    printf("Digite o total de segundos: ");
    scanf("%d", &s);
    int totalseg = (h*3600) + (m*60) + s;
    printf("H:%d M:%d S:%d\n", h, m, s);
    printf("O total de segundos foi %d\n", totalseg);

    return 0;
}