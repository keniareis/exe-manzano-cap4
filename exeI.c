#include <stdio.h>

int main(){

    int a,b,c,d,e;

    printf("Digite o valor de A: ");
    scanf("%i", &a);
    printf("Digite o valor de B: ");
    scanf("%i", &b);
    printf("Digite o valor de C: ");
    scanf("%i", &c);
    printf("Digite o valor de D: ");
    scanf("%i", &d);
    printf("Digite o valor de E: ");
    scanf("%i", &e);

    if (a>b && a>c && a>d && a>e)
    {
        printf("%i e o maior valor\n", a);
    }
    if (b>a && b>c && b>d && b>e)
    {
        printf("%i e o maior valor\n", b);
    }
    if (c>a && c>b && c>d && c>e)
    {
        printf("%i e o maior valor\n", c);
    }
    if (d>a && d>b && d>c && d>e)
    {
        printf("%i e o maior valor\n", d);
    }
    if (e>a && e>b && e>c && e>d)
    {
        printf("%i e o maior valor\n", e);
    }
    if (a<b && a<c && a<d && a<e)
    {
        printf("%i e o menor valor\n", a);
    }
    if (b<a && b<c && b<d && b<e)
    {
        printf("%i e o menor valor\n", b);
    }
    if (c<a && c<b && c<d && c<e)
    {
        printf("%i e o menor valor\n", c);
    }
    if (d<a && d<b && d<c && d<e)
    {
        printf("%i e o menor valor\n", d);
    }
    if (e<a && e<b && e<c && e<d)
    {
        printf("%i e o menor valor\n", e);
    }
    
}