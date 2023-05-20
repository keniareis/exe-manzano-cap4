#include <stdio.h>

int main(){

    int a,b,c,d;

    printf("Digite o valor de A: ");
    scanf("%i", &a);
    printf("Digite o valor de B: ");
    scanf("%i", &b);
    printf("Digite o valor de C: ");
    scanf("%i", &c);
    printf("Digite o valor de D: ");
    scanf("%i", &d);

    if (a % 2 == 0 && a%3 == 0) 
    {
        printf("%i e divisivel por 2 e por 3\n", a);
    }
    if (b%2 == 0 && b%3 == 0) 
    {
        printf("%i e divisivel por 2 e por 3\n", b);
    }
    if (c%2 == 0 && c%3 == 0) 
    {
        printf("%i e divisivel por 2 e por 3\n", c);
    }
    if (d%2 == 0 && d%3 == 0) 
    {
        printf("%i e divisivel por 2 e por 3\n", d);
    }
    return 0;
}