#include <stdio.h>
int main(){
    int num, fatorial = 1, f;
    
    printf("Digite um número:");
    scanf("%d",&num);

    for (f = 1; f <= num; f++)
    {
        fatorial *= f;
    }
    
    printf("%d! = %d\n",num, fatorial);
    return 0;
}
