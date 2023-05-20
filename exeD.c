#include <stdio.h>

int main(){

    float n1,n2,n3,n4,M,E,nova_M;

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);
    printf("Digite a quarta nota: \n");
    scanf("%f", &n4);

    M = (n1+n2+n3+n4)/4;

    if (M >= 7)
    {
        printf("A sua media e %.2f\n", M);
        printf("APROVADO!\n");
    }
    else {
        printf("Qual a nota do exame? \n");
        scanf("%f", &E);

        nova_M = (M+E)/2;
        if (nova_M >= 5)
        {
            printf("A sua media e %.2f\n", nova_M);
            printf("APROVADO EM EXAME!\n");

        }
        else{
            printf("A sua media e %.2f\n", nova_M);
            printf("REPROVADO!\n");
        }
    }
}