#include <stdio.h>

int main(){

    int a,b,c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    if (a>b)
    {
        if (b>c)
        {
            printf("%d, %d, %d\n", c, b, a);
        }
        else
        {
            if (a>c)
            {
                printf("%d, %d, %d", b, c, a);
            }
            else
            {
               printf("%d, %d, %d", b, a,c);  
            }
        }
    }
    else
    {
        if (b>c)
        {
            if (a>c)
            {
                printf("%d, %d, %d", c, a, b);
            }
            else
            {
                printf("%d, %d, %d", a, c, b);
            }
            
        }
        else
        {
            printf("%d, %d, %d", a, b, c);
        }
        
    }
return 0;
}