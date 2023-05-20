#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float A,B,C,delta,x1,x2;

    printf("Digite o valoe de A: ");
    scanf("%f", &A);
    printf("Digite o valoe de B: ");
    scanf("%f", &B);
    printf("Digite o valoe de C: ");
    scanf("%f", &C);
   
    delta = pow(B,2) - 4*A*C;
    printf("O valor de delta e %.2f\n",delta);

    x1 = (-B+sqrt(delta))/(2*A);
    x2 = (-B-sqrt(delta))/(2*A);

    if (delta < 0)
    {
        printf("Nao tem solucao real para Delta < 0 \n");
    }
    if (delta > 0)
    {
        printf("Temos duas solucoes reais e diferentes: \n");
        printf("primeira solucao: %.2f\n", x1);
        printf("Segunda solucao : %.2f\n", x2);

    }
    if (delta = 0)
    {
        printf("Temos apenas uma solucao real\n");
        printf("Solucao: %.2f", x1);
    } 

     return 0;
}