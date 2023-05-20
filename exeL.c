#include <stdio.h>

int main(){

    int a;
    
    printf("Digite um numero: ");
    scanf("%i", &a);

    if (!(a>=3))
    {
        printf("O valor %i e menor que 3", a);
    }
    else
    {
        printf("O valor e maior que 3");
    }
    return 0;
}