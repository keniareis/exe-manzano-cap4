#include <stdio.h>

int main(){
    int a,b,ma,me,r;

    printf("Digite um numero: ");
    scanf("%i", &a);
    printf("Digite outro numero: ");
    scanf("%i", &b);

    if (a > b)
    {
        me = b;
        ma = a;
    }
    else{
        ma = b;
        me = a;
    }
     r = ma-me;

     printf("O maior numero e %i\n", ma);
     printf("O menor numero e %i\n", me);
     printf("O resultado da diferenca do maior pelo menor e %i", r);

     return 0;
}