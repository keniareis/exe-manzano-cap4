#include <stdio.h>

int main(){

    int a;
    printf("Digite um numero positivo ou negativo: ");
    scanf("%i", &a);

    if (a < 0)
    {
        a = a * (-1);
    }

    printf("O valor positivo e: %i", a);

    return 0;
}