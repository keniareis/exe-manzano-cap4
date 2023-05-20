#include <stdio.h>

int main(){

    int a,b,c,r;
   
   printf("Digite o valor de A: ");
   scanf("%i", &a);
   printf("Digite o valor de B: ");
   scanf("%i", &b);
   printf("Digite o valor de C: ");
   scanf("%i", &c);

   r = a+b+c;
    if (r>=100)
    {
        printf("A soma dos valores e %i", r);
    }
    
    
}