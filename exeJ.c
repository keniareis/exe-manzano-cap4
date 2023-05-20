#include <stdio.h>

int main(){

    int a;

    printf("Digite um numero: ");
    scanf("%i", &a);

    if (a%2 == 1)
    {
        printf("%i e impar", a);
    }
    else
    {
        printf("%i e par", a);
    }
    return 0;
}