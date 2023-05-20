#include <stdio.h>

int main(){

    float n1,n2,n3,n4,M;

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);
    printf("Digite a quarta nota: \n");
    scanf("%f", &n4);

    M = (n1+n2+n3+n4)/4;

    if (M >= 5)
    {
        printf("Sua media e de %.2f voce foi APROVADO!\n", M);
    }
    else{
        printf("Sua media e de %.2f voce foi REPROVADO!\n", M);
    }
    return 0;
}